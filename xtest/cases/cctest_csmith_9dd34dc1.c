// SPDX-License-Identifier: MIT
// cctest_csmith_9dd34dc1.c --- cctest case csmith_9dd34dc1 (csmith seed 2647870913)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9192a07b */

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

// Options:   -s 2647870913 -o /tmp/csmith_gen_n8e2rzpv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint16_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U1 {
   const int64_t  f0;
   int32_t  f1;
   const int64_t  f2;
};


static const int32_t g_11 = (-1L);
static uint32_t g_17[1] = {0x8254981CL};
static int8_t g_23 = 2L;
static int32_t g_48 = 0x7C93E255L;
static int32_t g_52 = (-1L);
static uint32_t g_53[4][3] = {{1UL,1UL,1UL},{4294967291UL,4294967291UL,4294967291UL},{1UL,1UL,1UL},{4294967291UL,4294967291UL,4294967291UL}};
static int16_t g_80 = 0x4FD3L;
static uint32_t g_81[3] = {3UL,3UL,3UL};
static int32_t g_83[5][1] = {{1L},{2L},{1L},{2L},{1L}};
static int32_t g_100[4] = {0x488F66F9L,0x488F66F9L,0x488F66F9L,0x488F66F9L};
static union U1 g_106 = {0L};
static int64_t g_161 = 0x3E212FD216E5E9EFLL;
static uint8_t g_207[4][1] = {{1UL},{1UL},{1UL},{1UL}};
static uint32_t g_216 = 0xDA62DABFL;
static uint32_t g_236 = 9UL;
static int8_t g_320 = 0L;
static uint64_t g_333 = 0x450EA62709E712BCLL;
static uint8_t g_381 = 0xAAL;
static uint8_t g_397[3][1][2] = {{{0xC6L,0xC6L}},{{0xC6L,0xC6L}},{{0xC6L,0xC6L}}};
static uint32_t g_402 = 1UL;



static union U1  func_1(void);
static int32_t  func_2(uint32_t  p_3);
static int16_t  func_7(const uint32_t  p_8, uint32_t  p_9, union U1  p_10);
static const uint64_t  func_19(int8_t  p_20, uint32_t  p_21, int32_t  p_22);




static union U1  func_1(void)
{ 
    int16_t l_4 = 0x891FL;
    int32_t l_215 = 6L;
    int16_t l_233 = (-1L);
    uint32_t l_251 = 0xC93DF1D3L;
    int32_t l_253 = 7L;
    uint8_t l_263 = 5UL;
    int32_t l_344 = (-2L);
    int32_t l_345 = 0xB54FFEA5L;
    int32_t l_351 = 0xEB38789EL;
    uint16_t l_360 = 0x9D3CL;
    uint32_t l_383 = 18446744073709551615UL;
    uint16_t l_386[4] = {65535UL,65535UL,65535UL,65535UL};
    int32_t l_387 = 1L;
    int32_t l_392 = (-7L);
    union U1 l_435[2][2][1] = {{{{0x9D5BB680DFCA66D8LL}},{{4L}}},{{{0x9D5BB680DFCA66D8LL}},{{4L}}}};
    int i, j, k;
    return l_435[0][0][0];
}



static int32_t  func_2(uint32_t  p_3)
{ 
    int32_t l_5 = 0x629AA810L;
    int32_t l_6[2][5] = {{0xE327439CL,0x85613717L,0xE327439CL,0xE327439CL,0xE327439CL},{0x61D2250DL,0L,0x61D2250DL,0xE327439CL,0xE327439CL}};
    union U1 l_14 = {0xECBE92E3F9150FAELL};
    uint64_t l_162 = 18446744073709551610UL;
    uint32_t l_194 = 1UL;
    uint32_t l_196 = 0UL;
    int i, j;
    l_6[1][3] = l_5;
    if (((((((l_6[1][2] = func_7(g_11, ((1L == (safe_mul_func_uint8_t_u_u(0x33L, (0L < 0UL)))) , 0x98D72A67L), l_14)) & (-10L)) ^ 0x7BL) == p_3) ^ l_5) & 0x64L))
    { 
        uint8_t l_121 = 0x69L;
        if ((safe_mul_func_int8_t_s_s(l_6[1][1], (p_3 >= 0x118E0D0DL))))
        { 
            uint32_t l_112 = 0x225053E2L;
            l_6[0][2] = ((l_112 != (safe_sub_func_uint32_t_u_u(((g_106.f1 < 0xD61D3EE1L) < (~g_106.f1)), 0xC7292A33L))) > l_14.f1);
            l_14.f1 = (safe_lshift_func_int8_t_s_u(p_3, p_3));
        }
        else
        { 
            for (l_14.f1 = 0; (l_14.f1 > (-22)); l_14.f1 = safe_sub_func_uint16_t_u_u(l_14.f1, 4))
            { 
                int16_t l_120 = 0x43A6L;
                l_6[1][3] = 0xA81BD54BL;
                return l_120;
            }
        }
        l_121++;
    }
    else
    { 
        int32_t l_132 = 0x3883CA8BL;
        uint64_t l_145 = 18446744073709551607UL;
        for (g_52 = 16; (g_52 >= 0); g_52 = safe_sub_func_uint16_t_u_u(g_52, 9))
        { 
            g_100[0] &= (p_3 ^ ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((((g_23 = (g_53[1][2] || (safe_mul_func_uint8_t_u_u(4UL, l_132)))) < 0xB1L) >= g_106.f2), 0x8BAA0A5B80262EE7LL)) > 1L), 0x35B4L)) && 0xA3AA3B8C42DAAAAFLL));
            l_6[1][3] = (g_83[4][0] = p_3);
        }
        for (l_14.f1 = 23; (l_14.f1 >= (-3)); l_14.f1 = safe_sub_func_uint16_t_u_u(l_14.f1, 3))
        { 
            int8_t l_142 = 0x20L;
            int32_t l_143 = (-7L);
            int32_t l_144 = 0xCD4276EEL;
            l_144 = (l_143 ^= (!(((safe_mul_func_int16_t_s_s(p_3, (((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(0x1DL, ((g_100[0] != l_132) ^ p_3))) >= 0xA0833799L), l_142)) && l_142) != l_14.f1))) | 0xB4L) <= l_132)));
        }
        --l_145;
    }
    if ((safe_mul_func_uint8_t_u_u((!((l_6[0][0] && (safe_mod_func_int64_t_s_s((-1L), (0x30894340L && (((l_14.f1 = (0x35L | g_53[1][2])) < 0x5FL) , p_3))))) | 0L)), (-6L))))
    { 
        int32_t l_153 = 1L;
        return l_153;
    }
    else
    { 
        uint64_t l_172 = 0xEFAC0F5FC00A9F04LL;
        int32_t l_173 = 6L;
        if (((~0x0C162246L) , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(g_23, 3)), (((safe_sub_func_uint16_t_u_u((g_161 = p_3), g_106.f2)) ^ g_53[3][0]) , p_3)))))
        { 
            int16_t l_195 = 0x8707L;
            g_83[2][0] = ((l_162 <= ((p_3 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((0x1152ABA5L ^ (g_100[2] = (safe_div_func_int64_t_s_s(1L, (safe_add_func_int64_t_s_s((0xBD0BA192L != 0x83ED9FA1L), g_53[1][0])))))), g_23)), p_3))) | g_17[0])) || l_6[0][3]);
            if (((~(l_172 < (((l_173 = 0xA3C1L) , g_161) > ((!((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_161, g_106.f0)), g_81[1])) & g_106.f0)) , g_106.f1)))) & g_106.f1))
            { 
                int8_t l_189 = 0xA3L;
                int32_t l_197 = 0L;
                l_197 = (+(l_196 = (p_3 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(l_189, ((1UL && ((((g_106.f0 == (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((0UL <= l_194) <= 0x90C2L), l_172)), 1UL))) ^ p_3) <= p_3) <= 4294967288UL)) < p_3))), l_195)) || (-1L)) == g_11))), p_3)), l_189)) , 6UL))));
            }
            else
            { 
                g_106.f1 = ((safe_unary_minus_func_int32_t_s((l_6[1][2] & l_6[1][3]))) >= (((safe_add_func_uint8_t_u_u((g_207[2][0] = (safe_add_func_int16_t_s_s((0xED5CDA24EF59AD7FLL <= (safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((-1L), 0UL)) < 0x4DEADDEDL), 3))), 0UL))), 1L)) > l_173) > p_3));
            }
        }
        else
        { 
            g_48 ^= p_3;
        }
        return p_3;
    }
}



static int16_t  func_7(const uint32_t  p_8, uint32_t  p_9, union U1  p_10)
{ 
    uint64_t l_15 = 8UL;
    uint32_t l_16[4][4] = {{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL},{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL,18446744073709551608UL}};
    int32_t l_18[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_18[i] = 0x6FB96F37L;
    l_15 ^= 1L;
    for (l_15 = 0; (l_15 <= 3); l_15 += 1)
    { 
        const uint16_t l_105 = 0xEC12L;
        g_17[0] = p_9;
    }
    return p_10.f1;
}



static const uint64_t  func_19(int8_t  p_20, uint32_t  p_21, int32_t  p_22)
{ 
    uint32_t l_34[2][5] = {{7UL,0x75E6D992L,7UL,0x75E6D992L,7UL},{0x094191B8L,0x094191B8L,0x094191B8L,0x094191B8L,0x094191B8L}};
    int32_t l_35 = 0x04FECCDFL;
    int32_t l_36 = 2L;
    struct S0 l_37 = {1UL,65533UL};
    int32_t l_49[3];
    uint32_t l_79[1][4][5] = {{{0xB632CC17L,0xB632CC17L,0UL,0x454C9BF6L,0UL},{0UL,0UL,0UL,0UL,0UL},{0xB632CC17L,0xB632CC17L,0UL,0x454C9BF6L,0UL},{0UL,0UL,0UL,0UL,0UL}}};
    int64_t l_82 = (-1L);
    int32_t l_99 = 3L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_49[i] = 7L;
    l_36 = (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((18446744073709551615UL & (l_35 |= (l_34[1][1] = ((((safe_div_func_uint8_t_u_u(((p_21 && ((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((p_20 || 0xE33A9025B0D6B1F8LL), p_21)), (-1L))) < p_22)) , 7UL), g_23)) != 1L) <= p_20) == g_11)))) | l_36) <= 0x13A8L) & p_20), p_20)), l_36));
    if ((g_11 >= ((l_37 , (safe_mul_func_int16_t_s_s(g_17[0], (safe_lshift_func_uint16_t_u_s((((l_35 = p_20) <= 0L) || 0L), g_11))))) > p_20)))
    { 
        uint16_t l_42[1][1];
        int32_t l_47 = 0xF6C07740L;
        int32_t l_50 = 9L;
        int32_t l_51 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_42[i][j] = 65527UL;
        }
        l_42[0][0]--;
        for (p_21 = (-11); (p_21 >= 56); p_21 = safe_add_func_int32_t_s_s(p_21, 8))
        { 
            for (l_36 = 0; (l_36 <= 0); l_36 += 1)
            { 
                --g_53[1][2];
                l_47 ^= 0xF9695FF7L;
            }
        }
    }
    else
    { 
        const int8_t l_62 = 2L;
        int32_t l_89 = 3L;
        for (g_48 = 2; (g_48 >= 0); g_48 -= 1)
        { 
            int32_t l_84 = 0x02F449D3L;
            l_49[0] = ((safe_sub_func_uint64_t_u_u(5UL, (safe_mod_func_int64_t_s_s(g_23, (safe_rshift_func_uint16_t_u_u((65529UL || (g_52 < g_23)), l_62)))))) == 0xFCL);
            for (p_21 = 0; (p_21 <= 1); p_21 += 1)
            { 
                int i, j;
                if (g_53[(p_21 + 1)][g_48])
                    break;
                l_84 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((0x2FBB2F22DDF81C58LL && (((g_83[1][0] &= (safe_mul_func_int8_t_s_s(((((g_81[1] = (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((g_53[(g_48 + 1)][g_48] , (safe_div_func_int64_t_s_s(g_53[1][2], (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(l_79[0][2][1], g_80)), g_53[1][2]))))), l_62)), g_80))) & l_82) && 0x4AF4489F7832F570LL) , 0xBEL), 0xA8L))) != g_17[0]) ^ g_23)), g_52)), g_53[(p_21 + 1)][g_48]));
                l_89 = (safe_div_func_int16_t_s_s(p_20, (safe_rshift_func_int16_t_s_u(g_81[0], ((0x3CL >= l_82) && g_53[(p_21 + 1)][g_48])))));
            }
            for (l_37.f1 = 0; (l_37.f1 <= 1); l_37.f1 += 1)
            { 
                uint16_t l_90 = 0x88BFL;
                --l_90;
                if (g_17[0])
                    break;
            }
        }
    }
    g_48 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(0UL, (p_22 | (g_81[0] == 18446744073709551615UL)))), 1)), l_99)) > l_37.f1);
    return g_17[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_53[i][j], "g_53[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_106.f1, "g_106.f1", print_hash_value);
    transparent_crc(g_106.f2, "g_106.f2", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_207[i][j], "g_207[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_397[i][j][k], "g_397[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_402, "g_402", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
