// SPDX-License-Identifier: MIT
// cctest_csmith_3740bfdf.c --- cctest case csmith_3740bfdf (csmith seed 926990303)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa3ab7427 */

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

// Options:   -s 926990303 -o /tmp/csmith_gen_re9s3ixx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
   const uint32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint32_t  f0;
   const int32_t  f1;
   int64_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

struct S2 {
   struct S0  f0;
   uint16_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

union U3 {
   struct S0  f0;
};


static int8_t g_13 = 1L;
static uint64_t g_14 = 0x5954E3F1571C097BLL;
static union U3 g_25 = {{0L,1UL,0x903CFCB8L}};
static int32_t g_44 = (-1L);
static int8_t g_46[5] = {0xEDL,0xEDL,0xEDL,0xEDL,0xEDL};
static int32_t g_47 = 0xDEFA766EL;
static uint32_t g_49 = 0xAE5249F3L;
static uint8_t g_51 = 1UL;
static uint32_t g_68 = 4294967289UL;
static uint32_t g_70 = 0xA9C6CD8DL;
static int8_t g_79 = 0x35L;
static int16_t g_86 = 1L;
static int32_t g_87 = 0x97F7BC9CL;
static int16_t g_91[5][5][3] = {{{8L,8L,1L},{(-10L),0xCC31L,0xFC10L},{0xCADAL,7L,0x3DD4L},{1L,1L,0xCC31L},{1L,(-1L),(-10L)}},{{0xCADAL,(-9L),0L},{(-10L),0xFC10L,0xCADAL},{8L,0xCADAL,0L},{0x97F7L,(-6L),(-10L)},{0xCC31L,0xDE80L,0xCC31L}},{{0L,0xDE80L,0x3DD4L},{0x3DD4L,(-6L),0xFC10L},{0xDE80L,0xCADAL,1L},{7L,0xFC10L,(-10L)},{0xFC10L,(-1L),0xCADAL}},{{0xCC31L,1L,1L},{(-9L),8L,1L},{0L,(-1L),0xCADAL},{0xA074L,0L,(-10L)},{4L,0L,8L}},{{0x3DD4L,0L,0x97F7L},{7L,(-1L),0xCC31L},{8L,8L,0L},{8L,1L,0x3DD4L},{7L,(-1L),0xDE80L}}};
static uint32_t g_94 = 1UL;
static uint32_t g_106 = 0xB5F6EBE0L;
static struct S1 g_127 = {0xBAE6C0B0L,0L,9L,18446744073709551608UL};
static uint16_t g_130 = 65533UL;



static int16_t  func_1(void);
static int16_t  func_7(int32_t  p_8, uint32_t  p_9, int8_t  p_10, struct S2  p_11);
static struct S1  func_15(struct S0  p_16, int32_t  p_17);
static int16_t  func_20(union U3  p_21, uint16_t  p_22, const int32_t  p_23, int64_t  p_24);




static int16_t  func_1(void)
{ 
    int32_t l_6 = 0x8E64E6DCL;
    const int8_t l_26[2] = {0L,0L};
    int32_t l_50 = 0x7260E960L;
    struct S2 l_124 = {{-3L,4294967286UL,1UL},0xDE4AL,0x1C1BF41EL,0xBDB59DC4BF33FD12LL};
    uint64_t l_129[1];
    int i;
    for (i = 0; i < 1; i++)
        l_129[i] = 18446744073709551615UL;
    g_130 = ((+(~((l_129[0] = (safe_div_func_int16_t_s_s(l_6, func_7((((!((g_13 = g_13) < g_14)) , (func_15(((safe_div_func_uint16_t_u_u(((g_51 = (func_20(g_25, g_25.f0.f0, l_26[0], l_6) || l_50)) || g_25.f0.f2), l_26[0])) , g_25.f0), l_50) , 0xA59623B7L)) | l_26[0]), l_50, l_6, l_124)))) <= l_26[1]))) == l_124.f0.f0);
    return l_124.f2;
}



static int16_t  func_7(int32_t  p_8, uint32_t  p_9, int8_t  p_10, struct S2  p_11)
{ 
    int32_t l_128 = 0x06CEEECAL;
    l_128 = (((g_106 , func_15(g_25.f0, (p_11 , (safe_sub_func_uint16_t_u_u(p_11.f1, p_9))))) , g_127) , g_51);
    return l_128;
}



static struct S1  func_15(struct S0  p_16, int32_t  p_17)
{ 
    uint16_t l_59[3];
    uint32_t l_64 = 1UL;
    int32_t l_78[5][2][3] = {{{7L,7L,(-1L)},{7L,7L,(-1L)}},{{7L,7L,(-1L)},{7L,7L,(-1L)}},{{7L,7L,(-1L)},{7L,7L,(-1L)}},{{7L,7L,(-1L)},{7L,7L,(-1L)}},{{7L,7L,(-1L)},{7L,7L,(-1L)}}};
    uint16_t l_122 = 65535UL;
    struct S1 l_123 = {18446744073709551615UL,0L,0xCA836B060C5C9CEBLL,0xAD1B9823L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_59[i] = 7UL;
    for (g_49 = 0; (g_49 <= 4); g_49 += 1)
    { 
        int32_t l_67 = 0x7EF9B05DL;
        int32_t l_69[2];
        int i;
        for (i = 0; i < 2; i++)
            l_69[i] = 0x71A24E30L;
        g_70 = (safe_mod_func_int8_t_s_s(((l_69[0] = (~(safe_lshift_func_uint8_t_u_u((g_68 ^= (safe_sub_func_int64_t_s_s(((((((g_46[g_49] <= ((l_59[1] , ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((g_25.f0.f2 = l_64) == ((safe_sub_func_int32_t_s_s(((((l_67 &= (0UL < (-1L))) , l_64) <= g_44) == 0xDA23AE4B2FC7DF8BLL), g_13)) ^ g_46[g_49])) , 8UL), l_59[0])) <= 0x598C2FCBL), g_51)) | g_47)) != g_13)) && 0x4FL) & 0x764CL) , p_16.f2) != g_47) != g_47), l_59[0]))), 3)))) && l_59[2]), g_14));
    }
    for (p_16.f2 = 0; (p_16.f2 >= 8); p_16.f2++)
    { 
        int8_t l_89 = 0L;
        int32_t l_93 = (-10L);
        for (g_51 = 15; (g_51 >= 32); g_51++)
        { 
            uint16_t l_77[4][4][2] = {{{0x463DL,1UL},{65530UL,0x463DL},{1UL,65528UL},{0x704BL,0x704BL}},{{65530UL,0x704BL},{0x704BL,65528UL},{1UL,0x463DL},{65530UL,1UL}},{{0x463DL,65528UL},{0x463DL,1UL},{65530UL,0x463DL},{1UL,65528UL}},{{0x704BL,0x704BL},{65530UL,0x704BL},{0x704BL,65528UL},{1UL,0x463DL}}};
            int32_t l_88 = 2L;
            int32_t l_90 = (-5L);
            int32_t l_92 = 0xBBA05350L;
            int i, j, k;
            g_79 = (g_68 >= (safe_div_func_int32_t_s_s(((l_78[3][1][2] ^= l_77[2][3][1]) > (0x85F6474AL < (18446744073709551615UL >= l_59[2]))), 0x6F3C4E31L)));
            g_87 = (((((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((g_79 = (safe_rshift_func_uint8_t_u_s((l_90 = (l_92 = (--g_94))), (l_78[3][1][2] = ((g_91[1][4][2] <= (safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s((g_106 = (~(safe_rshift_func_uint8_t_u_s((((0x2F9EL ^ (l_93 = p_17)) > ((l_88 = 0x9AE7L) | l_77[2][3][1])) <= g_79), 0)))), p_16.f0)) <= 0xC71BL) != p_16.f1), l_77[2][3][1])), l_78[1][0][1]))) != (-10L)))))) && 0xC6L), l_89)), l_64)) < g_51) == g_47) & 0x8A910FBCL) != l_77[2][3][0]);
        }
        if (p_16.f2)
            continue;
    }
    g_87 = (safe_add_func_int8_t_s_s(((~(l_78[3][1][2] = ((safe_unary_minus_func_uint32_t_u((((--g_14) <= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((l_122 &= ((!g_87) > (g_13 || ((safe_rshift_func_uint16_t_u_s((0xF159DA389B2D0C04LL ^ ((safe_add_func_uint64_t_u_u(g_13, 18446744073709551609UL)) ^ 0xB49DL)), 14)) <= (-1L))))), p_16.f2)) && p_16.f2), l_78[2][0][0]))) != p_16.f1))) | 8UL))) , l_122), l_59[2]));
    return l_123;
}



static int16_t  func_20(union U3  p_21, uint16_t  p_22, const int32_t  p_23, int64_t  p_24)
{ 
    struct S1 l_38 = {7UL,1L,0x4C933337672A6DFELL,0UL};
    int32_t l_45 = 0xC924DFB4L;
    int32_t l_48[4] = {0x0702DD06L,0x0702DD06L,0x0702DD06L,0x0702DD06L};
    int i;
    l_48[3] = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((g_47 = ((((((((safe_rshift_func_int16_t_s_s(((l_45 = (safe_lshift_func_uint16_t_u_u((!(safe_mod_func_int8_t_s_s((l_38 , (safe_rshift_func_int8_t_s_s((((((g_25.f0.f0 , (~((((g_44 = (safe_rshift_func_int16_t_s_s(p_21.f0.f1, p_23))) ^ l_38.f0) & 0L) & p_21.f0.f0))) < 0x5018L) & l_38.f1) , 0x438FL) >= p_24), 4))), l_38.f3))), g_25.f0.f1))) & 252UL), g_14)) <= g_25.f0.f0) != g_25.f0.f2) <= 0UL) || g_46[3]) == 0L) < l_38.f1) >= g_13)) == l_38.f2) && g_46[3]), p_24)), 255UL));
    g_49 ^= g_14;
    return p_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_25.f0.f0, "g_25.f0.f0", print_hash_value);
    transparent_crc(g_25.f0.f1, "g_25.f0.f1", print_hash_value);
    transparent_crc(g_25.f0.f2, "g_25.f0.f2", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_91[i][j][k], "g_91[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
