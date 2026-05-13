// SPDX-License-Identifier: MIT
// cctest_csmith_a0c94c11.c --- cctest case csmith_a0c94c11 (csmith seed 2697546769)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfd9c5917 */

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

// Options:   -s 2697546769 -o /tmp/csmith_gen_hjurm4a4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
   int32_t  f5;
};

struct S1 {
   int16_t  f0;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
   int64_t  f2;
};


static int32_t g_5 = 0L;
static struct S0 g_16 = {0x2B90F998L,-1L,0x45BBBDEBL,4294967286UL,2UL,-1L};
static struct S1 g_19 = {0x8886L};
static int32_t g_36 = 0xC59458D8L;
static int32_t g_108 = (-3L);
static int16_t g_110 = 0x4282L;
static uint8_t g_117[2][4] = {{0x7EL,0x7EL,0x7EL,0x7EL},{0x7EL,0x7EL,0x7EL,0x7EL}};
static uint32_t g_118 = 0UL;
static int64_t g_132 = 0x45DD45CAFE66B6A1LL;
static int64_t g_135 = 1L;
static int64_t g_136 = 0x43BDDC6D73AEC32ALL;
static uint32_t g_142 = 0x7D2562CEL;
static const uint8_t g_234 = 255UL;
static union U2 g_239 = {0x069C672CL};
static uint16_t g_240 = 5UL;
static int32_t g_248[4][3] = {{1L,1L,1L},{0x51D08031L,0x51D08031L,0x51D08031L},{1L,1L,1L},{0x51D08031L,0x51D08031L,0x51D08031L}};



static int64_t  func_1(void);
static const int32_t  func_10(int64_t  p_11, struct S0  p_12, int32_t  p_13, const uint32_t  p_14, uint32_t  p_15);
static int32_t  func_21(struct S0  p_22, struct S0  p_23);
static struct S0  func_25(uint8_t  p_26);




static int64_t  func_1(void)
{ 
    uint16_t l_4 = 0x9576L;
    int16_t l_178 = 0x477CL;
    int32_t l_183 = 0xE1FA24A6L;
    int32_t l_184 = 7L;
    int32_t l_250 = 0xC72A8FA4L;
    struct S0 l_286 = {0xE89ED313L,0x7AL,0x1055516AL,0x3217A38FL,0UL,0x337DF4CCL};
lbl_302:
    if ((((safe_mod_func_uint64_t_u_u((l_4 || g_5), (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(func_10((g_5 <= (g_5 || g_5)), g_16, l_4, g_16.f1, l_4), l_4)), 4)))) , l_4) , l_4))
    { 
        uint8_t l_175 = 0x68L;
        int32_t l_180 = 0x68D72065L;
        int32_t l_181 = 0x67D125F7L;
        int32_t l_247 = 0x63417869L;
        uint8_t l_251[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_251[i][j] = 0x4BL;
        }
        g_16 = g_16;
        for (g_118 = (-18); (g_118 > 34); g_118++)
        { 
            int16_t l_182 = 4L;
            uint16_t l_185 = 65530UL;
            for (g_16.f0 = 0; (g_16.f0 <= 1); g_16.f0 += 1)
            { 
                return g_135;
            }
            for (g_16.f5 = 0; (g_16.f5 <= (-29)); --g_16.f5)
            { 
                return g_16.f2;
            }
            if (((l_175 = 0L) < l_4))
            { 
                int16_t l_179 = 0x705CL;
                l_179 ^= (safe_sub_func_int16_t_s_s(((g_16.f4 <= 0xB8L) || l_4), l_178));
                g_16.f5 = g_16.f1;
                --l_185;
            }
            else
            { 
                g_5 = ((safe_rshift_func_int16_t_s_s(((-9L) == ((+((0xB5L || (18446744073709551615UL >= 18446744073709551611UL)) > 0xD2A46899L)) != g_117[1][2])), l_4)) , g_16.f3);
                g_16.f5 &= (((safe_div_func_uint8_t_u_u((l_180 == g_16.f2), (safe_mul_func_uint8_t_u_u(((9UL & ((!((((safe_mul_func_uint8_t_u_u(((l_4 && g_16.f4) < l_4), g_108)) && g_142) && 0x59L) , g_16.f1)) != l_185)) < g_16.f3), g_117[1][2])))) != g_16.f2) < 0x2BB4E8893110550BLL);
            }
        }
        for (g_16.f0 = (-23); (g_16.f0 <= 7); g_16.f0++)
        { 
            union U2 l_210 = {0x837CBF35L};
            int32_t l_244 = 0L;
            int32_t l_246 = (-6L);
            int32_t l_249 = 0x1B92BA6CL;
            for (g_108 = 1; (g_108 >= 0); g_108 -= 1)
            { 
                int i, j;
                return g_117[g_108][g_108];
            }
            if ((safe_add_func_int8_t_s_s(g_36, (-8L))))
            { 
                l_183 &= (((safe_rshift_func_int8_t_s_u(g_117[1][2], 1)) , ((g_19 , (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x9FL, (l_210 , 6L))), l_180)), g_19.f0)) == g_108) || g_135)) , l_210.f0)) , l_210.f1);
            }
            else
            { 
                return g_117[1][1];
            }
            if ((safe_mul_func_uint16_t_u_u((func_25(((safe_unary_minus_func_uint8_t_u((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_181 = l_210.f1), ((safe_add_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_mod_func_int64_t_s_s((g_19 , (safe_mul_func_uint16_t_u_u(((l_175 > ((safe_mod_func_int16_t_s_s(0x5390L, l_175)) | g_16.f2)) > 0xC0L), g_19.f0))), l_175)), g_16.f4)), l_178)), 15)) != g_117[1][2]) <= g_110), g_234)) || l_210.f1))), l_180)), g_110)) <= l_180) , 8UL))) ^ g_110)) , l_180), g_135)))
            { 
                return g_117[0][0];
            }
            else
            { 
                uint32_t l_243 = 0x0197DAF0L;
                int32_t l_245[2][5][2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_245[i][j][k] = (-4L);
                    }
                }
                l_183 ^= (((safe_sub_func_int8_t_s_s(g_117[0][2], ((l_180 = (safe_lshift_func_int16_t_s_u((g_239 , 0x4892L), (--g_240)))) || ((g_16.f4 >= l_243) == g_132)))) || l_210.f0) == 4L);
                --l_251[1][0];
            }
        }
    }
    else
    { 
        int8_t l_282 = (-4L);
lbl_287:
        for (g_239.f0 = 16; (g_239.f0 > 51); g_239.f0 = safe_add_func_uint64_t_u_u(g_239.f0, 4))
        { 
            struct S0 l_262 = {0xA5E9E908L,0xA2L,0L,0x5231DAC2L,0x05L,0xAC6DDDA6L};
            int32_t l_283 = 0xA276C94BL;
            for (g_240 = 0; (g_240 <= 46); g_240++)
            { 
                g_16.f5 = (-10L);
                if (g_239.f1)
                    continue;
            }
            if ((g_240 & ((safe_mul_func_int8_t_s_s(g_36, (g_16.f1 = (safe_mul_func_int8_t_s_s(((((l_262.f5 = ((g_239 , l_262) , g_142)) || g_108) > g_234) , 0x16L), 0x00L))))) == 1L)))
            { 
                g_16.f5 = 0L;
                if (l_4)
                    goto lbl_302;
            }
            else
            { 
                uint32_t l_263 = 0xCBF52318L;
                g_248[0][0] &= (g_5 = (((l_263 | (safe_mod_func_uint64_t_u_u(((~(g_36 = ((safe_lshift_func_uint8_t_u_u(((g_16.f1 >= g_132) ^ (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((g_110 = ((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(((((l_282 || g_16.f1) | 0xB166E47F6D24E342LL) == 0x2AL) < g_5), 0x170AL)))) || l_4)), 8)) != 0x1E0AABE5L), l_262.f2)), g_16.f2)), l_178)), 13)) , 9L) && g_36)), l_250)) && l_282))) >= l_4), g_16.f3))) || 255UL) || l_283));
                l_183 &= 0xE52E893FL;
                if (l_263)
                    break;
            }
        }
        for (l_184 = 0; (l_184 > 6); l_184 = safe_add_func_uint8_t_u_u(l_184, 1))
        { 
            int8_t l_288 = 0x24L;
            const uint16_t l_295 = 1UL;
            if ((l_282 & l_250))
            { 
                l_286 = func_25(l_282);
                if (l_178)
                    goto lbl_287;
            }
            else
            { 
                if (l_288)
                    break;
            }
            g_248[0][2] = (l_282 ^ ((g_239.f1 >= l_184) < (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((g_240 <= 2UL), 0x9F12L)) >= g_132), l_295)), l_282))));
        }
        for (g_239.f2 = 5; (g_239.f2 == (-8)); g_239.f2 = safe_sub_func_uint8_t_u_u(g_239.f2, 1))
        { 
            for (g_5 = 18; (g_5 > 9); g_5 = safe_sub_func_uint64_t_u_u(g_5, 6))
            { 
                uint16_t l_300 = 5UL;
                struct S1 l_301 = {0L};
                l_300 ^= 1L;
                g_19 = l_301;
            }
        }
    }
    l_183 = (((+l_286.f2) < ((g_240 |= (safe_add_func_int16_t_s_s(l_286.f5, (+(g_117[1][0]++))))) , ((safe_mul_func_uint16_t_u_u(((l_250 = g_117[0][3]) != (g_16.f1 < g_36)), g_136)) , g_16.f0))) != (-2L));
    return g_36;
}



static const int32_t  func_10(int64_t  p_11, struct S0  p_12, int32_t  p_13, const uint32_t  p_14, uint32_t  p_15)
{ 
    int32_t l_24 = 0xC30BCA0BL;
    int32_t l_49 = 1L;
    const union U2 l_69 = {4294967295UL};
    int32_t l_109 = 0x5D5259FCL;
    int32_t l_112[2];
    uint32_t l_114[4][2][1] = {{{9UL},{0x3A17D067L}},{{9UL},{0x3A17D067L}},{{9UL},{0x3A17D067L}},{{9UL},{0x3A17D067L}}};
    uint32_t l_158[5][5] = {{0x74882178L,0UL,0UL,0x74882178L,0UL},{0x74882178L,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{0UL,0UL,18446744073709551615UL,0x5C64D3B6L,0x5C64D3B6L},{0UL,0UL,0UL,0x5C64D3B6L,0UL},{18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL}};
    struct S0 l_170 = {0xE2B98CD9L,0xF7L,0L,4294967290UL,6UL,0x2756FD92L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_112[i] = 0xF16CCE4FL;
    if ((safe_rshift_func_int16_t_s_u(0xCADFL, 1)))
    { 
        struct S1 l_20 = {0xCEF3L};
        int32_t l_50 = 0x04141EDAL;
        l_20 = g_19;
        l_50 = ((l_49 = func_21((l_24 , (p_12 = func_25(((g_19.f0 && g_16.f0) >= (1UL || l_24))))), g_16)) && p_12.f4);
    }
    else
    { 
        uint16_t l_74 = 9UL;
        for (g_16.f0 = 0; (g_16.f0 <= 44); g_16.f0 = safe_add_func_uint32_t_u_u(g_16.f0, 2))
        { 
            uint32_t l_70 = 2UL;
            int32_t l_73 = (-1L);
            for (l_49 = 0; (l_49 >= (-26)); --l_49)
            { 
                uint32_t l_71 = 0x6CF98135L;
                int32_t l_72 = 0x4FF55BD2L;
                l_73 = (((safe_mod_func_int32_t_s_s((p_12.f5 = (g_16.f3 >= (~(safe_div_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((((((((l_72 = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x2431L, ((((~(g_16.f5 = (g_16 , ((l_69 , 0xD74891BCL) && l_24)))) || p_13) >= p_13) & l_70))) & l_71), l_71))) || g_16.f2) , l_70) > p_12.f3) != p_14) , 1UL) , 0x4639L), 9)), (-4L))) , 0xD2C3L), 0x787CL))))), g_16.f4)) , (-8L)) , p_12.f1);
                l_74--;
                p_12.f5 = (safe_sub_func_uint64_t_u_u(l_69.f0, (2UL != 0x5BD8L)));
            }
            g_16.f5 = ((((safe_lshift_func_uint16_t_u_u(((l_74 || ((safe_rshift_func_int16_t_s_s(p_15, 4)) > ((p_11 &= (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((-1L), ((g_16.f3 = (safe_mul_func_uint8_t_u_u((l_73 = (g_5 ^ 65535UL)), g_16.f4))) && l_74))), 247UL)), l_49))) < p_12.f2))) && 0L), g_16.f2)) , l_74) < g_19.f0) || p_12.f2);
        }
    }
    for (l_49 = 0; (l_49 >= 20); l_49 = safe_add_func_int8_t_s_s(l_49, 8))
    { 
        int32_t l_97 = 0x794CA015L;
        int32_t l_111 = 0x65E95B66L;
        int32_t l_137 = 0L;
        int32_t l_139 = 0x017C95ABL;
        int32_t l_140[3];
        uint16_t l_145 = 65528UL;
        int64_t l_154 = 0xED89A75344A4BF25LL;
        int i;
        for (i = 0; i < 3; i++)
            l_140[i] = (-1L);
        for (l_24 = (-10); (l_24 != 6); l_24 = safe_add_func_int16_t_s_s(l_24, 8))
        { 
            return g_16.f2;
        }
        if ((l_97 , p_12.f3))
        { 
            int32_t l_113 = 1L;
            uint32_t l_126 = 0xDDCAC83EL;
            int32_t l_128 = 8L;
            int32_t l_134 = 0xCE5AB66AL;
            int32_t l_138 = (-6L);
            if ((l_111 = ((func_25((safe_div_func_int8_t_s_s((g_118 &= ((safe_mul_func_uint8_t_u_u(((p_12.f4 != (((safe_div_func_uint16_t_u_u(p_12.f4, (safe_lshift_func_uint16_t_u_s((g_117[1][2] = (0UL | ((l_114[0][1][0]++) < ((p_13 > g_16.f1) >= l_113)))), l_109)))) && 0x2EL) ^ l_113)) > l_49), 255UL)) , 2L)), g_16.f2))) , g_108) || g_19.f0)))
            { 
                struct S0 l_119 = {18446744073709551610UL,0xC8L,1L,0xF5A9ACF3L,255UL,0xAF77F40AL};
                l_119 = g_16;
                return l_119.f4;
            }
            else
            { 
                p_12.f5 = g_108;
                g_36 = (g_117[1][2] >= 0xCC173D2BL);
            }
            if (((safe_rshift_func_int8_t_s_u((g_16.f1 ^= (p_12.f1 || (g_16.f0 || l_111))), 2)) & (safe_add_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((0x02BCF3F1L && g_117[1][2]), l_97)) <= (-10L)), g_16.f0))))
            { 
                if (l_126)
                    break;
            }
            else
            { 
                int32_t l_127 = 2L;
                int32_t l_129 = 1L;
                int32_t l_130 = 0x8358C8BFL;
                int32_t l_131 = (-1L);
                int32_t l_133 = (-1L);
                int32_t l_141[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_141[i] = 0xFD70E6FCL;
                --g_142;
                g_16 = p_12;
            }
        }
        else
        { 
            --l_145;
            p_12.f5 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_16.f5, 8)), 1));
        }
        if ((((((((safe_lshift_func_uint16_t_u_s(0x709DL, 11)) != l_154) , 0UL) <= ((p_12.f5 |= (0xB90B52BFL <= (-4L))) || p_12.f4)) ^ 0x9DF1L) > 0x5E263B0CC8312293LL) , (-8L)))
        { 
            int32_t l_157 = 1L;
            if (g_136)
                break;
            for (l_97 = 15; (l_97 <= 23); l_97 = safe_add_func_int16_t_s_s(l_97, 7))
            { 
                if (l_157)
                    break;
                if (g_16.f2)
                    break;
            }
        }
        else
        { 
            const int16_t l_161 = 0L;
            l_158[3][1]--;
            if (p_12.f5)
            { 
                return l_161;
            }
            else
            { 
                int32_t l_162 = (-7L);
                g_108 &= l_162;
                if (p_12.f1)
                    continue;
            }
        }
    }
    l_170 = func_25((l_112[0] = ((g_118 && ((safe_mul_func_uint16_t_u_u(l_109, ((safe_mul_func_int8_t_s_s((g_16.f1 ^= (((+l_114[0][1][0]) , (p_12.f2 & 0x69L)) != g_108)), g_117[1][2])) >= 0L))) || l_114[0][1][0])) ^ p_12.f2)));
    return g_16.f0;
}



static int32_t  func_21(struct S0  p_22, struct S0  p_23)
{ 
    struct S0 l_38 = {0xBCDCEC45L,1L,-1L,0UL,0x22L,1L};
    uint32_t l_45 = 18446744073709551615UL;
    uint64_t l_48 = 0UL;
    g_16.f5 = (l_38 , ((l_45 = ((g_16.f0 ^ (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_36, ((((l_38.f5 = g_19.f0) < 0x5F71L) && 0xFCL) != p_22.f3))) <= l_38.f3), 0x7081L)) || 0x3A780915L) && 0xB78960BD9B76FC49LL), g_16.f4))) <= p_23.f3)) > p_23.f3));
    l_38.f5 = (((safe_div_func_int8_t_s_s(((p_23.f3 |= (0xBA9AL < (g_16.f4 != ((l_38.f5 > (-8L)) ^ l_38.f5)))) , l_45), 255UL)) , g_16.f3) , 0x8A907459L);
    l_38.f5 = (((-1L) ^ p_22.f0) >= (l_38.f1 , 0xB1CB69ACL));
    return l_48;
}



static struct S0  func_25(uint8_t  p_26)
{ 
    union U2 l_27 = {1UL};
    struct S0 l_37 = {18446744073709551613UL,0xE8L,0xFEFD6E51L,0UL,0x20L,0L};
    g_36 |= ((l_27 = l_27) , (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((l_27.f1 <= ((safe_add_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(0L, 5L)) != 0x3970C0F3ADCFEC76LL) <= l_27.f1), g_16.f5)) != g_16.f3)) == 0x58L), 4UL)), g_16.f3)));
    return l_37;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    transparent_crc(g_16.f5, "g_16.f5", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_117[i][j], "g_117[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f1, "g_239.f1", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_248[i][j], "g_248[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
