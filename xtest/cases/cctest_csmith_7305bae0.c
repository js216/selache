// SPDX-License-Identifier: MIT
// cctest_csmith_7305bae0.c --- cctest case csmith_7305bae0 (csmith seed 1929755360)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xca2f3a6d */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1929755360 -o /tmp/csmith_gen_sx4p1uu9/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint64_t  f0;
   const uint16_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)

struct S2 {
   uint8_t  f0;
   struct S1  f1;
   int32_t  f2;
   uint32_t  f3;
};

struct S3 {
   uint64_t  f0;
};

union U6 {
   const struct S2  f0;
   int32_t  f1;
};


static int32_t g_2 = 0x44555950L;
static int32_t g_6 = 0x80C3414BL;
static int8_t g_8 = 0L;
static struct S2 g_30 = {0xD0L,{0x8BBE58ED0BD2F23DLL,0x7F4AL,0xD2DAFFA898CBDB62LL},-1L,18446744073709551615UL};
static int32_t g_56 = 0xC3C1A33FL;
static struct S3 g_58[4][3][4] = {{{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}}},{{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}}},{{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}}},{{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}},{{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL},{0x08949E3B93F16A1ELL}}}};
static int8_t g_71 = (-1L);
static const union U6 g_73 = {{0UL,{0x1065C771C75621C9LL,0x8392L,18446744073709551612UL},4L,0x36B79BA4L}};
static uint64_t g_99 = 0x1B4BD6B4620FE39ELL;
static uint64_t g_102 = 18446744073709551608UL;
static int32_t g_107 = 3L;
static uint32_t g_108[2] = {0xED91EE60L,0xED91EE60L};
static uint64_t g_117 = 0x9711EE9290BC8DDDLL;
static int32_t g_124 = 7L;
static int16_t g_170 = 0x4EADL;
static uint8_t g_173 = 248UL;
static uint8_t g_185 = 1UL;
static uint32_t g_194 = 0xD63981B1L;
static struct S0 g_205[4][2] = {{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}};
static int16_t g_228[3][3] = {{6L,6L,1L},{6L,6L,1L},{6L,6L,1L}};
static int64_t g_237[1] = {(-3L)};
static uint32_t g_240[2] = {0x62993E52L,0x62993E52L};



static union U6  func_1(void);
static const uint64_t  func_9(union U6  p_10, uint16_t  p_11, uint32_t  p_12, int8_t  p_13);
static union U6  func_14(const union U6  p_15, int16_t  p_16, struct S0  p_17);
static const union U6  func_18(int32_t  p_19);




static union U6  func_1(void)
{ 
    uint8_t l_5[2][3][3] = {{{0x18L,1UL,0UL},{0x41L,1UL,0x41L},{0x9EL,0x18L,0UL}},{{0x9EL,0x9EL,0x18L},{0x41L,0x18L,0x18L},{0x18L,1UL,0UL}}};
    struct S0 l_75 = {0L};
    int8_t l_171[2][3][5] = {{{0L,0xE3L,0xE3L,0L,0L},{1L,0xAFL,1L,0xAFL,1L},{0L,0L,0xE3L,0xE3L,0L}},{{1L,0xAFL,1L,0xAFL,1L},{0L,0xE3L,0xE3L,0L,0L},{1L,0xAFL,1L,0xAFL,1L}}};
    int32_t l_172 = 0x57B94B59L;
    uint64_t l_187 = 0x4F9A3E397D913FAELL;
    int i, j, k;
    for (g_2 = 14; (g_2 >= 5); g_2 = safe_sub_func_int16_t_s_s(g_2, 8))
    { 
        uint64_t l_74 = 1UL;
        for (g_6 = 1; (g_6 >= 0); g_6 -= 1)
        { 
            uint16_t l_7 = 0x4A90L;
            g_8 = l_7;
            for (l_7 = 0; (l_7 <= 1); l_7 += 1)
            { 
                int i, j, k;
                l_171[1][0][4] |= ((l_5[l_7][(g_6 + 1)][(l_7 + 1)] , l_5[1][1][1]) == func_9(func_14(func_18((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((g_2 >= (safe_sub_func_uint32_t_u_u((l_5[0][0][1] <= l_5[1][0][1]), g_6))), g_8)), 0xC44D996497440271LL))), l_74, l_75), l_74, g_73.f0.f1.f1, g_107));
                g_173++;
                if (g_30.f1.f2)
                    break;
            }
        }
    }
    for (g_30.f2 = 0; (g_30.f2 >= (-15)); --g_30.f2)
    { 
        int32_t l_186 = (-2L);
        struct S0 l_198 = {0x38AAF256L};
        int32_t l_229 = 3L;
        if (((safe_div_func_uint8_t_u_u(((l_172 || ((safe_rshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u((+0UL), (((g_185 = g_173) & 8L) != l_75.f0))) && g_2) & 0UL), 0)) != l_186)) | l_186), l_187)) || g_170))
        { 
            int64_t l_195 = 0x789D2C2FFDF52C73LL;
            struct S0 l_204 = {0x55CF6CD2L};
            int32_t l_213 = (-1L);
            if ((safe_mul_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u(g_6, 15)) <= g_185) <= (g_194 = l_75.f0)), 7L)) != l_186) || l_172) > l_195), l_195)))
            { 
                uint32_t l_203[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_203[i] = 7UL;
                g_2 = ((safe_lshift_func_uint16_t_u_u((((l_198 , l_198.f0) , (((safe_div_func_int8_t_s_s(l_195, (g_185 |= (safe_sub_func_int32_t_s_s(g_73.f0.f0, l_198.f0))))) , g_185) < l_186)) < l_187), 7)) || (-1L));
                if (l_203[0])
                    continue;
                g_205[2][1] = l_204;
            }
            else
            { 
                int8_t l_206[3][3] = {{(-4L),(-4L),(-4L)},{0xE6L,0xE6L,0xE6L},{(-4L),(-4L),(-4L)}};
                int i, j;
                if (l_206[0][2])
                    break;
            }
            l_172 = ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_30.f1.f0, ((g_170 |= (-6L)) == (((safe_rshift_func_int16_t_s_s((l_213 = l_171[1][0][4]), (safe_add_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(1L, l_198.f0)) != 247UL) > g_205[2][1].f0), 1L)))) != g_117) , l_5[1][2][2])))), 3)) | l_198.f0);
            g_6 &= (safe_add_func_uint32_t_u_u(g_30.f1.f2, l_195));
        }
        else
        { 
            for (l_75.f0 = 24; (l_75.f0 >= (-13)); --l_75.f0)
            { 
                return g_73;
            }
        }
        if ((0xF86AFBF6L || (65535UL >= (safe_div_func_int32_t_s_s(((l_229 = (g_228[2][2] ^= (safe_mul_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((((-8L) ^ (((l_75 , g_117) | 0x126EL) , g_30.f2)) & 1UL), l_198.f0)) <= l_5[1][0][2]) ^ l_75.f0), 0x6569L)))) >= g_30.f1.f0), g_194)))))
        { 
            struct S3 l_234 = {0xEA89C3933B6CD964LL};
            int32_t l_238 = 0x21493796L;
            int32_t l_239 = (-1L);
            l_172 |= ((l_229 >= (safe_mod_func_int32_t_s_s((2L > (((l_234 , (safe_lshift_func_uint16_t_u_u((g_240[1]--), 14))) & 0UL) & 0x567F5F9C3501AD26LL)), (-8L)))) ^ 0x45CD9686125EB5E7LL);
        }
        else
        { 
            int8_t l_245 = 0x39L;
            g_124 = (l_229 = (g_108[0] != (safe_div_func_int32_t_s_s(g_71, l_171[1][0][4]))));
            g_124 = ((l_245 <= g_99) && (safe_mul_func_int16_t_s_s(l_245, (safe_unary_minus_func_uint64_t_u(1UL)))));
        }
    }
    return g_73;
}



static const uint64_t  func_9(union U6  p_10, uint16_t  p_11, uint32_t  p_12, int8_t  p_13)
{ 
    uint32_t l_168 = 4294967290UL;
    int32_t l_169 = 0x77B4B0E1L;
    g_170 ^= (0x31L > (g_107 > (l_169 |= (safe_div_func_uint32_t_u_u((g_73.f0.f1.f1 & l_168), g_124)))));
    return g_56;
}



static union U6  func_14(const union U6  p_15, int16_t  p_16, struct S0  p_17)
{ 
    uint64_t l_81 = 0x769E501E45A2DC96LL;
    struct S3 l_82[4][4] = {{{7UL},{7UL},{7UL},{7UL}},{{18446744073709551615UL},{7UL},{0x87DF3DEF630FE8BALL},{7UL}},{{7UL},{2UL},{0x87DF3DEF630FE8BALL},{0x87DF3DEF630FE8BALL}},{{18446744073709551615UL},{18446744073709551615UL},{7UL},{0x87DF3DEF630FE8BALL}}};
    int32_t l_83[4][1][2] = {{{0xFEE841A1L,0xFB02C871L}},{{0xFEE841A1L,0xFEE841A1L}},{{0xFB02C871L,0xFEE841A1L}},{{0xFEE841A1L,0xFB02C871L}}};
    int32_t l_140 = 0x1F803E92L;
    union U6 l_165 = {{0x56L,{18446744073709551615UL,65535UL,0UL},0x24557DD3L,2UL}};
    int i, j, k;
    if ((safe_mul_func_uint16_t_u_u((l_83[1][0][1] = ((l_81 = (safe_lshift_func_int8_t_s_u((g_71 ^= (~0UL)), 2))) ^ (l_82[3][1] , l_82[3][1].f0))), g_30.f3)))
    { 
        int16_t l_97 = 0x64A1L;
        int32_t l_100 = 1L;
        for (g_30.f1.f2 = 0; (g_30.f1.f2 <= 0); g_30.f1.f2 += 1)
        { 
            uint32_t l_87[5][2][1] = {{{0x222DE5CCL},{0xC6F3D133L}},{{0x222DE5CCL},{0xC6F3D133L}},{{0x222DE5CCL},{0xC6F3D133L}},{{0x222DE5CCL},{0xC6F3D133L}},{{0x222DE5CCL},{0xC6F3D133L}}};
            int i, j, k;
            for (g_30.f2 = 0; (g_30.f2 <= 3); g_30.f2 += 1)
            { 
                uint32_t l_84[5][3][5] = {{{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L},{3UL,3UL,3UL,3UL,3UL},{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L}},{{3UL,3UL,3UL,3UL,3UL},{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L},{3UL,3UL,3UL,3UL,3UL}},{{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L},{3UL,3UL,3UL,3UL,3UL},{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L}},{{3UL,3UL,3UL,3UL,3UL},{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L},{3UL,3UL,3UL,3UL,3UL}},{{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L},{3UL,3UL,3UL,3UL,3UL},{0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L,0x47EB4981L}}};
                int32_t l_98[3][4] = {{(-1L),0x56DA865BL,4L,0x56DA865BL},{0x56DA865BL,(-1L),4L,4L},{(-1L),(-1L),0x56DA865BL,4L}};
                int i, j, k;
                l_87[1][1][0] = (l_84[2][2][2] & (safe_sub_func_int8_t_s_s((-1L), l_84[2][2][2])));
                l_100 = (g_99 &= ((l_98[1][1] = (safe_mod_func_uint32_t_u_u(((((!(safe_mod_func_uint64_t_u_u((p_15.f0.f1 , (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_30.f2, l_84[2][2][2])), 8UL))), g_30.f1.f0))) && 249UL) ^ l_97) , p_15.f0.f3), g_30.f0))) >= p_17.f0));
                l_100 = g_30.f2;
            }
            if (g_73.f0.f2)
                continue;
            for (p_16 = 0; (p_16 <= 3); p_16 += 1)
            { 
                g_102 |= (~g_73.f0.f1.f1);
            }
        }
    }
    else
    { 
        struct S3 l_103 = {7UL};
        int32_t l_105 = 1L;
        int32_t l_164 = 1L;
        l_103 = l_82[3][1];
        if ((5UL | (g_30.f1 , (g_30.f1.f2 & ((8UL > g_99) , g_30.f2)))))
        { 
            int16_t l_104 = 1L;
            int32_t l_106 = (-1L);
            int16_t l_139 = 0x45D7L;
            --g_108[0];
            for (l_103.f0 = 0; (l_103.f0 <= 3); l_103.f0 += 1)
            { 
                int8_t l_111 = 0xD8L;
                l_106 = ((g_108[0] == (l_111 || (safe_add_func_int64_t_s_s(g_99, ((safe_unary_minus_func_int32_t_s(((((safe_mul_func_uint16_t_u_u((g_117 |= g_102), 0L)) == 1UL) & g_30.f2) >= p_15.f0.f0))) >= 3L))))) == 1UL);
                g_124 = (safe_sub_func_uint64_t_u_u(1UL, (((((((g_73.f0.f1.f1 | ((safe_rshift_func_int16_t_s_u((p_15.f0.f1.f0 > (safe_sub_func_int16_t_s_s((0UL & p_15.f0.f2), l_111))), 2)) >= 0L)) , 246UL) | 0xC4L) > 7L) & l_111) & g_71) == 0L)));
                l_140 |= (((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((g_2 , (((safe_rshift_func_uint8_t_u_u((g_73.f0 , (safe_div_func_uint16_t_u_u((((1L > ((l_83[2][0][0] = (((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(l_105, g_30.f0)) ^ g_71), p_15.f0.f0)) <= p_15.f0.f1.f0) ^ g_108[0])) , 0x0F6EL)) <= 0xC87ACCF6E19BD86ALL) ^ l_82[3][1].f0), p_15.f0.f1.f0))), 3)) >= p_15.f0.f1.f2) && p_15.f0.f0)), l_139)) >= 0xB385L), 0xEB622342L)) < g_8), g_108[1])) <= 2L) , 0xBBD39C2EL);
            }
            for (l_140 = 17; (l_140 < (-25)); l_140 = safe_sub_func_uint16_t_u_u(l_140, 5))
            { 
                l_105 = p_15.f0.f2;
            }
        }
        else
        { 
            uint32_t l_146 = 0x984D6A5DL;
            int32_t l_163 = 0L;
            l_164 ^= (9L || ((((safe_lshift_func_int16_t_s_u((+(l_146 = l_105)), (safe_mod_func_int64_t_s_s((g_102 == (l_83[1][0][0] = (g_124 |= (safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((l_163 == g_30.f1.f2) != p_15.f0.f2), p_15.f0.f3)), l_163)) == p_17.f0) , p_15.f0.f3) > 1L) || 0x5EF7775CL), l_163)), p_15.f0.f1.f2)), 2)), 0x99B2L)) , g_73.f0.f1.f1), l_83[2][0][0]))))), (-1L))))) < g_73.f0.f1.f1) || l_105) == p_16));
            l_105 = p_15.f0.f0;
            l_82[3][1] = g_58[2][1][1];
        }
        l_82[3][1] = l_103;
    }
    return l_165;
}



static const union U6  func_18(int32_t  p_19)
{ 
    const struct S3 l_41 = {0x2E7DFE98D7E942FALL};
    struct S0 l_44[1][5] = {{{1L},{1L},{1L},{1L},{1L}}};
    uint8_t l_54 = 0UL;
    struct S3 l_59 = {18446744073709551615UL};
    int32_t l_70[5][3][4] = {{{(-7L),6L,(-7L),0L},{(-7L),0L,0L,(-7L)},{0xB2EF76CAL,0L,0x030DEE2CL,0L}},{{0L,6L,0x030DEE2CL,0x030DEE2CL},{0xB2EF76CAL,0xB2EF76CAL,0L,0x030DEE2CL},{(-7L),6L,(-7L),0L}},{{(-7L),0L,0L,(-7L)},{0xB2EF76CAL,0L,0x030DEE2CL,0L},{0L,6L,0x030DEE2CL,0x030DEE2CL}},{{0xB2EF76CAL,0xB2EF76CAL,0L,0x030DEE2CL},{(-7L),6L,(-7L),0L},{(-7L),0L,0L,(-7L)}},{{0xB2EF76CAL,0L,0x030DEE2CL,0L},{0L,6L,0x030DEE2CL,0x030DEE2CL},{0xB2EF76CAL,0xB2EF76CAL,0L,0x030DEE2CL}}};
    struct S0 l_72 = {1L};
    int i, j, k;
    if (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((g_30.f1.f2 = (g_30 , 0x0C653DDB2097E65FLL)) & (safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(((((p_19 < ((+((l_41 , l_41.f0) && 1L)) | 1L)) == g_8) | p_19) & l_41.f0), l_41.f0)) == g_30.f3) < p_19) ^ l_41.f0), l_41.f0)))) <= p_19), p_19)) <= l_41.f0) != 0xA8E7L), 0x4BFCL))), p_19)), g_2)) ^ l_41.f0))
    { 
        int32_t l_42[1][1][5] = {{{0x8E5EFB48L,0x8E5EFB48L,0x8E5EFB48L,0x8E5EFB48L,0x8E5EFB48L}}};
        int32_t l_43 = 0xFA237FF9L;
        struct S0 l_45 = {0xEAD942A2L};
        int i, j, k;
lbl_57:
        for (g_30.f3 = 0; (g_30.f3 <= 0); g_30.f3 += 1)
        { 
            l_43 = 0xA0BDEC7EL;
            l_45 = l_44[0][3];
            p_19 ^= g_8;
            for (g_30.f1.f2 = 0; (g_30.f1.f2 <= 0); g_30.f1.f2 += 1)
            { 
                uint32_t l_55 = 0xEFF443A5L;
                if (p_19)
                    break;
                p_19 = (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(p_19, 14)), (g_30.f1 , ((0x7D66A435L >= g_30.f0) >= l_54)))), 15)), g_2));
                if (l_54)
                    goto lbl_57;
                g_56 ^= l_55;
            }
        }
        l_59 = g_58[2][1][2];
        l_70[4][2][3] &= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(p_19, g_30.f0)) != ((safe_mod_func_int8_t_s_s(l_54, ((l_44[0][3].f0 | g_30.f1.f2) ^ 0x345DL))) > p_19)), 0x774A768641A018BFLL)) <= g_30.f2), 5)), p_19));
    }
    else
    { 
        g_71 |= (-10L);
    }
    l_72 = l_44[0][3];
    return g_73;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1.f0, "g_30.f1.f0", print_hash_value);
    transparent_crc(g_30.f1.f1, "g_30.f1.f1", print_hash_value);
    transparent_crc(g_30.f1.f2, "g_30.f1.f2", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_58[i][j][k].f0, "g_58[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73.f0.f0, "g_73.f0.f0", print_hash_value);
    transparent_crc(g_73.f0.f1.f0, "g_73.f0.f1.f0", print_hash_value);
    transparent_crc(g_73.f0.f1.f1, "g_73.f0.f1.f1", print_hash_value);
    transparent_crc(g_73.f0.f1.f2, "g_73.f0.f1.f2", print_hash_value);
    transparent_crc(g_73.f0.f2, "g_73.f0.f2", print_hash_value);
    transparent_crc(g_73.f0.f3, "g_73.f0.f3", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);

    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_205[i][j].f0, "g_205[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_228[i][j], "g_228[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_237[i], "g_237[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_240[i], "g_240[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
