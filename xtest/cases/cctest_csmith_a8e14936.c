// SPDX-License-Identifier: MIT
// cctest_csmith_a8e14936.c --- cctest case csmith_a8e14936 (csmith seed 2833336630)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5e70f9c */

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

// Options:   -s 2833336630 -o /tmp/csmith_gen_l038tmhc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint64_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   int8_t  f3;
   uint32_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int16_t  f1;
};

union U3 {
   int32_t  f0;
   const struct S1  f1;
};


static int32_t g_2 = 0L;
static struct S1 g_32 = {1UL,0xE6L,0x6845L,0L,0xA08376FBL,0xCC013CEF33920027LL};
static struct S1 g_35[4] = {{1UL,255UL,0x10B4L,2L,0UL,18446744073709551614UL},{1UL,255UL,0x10B4L,2L,0UL,18446744073709551614UL},{1UL,255UL,0x10B4L,2L,0UL,18446744073709551614UL},{1UL,255UL,0x10B4L,2L,0UL,18446744073709551614UL}};
static union U3 g_104 = {1L};
static const int16_t g_111[4][1] = {{0L},{0x4760L},{0L},{0x4760L}};
static uint16_t g_113 = 2UL;
static const struct S0 g_114 = {9L,18446744073709551612UL};
static int64_t g_141 = 0L;
static uint32_t g_144 = 0x4E932704L;
static uint16_t g_147 = 0xADB1L;
static uint16_t g_159 = 0x16D0L;
static int32_t g_164 = 3L;
static int64_t g_171[4] = {(-6L),(-6L),(-6L),(-6L)};
static int32_t g_172[1][4][1] = {{{0x1E9EB336L},{0L},{0x1E9EB336L},{0L}}};
static int16_t g_173 = 0xF446L;
static int8_t g_176 = 5L;
static uint64_t g_177 = 0x26C60711D43F7002LL;
static int32_t g_207 = 2L;



static int16_t  func_1(void);
static uint32_t  func_11(const int32_t  p_12, int16_t  p_13, int32_t  p_14, const struct S0  p_15, uint32_t  p_16);
static int16_t  func_22(uint16_t  p_23, uint32_t  p_24, struct S1  p_25, struct S1  p_26, int32_t  p_27);
static uint16_t  func_36(uint32_t  p_37, int32_t  p_38, union U2  p_39, int32_t  p_40, int8_t  p_41);




static int16_t  func_1(void)
{ 
    int8_t l_31 = 0xFCL;
    int32_t l_34 = 0x9F41ADF8L;
    uint32_t l_220 = 18446744073709551615UL;
    for (g_2 = 0; (g_2 <= (-18)); g_2 = safe_sub_func_int8_t_s_s(g_2, 7))
    { 
        int16_t l_28 = (-10L);
        struct S1 l_33 = {9UL,0xD4L,0x4B26L,0x8FL,0xC328129EL,0x6EA3D88101AEDF47LL};
        int32_t l_217 = (-8L);
        g_207 ^= (safe_add_func_int64_t_s_s(g_2, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((func_11(g_2, (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(func_22(l_28, ((l_31 = (+(!g_2))) > (-1L)), g_32, l_33, l_34), g_104.f0)), 0)))), l_33.f1, g_114, g_32.f0) , 0x5155L), l_33.f2)), 10))));
        l_217 = (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_113 |= ((l_34 != (g_171[0] |= (~g_147))) && (safe_add_func_int16_t_s_s((l_33.f3 <= 0xC7DD24A243EC4722LL), 0L)))), 7)), l_33.f2)) && l_34) , g_147) && 0x6CF8L), l_33.f2));
        l_217 = (l_33.f3 < (((safe_mod_func_uint32_t_u_u(g_32.f2, l_31)) & 2L) && g_159));
    }
    --l_220;
    return g_171[1];
}



static uint32_t  func_11(const int32_t  p_12, int16_t  p_13, int32_t  p_14, const struct S0  p_15, uint32_t  p_16)
{ 
    int16_t l_140[5][4] = {{0L,(-1L),1L,(-1L)},{(-1L),0xC9B4L,1L,1L},{0L,0L,(-1L),1L},{(-4L),0xC9B4L,(-4L),(-1L)},{(-4L),(-1L),(-1L),(-4L)}};
    union U2 l_166 = {-7L};
    int32_t l_169 = 1L;
    int32_t l_170 = 1L;
    int32_t l_174 = 0L;
    int32_t l_175[1][3][1];
    struct S0 l_206 = {-1L,0x83FB63F38E196A49LL};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_175[i][j][k] = 0L;
        }
    }
    for (g_32.f2 = 0; (g_32.f2 <= 3); g_32.f2 += 1)
    { 
        int32_t l_143 = 0xE8AE3155L;
        struct S1 l_156 = {0x4F5D4AB6L,0x82L,0x21F0L,0x73L,18446744073709551615UL,0x31699C01AE01D719LL};
        for (p_16 = 0; (p_16 <= 3); p_16 += 1)
        { 
            const uint8_t l_137 = 0x9BL;
            int32_t l_142[3];
            int i;
            for (i = 0; i < 3; i++)
                l_142[i] = 0xECF97261L;
            if ((safe_sub_func_int8_t_s_s((p_15.f1 == (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((g_32.f3 = (safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((l_142[0] &= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(l_137, ((safe_add_func_int32_t_s_s((g_35[p_16] , (((((g_32.f0 = (l_140[2][2] < l_140[3][1])) <= 4294967295UL) , p_14) | g_141) & 65531UL)), g_114.f1)) <= g_35[p_16].f4))) & p_15.f0), g_111[2][0])) > 0xDA3065BCB3CA981ALL), p_15.f0)) <= g_2), p_15.f0)), g_32.f4))), g_113)) >= g_141), l_140[4][3]))), p_16)), l_143)) == 0xE5L), p_16))), p_15.f1)))
            { 
                g_144++;
                return p_16;
            }
            else
            { 
                uint64_t l_158 = 0xEF2C45E82407D1D3LL;
                g_147--;
                g_159 = (safe_div_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(0x4A04BA90L, 0xD41E4D89L)) < (l_156 , (!1L))) & l_158), 0x223408E3L));
                g_164 |= (p_15.f0 >= ((safe_add_func_int64_t_s_s(g_2, 0x8A6797DE492F91EALL)) > (l_143 ^= (l_142[0] = 0L))));
            }
        }
        l_143 = (safe_unary_minus_func_int64_t_s(l_156.f4));
    }
    if (((l_166 , (((g_32.f1 = l_166.f1) && 0x7FL) != 0x8780L)) == g_111[0][0]))
    { 
        int16_t l_167 = 0x3CC6L;
        int32_t l_168[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_168[i][j] = (-1L);
        }
        g_177++;
        for (p_13 = 13; (p_13 < 19); p_13 = safe_add_func_uint16_t_u_u(p_13, 2))
        { 
            uint64_t l_204 = 0x0EAC7FC37B351C66LL;
            for (l_169 = (-2); (l_169 > 29); ++l_169)
            { 
                int16_t l_205 = 0xD573L;
                l_170 |= (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((g_173 & (safe_sub_func_uint64_t_u_u(g_111[2][0], ((((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((l_168[0][2] = ((safe_mod_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(p_16, (0L == p_15.f1))), p_12)) ^ l_204), g_171[0])) | 7UL)) < 0UL) , p_14), p_16)), 6)), p_12)), l_205)) != p_16) | l_167) && p_12)))) <= 0x0657D6C4L) || p_15.f1) ^ l_140[2][2]), g_32.f1)), 0x0279L));
            }
        }
    }
    else
    { 
        return p_14;
    }
    l_206 = g_114;
    return p_12;
}



static int16_t  func_22(uint16_t  p_23, uint32_t  p_24, struct S1  p_25, struct S1  p_26, int32_t  p_27)
{ 
    uint64_t l_56 = 0xD7AFF79C94D23A2CLL;
    if (p_25.f1)
    { 
        return g_2;
    }
    else
    { 
        union U2 l_57 = {4L};
        int32_t l_99 = 0L;
        int32_t l_100 = 0x1BD6F38CL;
        int32_t l_103 = 8L;
        for (p_26.f1 = 0; (p_26.f1 <= 3); p_26.f1 += 1)
        { 
            const int16_t l_49 = 0x0473L;
            int32_t l_102[5];
            int i;
            for (i = 0; i < 5; i++)
                l_102[i] = 0xE4714FE2L;
            if (((func_36((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((+p_27), l_49)), ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((p_26.f5 = ((-6L) == (safe_div_func_uint16_t_u_u(g_32.f5, g_32.f3)))), l_56)), 3)) , p_26.f3))), 0xF9C6L)), p_25.f1, l_57, g_32.f4, g_2) < p_25.f2) >= 0xAE7BE98BL))
            { 
                uint8_t l_101 = 250UL;
                l_103 = ((((l_102[4] ^= ((g_32.f1 = (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_32.f2 ^= (p_23 = (((p_26.f5++) == (safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((l_100 |= (~((l_99 = (safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(l_49, g_2)) <= (safe_add_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((0xE831782E4D72E8F9LL ^ ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((g_32.f5 != 0x16L) , p_25.f2) <= 0UL), l_49)), p_25.f1)) , g_32.f3)), 0x125BDF0D7C7E6801LL)) , 0x4C643A56L), 0UL))), p_25.f5))) , 8L))) == g_32.f3) >= 0xFC8FA0D6L) , p_25.f4), p_25.f0)), g_32.f1))) < 18446744073709551611UL))), l_101)), l_57.f0))) , g_32.f2)) , g_32.f2) | g_2) , g_32.f2);
                l_103 = ((g_104 , ((safe_lshift_func_int8_t_s_s((p_26.f3 || (l_100 && (safe_lshift_func_int16_t_s_u((l_102[4] || p_24), 0)))), l_56)) ^ 0x1DCFL)) != l_102[3]);
            }
            else
            { 
                uint16_t l_112 = 0xA975L;
                g_113 = ((safe_mul_func_uint8_t_u_u((((g_32.f0 != (-1L)) != (g_111[2][0] , (g_32.f3 = g_111[0][0]))) , l_112), 0x1FL)) > 0xDBBCL);
            }
            for (g_32.f5 = 0; (g_32.f5 <= 4); g_32.f5 += 1)
            { 
                return g_113;
            }
        }
        l_100 |= 0xCFD253E6L;
    }
    return p_25.f2;
}



static uint16_t  func_36(uint32_t  p_37, int32_t  p_38, union U2  p_39, int32_t  p_40, int8_t  p_41)
{ 
    union U3 l_73 = {0xB0F60517L};
    uint8_t l_74 = 0xDEL;
    int32_t l_75 = 0x7FAAB159L;
    for (p_39.f1 = 0; (p_39.f1 != (-7)); p_39.f1--)
    { 
        int16_t l_72 = (-10L);
        l_75 ^= (safe_mul_func_uint16_t_u_u((((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(g_2, (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((g_32.f1 , (safe_mul_func_int16_t_s_s(l_72, (l_73 , g_32.f0)))), p_41)) ^ l_73.f0), 4)))) , 0xDAL), 0xFAL)) || l_74) != p_39.f1) < p_41) & p_38), 0x6531L));
    }
    return l_75;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_32.f4, "g_32.f4", print_hash_value);
    transparent_crc(g_32.f5, "g_32.f5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_35[i].f0, "g_35[i].f0", print_hash_value);
        transparent_crc(g_35[i].f1, "g_35[i].f1", print_hash_value);
        transparent_crc(g_35[i].f2, "g_35[i].f2", print_hash_value);
        transparent_crc(g_35[i].f3, "g_35[i].f3", print_hash_value);
        transparent_crc(g_35[i].f4, "g_35[i].f4", print_hash_value);
        transparent_crc(g_35[i].f5, "g_35[i].f5", print_hash_value);

    }
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_171[i], "g_171[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
