// SPDX-License-Identifier: MIT
// cctest_csmith_9afd9ae0.c --- cctest case csmith_9afd9ae0 (csmith seed 2600311520)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbb8a5708 */

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

// Options:   -s 2600311520 -o /tmp/csmith_gen_60u0kn5p/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint16_t  f1;
   uint64_t  f2;
};

struct S1 {
   uint64_t  f0;
};

union U2 {
   uint32_t  f0;
   uint64_t  f1;
};

union U3 {
   int8_t  f0;
   uint64_t  f1;
   const int64_t  f2;
};


static int32_t g_2[4] = {0xA624CDB8L,0xA624CDB8L,0xA624CDB8L,0xA624CDB8L};
static uint64_t g_28 = 0xA1D2DAFFA898CBDBLL;
static uint32_t g_46 = 0x0A048C84L;
static int64_t g_61[3] = {0x1CF56E035D6DF81FLL,0x1CF56E035D6DF81FLL,0x1CF56E035D6DF81FLL};
static int16_t g_63 = 0x66C3L;
static uint64_t g_66 = 18446744073709551610UL;
static int16_t g_72 = 0xA768L;
static uint32_t g_73 = 0x559F947EL;
static uint64_t g_87 = 0x1048D1DFF66F6C63LL;
static struct S0 g_96 = {252UL,0x19B8L,1UL};
static int64_t g_120 = (-6L);
static uint8_t g_127 = 0xEBL;
static int32_t g_144 = 9L;
static uint8_t g_176 = 0x55L;
static int64_t g_198 = (-8L);
static uint32_t g_201[4] = {0xD34D88E7L,0xD34D88E7L,0xD34D88E7L,0xD34D88E7L};
static union U3 g_206[4][4] = {{{0x87L},{-1L},{0x87L},{-1L}},{{0x87L},{-1L},{0x87L},{-1L}},{{0x87L},{-1L},{0x87L},{-1L}},{{0x87L},{-1L},{0x87L},{-1L}}};
static struct S1 g_207 = {0x0C375795804E8CAALL};
static uint8_t g_209 = 0x16L;



static int16_t  func_1(void);
static uint8_t  func_6(uint32_t  p_7);
static int16_t  func_8(int32_t  p_9, int8_t  p_10, union U2  p_11, uint32_t  p_12);
static int64_t  func_14(int32_t  p_15, uint32_t  p_16, int16_t  p_17);




static int16_t  func_1(void)
{ 
    uint32_t l_167 = 0x67735A7CL;
    int32_t l_168 = 1L;
    int64_t l_175 = 0x0A7EECA001A1B521LL;
    struct S1 l_208[2] = {{5UL},{5UL}};
    int64_t l_215 = 0xA3E397D913FAE4BFLL;
    int16_t l_223 = 0x69BDL;
    int i;
    for (g_2[2] = 1; (g_2[2] == 7); ++g_2[2])
    { 
        int8_t l_174 = 0xA7L;
        int32_t l_202 = 0x2194A6FFL;
        const int32_t l_222 = (-1L);
        int32_t l_224 = 0x75B47AC9L;
        if ((+func_6(g_2[0])))
        { 
            int64_t l_171[2];
            int32_t l_173[1][5] = {{(-6L),(-6L),(-6L),(-6L),(-6L)}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_171[i] = (-6L);
            if ((l_168 = (safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((g_28 , (((((g_46 == (safe_lshift_func_uint8_t_u_u(((g_73 & ((l_167 | g_63) , 0x545DL)) , 0x2AL), 5))) & 0xB385C65EL) | 1UL) | g_28) && 0L)), 0xB6B4L)) == g_46), 0x803E9268L)) ^ l_167), l_167))))
            { 
                uint8_t l_172 = 0xE2L;
                l_173[0][3] ^= (((l_167 || (g_61[1] <= g_2[2])) , ((safe_rshift_func_uint16_t_u_u(((l_171[0] != 1L) == l_172), 2)) , 0UL)) && g_96.f2);
                return l_167;
            }
            else
            { 
                uint16_t l_179[5][5] = {{0xC493L,0xC493L,65535UL,0UL,65535UL},{0xC493L,0xC493L,65535UL,0UL,65535UL},{0xC493L,0xC493L,0xD000L,0x7331L,0xD000L},{65535UL,65535UL,0xD000L,0x7331L,0xD000L},{65535UL,65535UL,0xD000L,0x7331L,0xD000L}};
                int i, j;
                ++g_176;
                l_179[0][0]++;
            }
            l_202 = (0x769F70AFF555B329LL || (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_198 = l_174), (safe_add_func_uint8_t_u_u(((g_28 > (g_201[1] |= 1L)) <= g_2[2]), 0x1EL)))), g_96.f0)), g_61[1])), l_171[0])), 0)), g_63)), l_173[0][4])), l_167)));
        }
        else
        { 
            for (l_202 = 0; (l_202 <= (-1)); l_202 = safe_sub_func_int64_t_s_s(l_202, 5))
            { 
                struct S0 l_205[3] = {{1UL,9UL,8UL},{1UL,9UL,8UL},{1UL,9UL,8UL}};
                int i;
                g_96 = l_205[1];
                l_208[0] = (g_206[3][0] , g_207);
            }
            for (g_87 = 0; g_87 < 2; g_87 += 1)
            {
                struct S1 tmp = {0x149393C069BDD236LL};
                l_208[g_87] = tmp;
            }
        }
        g_209 &= l_175;
        l_224 &= (l_223 = (safe_div_func_int32_t_s_s((+((g_127 = (safe_sub_func_int16_t_s_s((l_215 ^ (g_73 > ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_96.f0 & ((safe_mul_func_uint16_t_u_u((((g_96.f2 = l_215) && l_222) && g_206[3][0].f0), l_215)) || 0xC2FFDF52C73AE872LL)), 3)), l_202)) > g_73))), g_127))) ^ l_215)), 0x7625D64DL)));
    }
    return g_2[2];
}



static uint8_t  func_6(uint32_t  p_7)
{ 
    uint32_t l_13 = 5UL;
    int32_t l_26[3][5] = {{0x99649744L,9L,0x1EE4CFF1L,9L,0x99649744L},{0x271DBCABL,9L,0x9031EA06L,0x99649744L,0x9031EA06L},{0x9031EA06L,0x9031EA06L,0x1EE4CFF1L,0x99649744L,0xB8CFF26AL}};
    int32_t l_31 = (-1L);
    int32_t l_32 = (-1L);
    union U2 l_33 = {0x9690B281L};
    struct S0 l_121 = {0UL,65535UL,5UL};
    int64_t l_158 = 3L;
    int i, j;
    if ((((func_8(l_13, ((l_32 |= ((((func_14((safe_div_func_int64_t_s_s((l_26[1][3] &= (safe_sub_func_int8_t_s_s(((g_2[2] || 65535UL) > (safe_rshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((0x0412894FF5452FA8LL || 0xF3813BF58AAE07EALL), 0x706B3799L)), 4))), l_13))), l_13)), l_13, l_13) > g_2[2]) >= l_13) != l_31) != p_7)) , g_2[2]), l_33, g_2[2]) & 65532UL) != 0xDBL) > p_7))
    { 
        struct S0 l_122 = {249UL,3UL,5UL};
        struct S0 l_123 = {255UL,0UL,0UL};
        l_123 = (l_122 = l_121);
    }
    else
    { 
        for (g_63 = 0; (g_63 != (-8)); g_63 = safe_sub_func_uint32_t_u_u(g_63, 8))
        { 
            const struct S0 l_126[3] = {{255UL,0UL,18446744073709551615UL},{255UL,0UL,18446744073709551615UL},{255UL,0UL,18446744073709551615UL}};
            int i;
            for (g_96.f1 = 0; (g_96.f1 <= 2); g_96.f1 += 1)
            { 
                int i;
                return g_61[g_96.f1];
            }
            l_121 = l_126[2];
            --g_127;
        }
    }
    g_144 &= (safe_add_func_uint16_t_u_u((g_96 , (safe_rshift_func_uint8_t_u_s((g_127++), 2))), ((safe_div_func_uint8_t_u_u((((l_32 < (safe_mul_func_uint8_t_u_u(((l_26[0][4] = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((1UL & p_7), g_96.f1)), l_33.f0)) == 0xAFD8232EDDAFFDA2LL) , 0UL)) >= 0UL), (-4L)))) ^ 4294967292UL) != g_2[1]), l_121.f2)) | g_61[1])));
    l_31 |= (safe_sub_func_uint16_t_u_u(((l_158 ^= ((((+(l_26[1][3] = (safe_div_func_int8_t_s_s((g_73 == (safe_add_func_int16_t_s_s(((l_32 |= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_7, 4)) | g_96.f2), (safe_mul_func_uint16_t_u_u(l_26[2][0], p_7))))) , g_2[2]), p_7))), p_7)))) > (-1L)) && g_73) <= p_7)) < l_121.f1), 0x7D85L));
    return p_7;
}



static int16_t  func_8(int32_t  p_9, int8_t  p_10, union U2  p_11, uint32_t  p_12)
{ 
    uint32_t l_38 = 0UL;
    int32_t l_39 = 0xED761E7FL;
    int32_t l_40 = 0x5A1EC8F9L;
    uint8_t l_45 = 0x9FL;
    if ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_38, (((p_11.f1 = (g_28--)) >= (safe_mul_func_uint16_t_u_u((g_46 = l_45), ((safe_sub_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((((0x22E7DFE9L | (((((safe_sub_func_int8_t_s_s((p_10 , p_12), 0xCCL)) != g_2[2]) ^ p_9) < l_38) != g_2[2])) && g_2[2]) < g_2[1]), g_2[2])) || g_2[2]) == p_12), 255UL)) != p_12)))) || l_40))), p_10)))
    { 
        struct S1 l_59 = {0UL};
        int64_t l_60 = (-10L);
        int32_t l_62 = 1L;
        if (((l_62 ^= ((g_61[1] = ((safe_mod_func_uint8_t_u_u(g_2[1], ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_9, (((l_59 , ((g_2[2] , g_2[2]) != 0UL)) || p_10) > l_60))), l_40)) || l_59.f0))) < g_2[1])) != 0xBE56L)) > g_2[3]))
        { 
            l_40 ^= (l_62 = p_10);
            g_63 = g_61[1];
            g_66 ^= (((((safe_rshift_func_uint8_t_u_s((g_61[0] <= (((g_61[1] == g_2[2]) | ((0L == 0x4E1338462C7DCB21LL) == g_2[2])) == g_28)), 0)) != 0x4F168E5BL) || l_39) && g_2[2]) >= g_61[1]);
        }
        else
        { 
            return l_62;
        }
        for (l_45 = 26; (l_45 != 23); --l_45)
        { 
            int8_t l_71 = 0x4CL;
            g_72 = (1L | (safe_div_func_int32_t_s_s((((g_63 > l_71) <= (p_10 <= p_9)) || 1UL), l_59.f0)));
            return l_40;
        }
    }
    else
    { 
        uint16_t l_81[3];
        int32_t l_102[3];
        int i;
        for (i = 0; i < 3; i++)
            l_81[i] = 6UL;
        for (i = 0; i < 3; i++)
            l_102[i] = 0x22DE5CCAL;
lbl_103:
        g_73++;
        for (p_11.f0 = 20; (p_11.f0 >= 33); p_11.f0++)
        { 
            int16_t l_95 = (-10L);
            if (((safe_sub_func_uint32_t_u_u((~(g_72 != 0x3A29C5D0L)), (l_81[0] == ((((safe_sub_func_uint8_t_u_u(p_12, g_73)) >= p_10) <= p_12) == g_61[1])))) ^ p_11.f0))
            { 
                uint64_t l_84 = 18446744073709551609UL;
                uint64_t l_94 = 0x69BA6CE2C6914174LL;
                ++l_84;
                g_87 |= 0xBB5B285EL;
                l_95 &= (safe_add_func_uint8_t_u_u(((p_10 , l_84) <= ((safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(l_84, l_94)) != (-9L)), p_10)) && p_12)), g_61[1]));
            }
            else
            { 
                uint8_t l_101[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_101[i] = 0xF9L;
                l_102[0] ^= (((((l_101[0] = (g_96.f0 = ((g_96 , (((g_61[1] && (0x34L != (safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(p_12, l_45)) >= g_96.f0), p_9)))) < 4294967290UL) , 0xB4L)) & (-4L)))) ^ 0x38L) ^ l_95) >= 0UL) && (-1L));
                if (g_96.f2)
                    goto lbl_103;
            }
        }
        l_40 = (safe_unary_minus_func_uint16_t_u((((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_12, (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((+(0UL > (safe_div_func_int32_t_s_s((g_28 >= (l_39 && l_45)), 0xBF1637F2L)))), 6)), 4294967289UL)))), p_11.f0)), 4)) == 1UL) | p_10) || l_81[0]) , p_9)));
    }
    g_120 |= (safe_div_func_int16_t_s_s(4L, (-8L)));
    return g_120;
}



static int64_t  func_14(int32_t  p_15, uint32_t  p_16, int16_t  p_17)
{ 
    int32_t l_27 = 0x58ED0BD2L;
    g_28++;
    return p_15;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_201[i], "g_201[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_206[i][j].f0, "g_206[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
