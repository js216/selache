// SPDX-License-Identifier: MIT
// cctest_csmith_ccb88392.c --- cctest case csmith_ccb88392 (csmith seed 3434644370)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe8e6d46a */

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

// Options:   -s 3434644370 -o /tmp/csmith_gen_g6mqsqvc/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   int64_t  f1;
};

union U1 {
   uint64_t  f0;
   struct S0  f1;
   int32_t  f2;
   uint8_t  f3;
   int8_t * f4;
};


static uint64_t g_4 = 0x1EA66E58D020BD2ALL;
static uint16_t g_26 = 65530UL;
static uint16_t g_29 = 8UL;
static uint16_t g_36 = 0x2B79L;
static int32_t g_38 = 1L;
static uint32_t g_48 = 4294967287UL;
static struct S0 g_76 = {0x221EB1EDL,-1L};
static uint32_t g_95 = 0x4EFD0E68L;
static int32_t g_97 = 0x86D9E1B0L;
static int16_t g_98 = 0xCA45L;
static const union U1 g_132 = {2UL};
static uint16_t g_145[3] = {65533UL,65533UL,65533UL};
static int32_t **g_153 = (void*)0;
static int32_t ** const *g_152 = &g_153;
static uint8_t g_160 = 249UL;
static uint64_t g_162 = 0UL;
static uint64_t g_169[4] = {0UL,0UL,0UL,0UL};
static uint32_t *g_172 = &g_48;
static uint32_t **g_171 = &g_172;
static uint16_t g_178 = 0x9D66L;
static uint8_t g_213 = 255UL;
static int8_t g_224[1] = {0xD0L};
static uint32_t g_225[4][7][1] = {{{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL}},{{4294967295UL},{0x9C42DECDL},{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL},{4294967295UL}},{{0x9C42DECDL},{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL},{4294967295UL},{0x9C42DECDL}},{{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL},{4294967295UL},{0x9C42DECDL},{0x9C42DECDL}}};
static uint16_t *g_304 = &g_145[0];
static uint16_t **g_303 = &g_304;
static int16_t g_325 = (-6L);
static uint64_t g_334 = 0UL;
static uint16_t g_346[5] = {0x645DL,0x645DL,0x645DL,0x645DL,0x645DL};
static int32_t g_347 = 0xA1C232D9L;
static uint32_t g_348 = 18446744073709551607UL;
static struct S0 *g_355 = &g_76;
static struct S0 **g_354 = &g_355;
static uint32_t g_403 = 0xFAB76097L;
static uint32_t g_423[3] = {4294967288UL,4294967288UL,4294967288UL};
static uint8_t g_425 = 255UL;
static int16_t g_434 = 0x0C34L;
static uint8_t g_436[5] = {3UL,3UL,3UL,3UL,3UL};
static uint32_t g_439 = 0x3DA22FC5L;
static int16_t g_501[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
static uint32_t g_502[6][1] = {{4294967295UL},{5UL},{4294967295UL},{5UL},{4294967295UL},{5UL}};
static uint8_t *g_528 = &g_160;
static uint8_t **g_527 = &g_528;
static uint8_t ***g_526 = &g_527;
static uint32_t g_540 = 0x5E1DD00AL;
static uint32_t * const *g_546 = (void*)0;
static int8_t g_548 = 0x0AL;
static int64_t g_549 = 0x5D6E7B4568F124D8LL;
static int16_t g_551 = 0xD92FL;
static int64_t g_552 = 0x796B761A98225740LL;
static uint32_t g_553[4] = {0UL,0UL,0UL,0UL};
static uint8_t g_556 = 0x5CL;
static uint8_t g_594 = 254UL;
static struct S0 g_603 = {0x8DA13520L,-1L};
static union U1 g_607 = {1UL};
static int64_t g_633 = (-3L);
static uint8_t g_668 = 247UL;
static int32_t g_685[2] = {0x15F45458L,0x15F45458L};
static int32_t *g_684 = &g_685[0];
static const union U1 *g_739 = (void*)0;
static int32_t ***g_767 = &g_153;
static int32_t ****g_766 = &g_767;
static int8_t **g_1032 = (void*)0;
static int8_t ***g_1031 = &g_1032;
static int8_t ****g_1030 = &g_1031;
static int8_t *****g_1029[5] = {&g_1030,&g_1030,&g_1030,&g_1030,&g_1030};
static int8_t g_1117 = 0L;
static struct S0 ** const g_1150 = (void*)0;
static struct S0 ** const *g_1149 = &g_1150;
static int64_t **g_1207[1] = {(void*)0};
static uint8_t g_1246 = 0xDAL;
static int16_t g_1251 = 0L;
static uint32_t g_1272 = 1UL;
static uint32_t *g_1312 = &g_439;
static uint32_t **g_1311 = &g_1312;
static uint32_t ***g_1310 = &g_1311;
static uint32_t ****g_1309 = &g_1310;
static struct S0 g_1339[2] = {{0UL,0x7B3464985490D9BDLL},{0UL,0x7B3464985490D9BDLL}};
static struct S0 g_1355 = {4294967288UL,0xEC439633544C7CD4LL};
static uint64_t **g_1470[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static struct S0 ****g_1490 = (void*)0;
static struct S0 *****g_1489[6] = {&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490};
static union U1 g_1493 = {0xA97267AB432CD8B6LL};



static int16_t  func_1(void);
static int64_t  func_7(int8_t * p_8, uint16_t  p_9, int8_t * p_10, uint64_t  p_11, uint8_t  p_12);
static int8_t * func_13(const int64_t  p_14, int8_t * p_15);
static int16_t  func_31(uint64_t  p_32, uint16_t  p_33, uint16_t * p_34);
static int32_t * func_41(union U1  p_42, int16_t  p_43, int8_t  p_44, int64_t  p_45);
static int32_t  func_51(struct S0  p_52, uint16_t  p_53, uint64_t  p_54);
static struct S0  func_55(uint32_t * p_56, uint32_t * p_57, int32_t  p_58, uint16_t * p_59);
static uint32_t  func_60(uint16_t  p_61, int32_t  p_62, int32_t * p_63);




static int16_t  func_1(void)
{ 
    int64_t l_24 = (-1L);
    uint16_t *l_25 = &g_26;
    uint16_t *l_27 = (void*)0;
    uint16_t *l_28 = &g_29;
    uint16_t *l_35 = &g_36;
    int8_t *l_1116 = &g_1117;
    uint64_t l_1507 = 18446744073709551615UL;
    int32_t l_1511 = 0L;
    int32_t **l_1512[6][7] = {{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684},{&g_684,&g_684,&g_684,&g_684,&g_684,&g_684,&g_684}};
    uint64_t l_1513 = 1UL;
    int i, j;
    l_1511 &= (((safe_lshift_func_int8_t_s_s((g_4 <= (safe_div_func_int64_t_s_s((func_7(func_13((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(l_24, ((*l_28) &= ((*l_25) = g_4)))) < l_24) <= (!func_31(g_4, (g_4 > (5L || 0UL)), l_35))), l_24)), (-1L))), l_24)), l_1116), l_24, l_1116, l_24, l_1507) & l_24), l_1507))), 0)) >= l_1507) <= l_24);
    g_684 = &l_1511;
    ++l_1513;
    return g_502[0][0];
}



static int64_t  func_7(int8_t * p_8, uint16_t  p_9, int8_t * p_10, uint64_t  p_11, uint8_t  p_12)
{ 
    uint32_t l_1508 = 0x95C50377L;
    int32_t **l_1509 = &g_684;
    int32_t **l_1510 = (void*)0;
    (*g_684) = l_1508;
    (*g_684) |= ((l_1509 = l_1509) == l_1510);
    return p_9;
}



static int8_t * func_13(const int64_t  p_14, int8_t * p_15)
{ 
    int16_t l_1120 = 0x4AA1L;
    int32_t l_1128 = 0xDB0432B8L;
    uint32_t * const **l_1176 = &g_546;
    uint8_t l_1195 = 254UL;
    const struct S0 l_1202 = {0x81828B32L,2L};
    const uint32_t l_1221[7][4] = {{5UL,4294967292UL,4294967292UL,5UL},{4294967292UL,5UL,0xA5051697L,7UL},{4294967292UL,0xA5051697L,4294967292UL,0xEF80FF09L},{5UL,7UL,0xEF80FF09L,0xEF80FF09L},{0xA5051697L,0xA5051697L,0xBB7F6F28L,7UL},{7UL,5UL,0xBB7F6F28L,5UL},{0xA5051697L,4294967292UL,0xEF80FF09L,0xBB7F6F28L}};
    int32_t l_1265 = 0x27A13242L;
    int32_t l_1271 = 0x59E10755L;
    uint32_t *l_1288 = &g_553[0];
    int32_t l_1293 = 1L;
    int64_t ***l_1335 = &g_1207[0];
    uint16_t l_1352 = 3UL;
    int32_t l_1374 = 1L;
    int64_t *l_1379[7];
    int32_t l_1388[2][2][2] = {{{0xD1341A38L,0xD1341A38L},{0xD1341A38L,0xD1341A38L}},{{0xD1341A38L,0xD1341A38L},{0xD1341A38L,0xD1341A38L}}};
    int32_t *l_1421 = &l_1128;
    int32_t l_1483 = 0xDE1932F0L;
    union U1 *l_1492 = &g_1493;
    int8_t *l_1494 = &g_224[0];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1379[i] = (void*)0;
    return l_1494;
}



static int16_t  func_31(uint64_t  p_32, uint16_t  p_33, uint16_t * p_34)
{ 
    int32_t *l_37 = &g_38;
    struct S0 ***l_805 = (void*)0;
    int32_t l_806 = 0x90956B0CL;
    int32_t l_827 = 0xCCC0E8E6L;
    int32_t l_828[5][4][2] = {{{(-3L),0x47D224B2L},{(-1L),4L},{(-1L),0x47D224B2L},{(-3L),(-1L)}},{{0x47D224B2L,4L},{0L,0L},{(-3L),0L},{0L,4L}},{{0x47D224B2L,(-1L)},{(-3L),0x47D224B2L},{(-1L),4L},{(-1L),0x47D224B2L}},{{(-3L),(-1L)},{0x47D224B2L,4L},{0L,0L},{(-3L),0L}},{{0L,4L},{0x47D224B2L,(-1L)},{(-3L),0x47D224B2L},{(-1L),4L}}};
    uint32_t l_829 = 4294967287UL;
    const uint16_t *l_869 = &g_346[2];
    const uint16_t **l_868 = &l_869;
    const int64_t l_897 = 0x3A1CCDA3B13C5598LL;
    int32_t l_951 = 0x00F75D3EL;
    int32_t l_952 = 0x4650BC11L;
    int8_t l_993[4][4];
    uint8_t l_1002 = 2UL;
    int32_t ****l_1038 = &g_767;
    int32_t ** const **l_1039 = &g_152;
    union U1 *l_1074 = &g_607;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_993[i][j] = 0xA0L;
    }
    (*l_37) ^= ((*p_34) & p_33);
    if (p_33)
    { 
        union U1 l_46 = {0x8670FC24489BE67ELL};
        uint32_t *l_74 = &g_48;
        struct S0 ***l_804 = (void*)0;
        for (g_36 = 15; (g_36 == 50); g_36++)
        { 
            uint32_t *l_47 = &g_48;
            int32_t **l_64 = (void*)0;
            int32_t **l_65 = &l_37;
            int16_t *l_802 = &g_551;
            uint32_t l_803 = 1UL;
            (*l_65) = func_41(l_46, g_36, (((++(*l_47)) || func_51(func_55((func_60((*p_34), g_38, ((*l_65) = l_37)) , l_74), &g_48, g_4, &g_36), g_36, g_76.f0)) == g_76.f1), p_32);
            l_806 ^= (safe_div_func_int64_t_s_s(((~(safe_rshift_func_int8_t_s_u((((safe_mul_func_uint64_t_u_u(((p_33 | (((*l_802) = g_556) || l_803)) > (l_804 == l_805)), ((void*)0 != l_37))) , (*g_171)) != (*g_171)), p_33))) <= (**l_65)), p_33));
        }
    }
    else
    { 
        uint32_t l_818 = 0x4E998CF7L;
        int32_t l_820 = (-9L);
        uint64_t l_821[7][1];
        int32_t l_823[6][6][6] = {{{0x51E3687AL,5L,0L,0x1E4E9828L,(-6L),1L},{0L,0x97091C26L,0x32D7896AL,0x63148C61L,0L,0x14A49EB9L},{0xCAC7C888L,(-1L),1L,0xA82B7245L,(-1L),0xED215474L},{0x43A956D3L,0x15044212L,0x55CA7A31L,(-1L),0L,0x51E3687AL},{0L,(-7L),0x174AC106L,0x4888061CL,0x56A53EFFL,0x3562DADFL},{0x64366C10L,2L,1L,0x14A73AE0L,0L,0xD2E9406FL}},{{0xA82B7245L,1L,1L,0xD2559B7BL,4L,0x23AEA4A7L},{0x30ADAE48L,0x97091C26L,4L,(-1L),(-2L),0L},{0xED215474L,0L,(-1L),0x30ADAE48L,1L,0x64366C10L},{0x64366C10L,0x5E089A95L,0x56A53EFFL,2L,5L,0L},{0x23AEA4A7L,1L,0x3562DADFL,0x31477A3AL,(-4L),0xE88B7686L},{0x4116AA1FL,0x3562DADFL,1L,0x3562DADFL,0x4116AA1FL,1L}},{{2L,0x70CE399AL,0x1E4E9828L,4L,0x5E089A95L,0xED215474L},{0xBDE68287L,0x32D7896AL,0x23AEA4A7L,0x70CE399AL,0x004F9705L,0xED215474L},{(-1L),5L,0x1E4E9828L,(-10L),0x598A0053L,1L},{0x004F9705L,0x64366C10L,1L,0x293D6469L,0x754E2D9AL,0xE88B7686L},{0x04853F4EL,(-6L),0x3562DADFL,2L,0xC30561FBL,0L},{(-1L),(-1L),0x56A53EFFL,0x598A0053L,0x293D6469L,0x64366C10L}},{{0x5C68B92EL,(-1L),(-1L),0xC30561FBL,7L,0L},{6L,0xE010275AL,4L,0xD2E9406FL,2L,0x23AEA4A7L},{1L,0x004F9705L,1L,0x15044212L,2L,0xD2E9406FL},{0L,4L,0L,0xA82B7245L,0x93C465D7L,6L},{0L,0x598A0053L,0x5E089A95L,0x174AC106L,1L,(-1L)},{0x598A0053L,0x0BF463CBL,1L,7L,0L,0xE010275AL}},{{0x31477A3AL,0x5BECDAACL,(-1L),5L,0L,0x1E4E9828L},{4L,0x04853F4EL,0L,1L,(-1L),(-1L)},{0x1E4E9828L,0x315F42B6L,0x315F42B6L,0x1E4E9828L,6L,0x004F9705L},{0x15044212L,0L,0L,(-4L),(-1L),0x55CA7A31L},{1L,0x947CBE83L,0xED215474L,(-6L),(-1L),7L},{0x754E2D9AL,0L,0xBDE68287L,0x23AEA4A7L,6L,0x3C8A6793L}},{{0L,0x315F42B6L,(-1L),1L,(-1L),0x754E2D9AL},{0x32D7896AL,0x04853F4EL,0x15044212L,0L,0L,0x4888061CL},{1L,0x5BECDAACL,5L,0x8FB370C3L,0L,5L},{0x55CA7A31L,0x0BF463CBL,1L,0x754E2D9AL,1L,(-1L)},{0x174AC106L,0x598A0053L,0x04853F4EL,0xE010275AL,0x93C465D7L,0L},{1L,4L,0L,0x3C8A6793L,2L,(-1L)}}};
        int8_t l_839 = (-1L);
        int32_t *l_840 = &g_685[1];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_821[i][j] = 0xDFE2AEE9AAD62809LL;
        }
    }
    if ((((***g_526)++) >= (1UL == (*l_37))))
    { 
        uint16_t l_901 = 0xBB4EL;
        int32_t l_905[1];
        uint32_t l_928[1];
        uint8_t l_931 = 255UL;
        uint8_t l_934 = 247UL;
        int32_t *l_935 = &l_806;
        int32_t *l_936 = &l_905[0];
        int32_t *l_937 = &l_828[3][3][0];
        int32_t *l_938 = (void*)0;
        int32_t *l_939 = &l_905[0];
        int32_t *l_940 = &l_905[0];
        int32_t *l_941 = &g_685[0];
        int32_t *l_942 = &l_827;
        int32_t *l_943 = &g_685[1];
        int32_t *l_944 = &l_806;
        int32_t *l_945 = &l_827;
        int32_t *l_946 = &g_38;
        int32_t *l_947 = &l_828[4][2][0];
        int32_t *l_948 = (void*)0;
        int32_t *l_949 = &l_828[3][2][1];
        int32_t *l_950[6] = {&g_38,&g_38,&g_38,&g_38,&g_38,&g_38};
        uint8_t l_953 = 0x28L;
        int32_t *** const *l_990 = &g_767;
        int32_t *** const **l_989 = &l_990;
        int32_t **** const *l_991 = &g_766;
        int64_t l_992 = 0xCC63F19D0F0BFD80LL;
        uint64_t l_994 = 0xB587633A62DEC051LL;
        int i;
        for (i = 0; i < 1; i++)
            l_905[i] = 0x44476423L;
        for (i = 0; i < 1; i++)
            l_928[i] = 0x5187487DL;
        for (l_829 = 0; (l_829 <= 4); l_829++)
        { 
            uint32_t l_876[1][7];
            uint32_t *l_877 = &g_95;
            int8_t *l_902 = &g_224[0];
            int32_t l_918 = 0x4B79A8C2L;
            int32_t l_920 = 8L;
            int32_t l_927 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_876[i][j] = 0xC7F93D82L;
            }
            (*l_37) |= (((l_876[0][5] , (++(*l_877))) , (((safe_add_func_uint16_t_u_u(0xBEC6L, p_32)) ^ (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(((*l_902) = ((safe_rshift_func_int16_t_s_u((+g_436[1]), (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_mul_func_uint16_t_u_u((l_897 <= (+(g_603.f0 > (safe_mod_func_int16_t_s_s(g_325, l_876[0][5]))))), l_901)) <= 0xFD322032L) != 18446744073709551615UL) == (*p_34)), 7)), l_876[0][2])))) != l_876[0][5])), 4)) & 0L), g_423[1]))) , (*g_528))) >= p_33);
            for (g_551 = (-26); (g_551 < (-1)); g_551++)
            { 
                int32_t *l_906 = &l_827;
                int32_t *l_907 = &l_827;
                int32_t *l_908 = &g_38;
                int32_t *l_909 = &g_38;
                int32_t *l_910 = &g_685[0];
                int32_t *l_911 = &l_806;
                int32_t *l_912 = &g_685[0];
                int32_t *l_913 = &g_38;
                int32_t *l_914 = &l_905[0];
                int32_t *l_915 = &l_828[0][1][0];
                int32_t *l_916 = &g_38;
                int32_t *l_917 = &l_828[3][0][1];
                int32_t *l_919 = &l_905[0];
                int32_t *l_921 = (void*)0;
                int32_t *l_922 = &l_918;
                int32_t *l_923 = &g_685[1];
                int32_t *l_924 = (void*)0;
                int32_t *l_925 = &g_685[0];
                int32_t *l_926[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_926[i] = (void*)0;
                l_928[0]++;
                (*l_916) ^= ((void*)0 != &g_304);
                (*l_907) = p_32;
                if ((*l_37))
                    continue;
                l_931--;
            }
        }
        l_905[0] |= l_934;
        --l_953;
        for (g_97 = 24; (g_97 >= (-17)); g_97 = safe_sub_func_uint64_t_u_u(g_97, 4))
        { 
            uint64_t *l_958 = &g_162;
            int32_t l_966[1];
            uint32_t l_971 = 4294967293UL;
            int32_t *l_977 = &g_685[0];
            struct S0 l_982 = {9UL,0xB2A0C56E12069010LL};
            int i;
            for (i = 0; i < 1; i++)
                l_966[i] = (-6L);
            if ((((*l_958) = 1UL) >= 0xA1476BBC37FB5860LL))
            { 
                int32_t *l_959 = &l_828[4][3][0];
                union U1 l_960 = {0x4523E2F4E04FA37CLL};
                int32_t l_964 = 0x1CB30795L;
                int32_t l_965 = 0x2B12676FL;
                int32_t l_967 = 0x8E756229L;
                int32_t l_968 = 0x0CABB6A3L;
                int32_t l_969 = 0L;
                int32_t l_970 = 0xDC3742F8L;
                l_959 = &l_905[0];
                if (((l_960 , ((void*)0 != (*g_303))) && g_502[1][0]))
                { 
                    uint32_t ***l_962[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t ****l_961 = &l_962[2];
                    int32_t l_963[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_963[i] = (-1L);
                    (*l_961) = &g_171;
                    --l_971;
                    (*l_939) |= (*g_684);
                    return l_963[0];
                }
                else
                { 
                    uint32_t l_974 = 7UL;
                    ++l_974;
                }
            }
            else
            { 
                l_977 = &l_966[0];
            }
            for (g_434 = 0; (g_434 >= 0); g_434 -= 1)
            { 
                uint32_t *l_980 = &l_829;
                int64_t *l_981[7] = {&g_552,&g_552,&g_552,&g_552,&g_552,&g_552,&g_552};
                int i;
                l_966[g_434] = ((**g_527) , ((safe_add_func_uint8_t_u_u(((func_55(l_980, ((((*l_37) = (-1L)) , l_982) , (*g_171)), p_32, ((*g_303) = (*g_303))) , &g_552) == (void*)0), p_32)) && 0xD5L));
                if (p_32)
                    break;
                return p_33;
            }
        }
        (*g_684) = (((safe_div_func_uint32_t_u_u((*l_940), (p_32 && ((++(**g_171)) == ((*p_34) | ((l_993[2][3] &= (g_98 | ((((safe_mul_func_uint8_t_u_u(((l_989 != (l_991 = (p_32 , l_991))) & (*l_37)), (*l_37))) | g_76.f1) > p_32) > l_992))) , l_994)))))) && (*l_947)) <= 0x82L);
    }
    else
    { 
        int32_t *l_995 = &l_827;
        int32_t *l_996 = &l_952;
        int32_t *l_997 = (void*)0;
        int32_t *l_998 = &l_828[4][3][0];
        int32_t *l_999 = &l_828[2][0][0];
        int32_t *l_1000[5][1][1] = {{{&l_828[4][3][0]}},{{&l_952}},{{&l_828[4][3][0]}},{{&l_952}},{{&l_828[4][3][0]}}};
        int8_t l_1001[1];
        uint8_t *l_1017 = &g_668;
        int64_t *l_1022 = (void*)0;
        int64_t *l_1023 = &g_633;
        uint64_t l_1092[3][1][5];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1001[i] = (-1L);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_1092[i][j][k] = 18446744073709551615UL;
            }
        }
        l_1002--;
    }
    l_37 = &l_952;
    return g_224[0];
}



static int32_t * func_41(union U1  p_42, int16_t  p_43, int8_t  p_44, int64_t  p_45)
{ 
    uint64_t l_103 = 0xC0977F3D9679FF52LL;
    int32_t l_105 = 0x0C570B93L;
    union U1 l_109 = {0xC2412408B304F1BCLL};
    int32_t l_116 = 1L;
    int32_t *l_193 = &g_38;
    uint16_t *l_198 = &g_145[0];
    uint16_t *l_200 = &g_36;
    struct S0 l_209 = {4294967292UL,0x18B1E2C77FF3C2B3LL};
    uint32_t l_215 = 0x4840AD8FL;
    uint32_t l_217 = 0x433D11F6L;
    int32_t * const *l_244[2][6][2] = {{{&l_193,(void*)0},{&l_193,&l_193},{&l_193,&l_193},{&l_193,(void*)0},{&l_193,&l_193},{&l_193,&l_193}},{{&l_193,(void*)0},{&l_193,&l_193},{&l_193,&l_193},{&l_193,(void*)0},{&l_193,&l_193},{&l_193,&l_193}}};
    int32_t * const **l_243 = &l_244[0][1][0];
    int32_t * const ***l_242[4][3][1] = {{{(void*)0},{&l_243},{(void*)0}},{{&l_243},{&l_243},{(void*)0}},{{&l_243},{(void*)0},{&l_243}},{{&l_243},{(void*)0},{&l_243}}};
    uint8_t l_283 = 0xFEL;
    struct S0 **l_351 = (void*)0;
    struct S0 ***l_352 = (void*)0;
    struct S0 ***l_353[2][3] = {{(void*)0,&l_351,&l_351},{(void*)0,&l_351,&l_351}};
    int32_t * const l_356 = (void*)0;
    struct S0 *l_370 = (void*)0;
    uint32_t *l_471 = &g_439;
    int32_t ** const l_577 = &l_193;
    int32_t *l_596[1];
    int32_t *l_598 = &g_38;
    union U1 *l_606 = &g_607;
    int32_t *l_686 = &g_685[0];
    int32_t ***l_763 = &g_153;
    int32_t ****l_762 = &l_763;
    int32_t *****l_790 = &g_766;
    int32_t *l_792 = &g_685[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_596[i] = &l_105;
    for (p_43 = (-17); (p_43 != 27); p_43++)
    { 
        int32_t *l_104[1][5];
        int64_t l_220 = 0xD46132A9E99FB6E1LL;
        int32_t ***l_241 = &g_153;
        int32_t ****l_240[1][3][6] = {{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241},{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241},{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}}};
        uint64_t *l_250[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t **l_331[6][4] = {{&g_304,&l_198,&l_198,&l_198},{&g_304,&g_304,&l_198,&l_198},{&g_304,&l_198,&l_198,&l_198},{(void*)0,&l_198,&l_198,&l_198},{&l_198,&l_198,(void*)0,&l_198},{&l_198,&l_198,&g_304,&l_198}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_104[i][j] = &g_38;
        }
    }
    g_354 = l_351;
    if ((((&g_38 == l_356) || ((safe_lshift_func_int8_t_s_s(p_42.f0, g_95)) >= (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((g_76.f1 == ((safe_mul_func_uint16_t_u_u(((0xB6L <= (safe_sub_func_uint8_t_u_u(p_42.f2, 0xCDL))) , 0x0EC8L), g_334)) > 4UL)) , p_45), g_169[2])), 1UL)), 9UL)))) | 2L))
    { 
        struct S0 *l_369 = &l_209;
        int32_t l_371 = (-6L);
        int64_t l_374 = 1L;
        int32_t l_424 = 0x5622E054L;
        int32_t l_433[1];
        const struct S0 ***l_444 = (void*)0;
        uint64_t *l_472[5] = {&l_109.f0,&l_109.f0,&l_109.f0,&l_109.f0,&l_109.f0};
        int32_t *l_499 = &l_371;
        int32_t l_590 = 0x4D0B67E5L;
        int32_t *l_597[5];
        int i;
        for (i = 0; i < 1; i++)
            l_433[i] = 0xE1155E2CL;
        for (i = 0; i < 5; i++)
            l_597[i] = &l_371;
        l_371 &= ((*l_193) = ((l_370 = l_369) != (void*)0));
        for (g_97 = 0; (g_97 > (-30)); g_97 = safe_sub_func_int16_t_s_s(g_97, 9))
        { 
            int32_t l_377 = 0x3A9CE76EL;
            int32_t l_389 = (-8L);
            union U1 l_401 = {0x9C05F721C33C2831LL};
            uint8_t *l_431 = (void*)0;
            uint8_t * const *l_430 = &l_431;
            int32_t l_435[4] = {0x0198F87FL,0x0198F87FL,0x0198F87FL,0x0198F87FL};
            int32_t *l_465 = &g_38;
            int32_t ** const *l_479 = &g_153;
            int32_t l_543 = 0L;
            int i;
        }
        for (g_540 = 0; (g_540 <= 0); g_540 += 1)
        { 
            uint32_t *l_587 = &g_225[2][2][0];
            int8_t *l_588 = &g_224[0];
            int8_t *l_589 = &g_548;
            int32_t **l_591 = &l_193;
            int32_t ***l_592 = &g_153;
            uint64_t l_593 = 0UL;
            int32_t l_595 = 0xA5103F6CL;
            int i;
            if (g_346[(g_540 + 1)])
                break;
            g_594 ^= (safe_add_func_uint32_t_u_u((l_577 != ((*l_592) = ((safe_mul_func_uint16_t_u_u((((((**g_527) = ((p_42.f3 >= (0UL != (!((((*l_589) |= ((*l_588) ^= ((p_44 & (((safe_add_func_uint16_t_u_u((g_346[(g_540 + 3)] &= (safe_rshift_func_uint16_t_u_s((**g_303), 15))), (safe_rshift_func_uint8_t_u_s((func_55(l_587, &l_215, p_42.f2, l_198) , (**l_577)), 4)))) >= (*l_499)) <= p_43)) , 8L))) == (*l_499)) ^ l_590)))) , p_42.f0)) | g_502[4][0]) ^ 0x895463B134E5D19ELL) | 6L), (*l_499))) , l_591))), l_593));
            for (l_593 = 0; (l_593 <= 0); l_593 += 1)
            { 
                (*l_193) ^= (l_595 > (**g_303));
                for (g_160 = 0; (g_160 <= 0); g_160 += 1)
                { 
                    (***l_592) |= 0xE194E922L;
                }
            }
        }
        for (p_43 = 3; (p_43 >= 0); p_43 -= 1)
        { 
            int i;
            (*l_193) = g_501[(p_43 + 1)];
        }
        return l_598;
    }
    else
    { 
        struct S0 *l_601 = &l_209;
        int32_t l_628 = 0xBB5AF0C8L;
        int8_t *l_650 = &g_224[0];
        int32_t l_659 = 4L;
        int32_t l_703[6] = {0xB15956ACL,0L,0L,0xB15956ACL,0L,0L};
        int32_t *l_738 = &g_38;
        uint32_t l_745 = 1UL;
        int8_t l_781 = 0x5EL;
        uint32_t l_782 = 4294967286UL;
        int i;
        for (g_38 = (-12); (g_38 == 7); g_38 = safe_add_func_int64_t_s_s(g_38, 7))
        { 
            struct S0 *l_602 = &g_603;
            union U1 *l_605 = &l_109;
            union U1 **l_604[6][6][4] = {{{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,(void*)0,(void*)0},{&l_605,&l_605,(void*)0,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,(void*)0,(void*)0,&l_605},{&l_605,&l_605,(void*)0,&l_605}},{{&l_605,(void*)0,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{(void*)0,&l_605,(void*)0,&l_605}},{{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{(void*)0,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,(void*)0,&l_605}},{{&l_605,&l_605,(void*)0,&l_605},{&l_605,(void*)0,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,(void*)0,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,(void*)0}},{{&l_605,(void*)0,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,(void*)0,(void*)0,(void*)0},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605}},{{(void*)0,&l_605,&l_605,&l_605},{&l_605,(void*)0,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{&l_605,&l_605,&l_605,&l_605},{(void*)0,&l_605,&l_605,&l_605}}};
            int32_t l_629 = 0xE8E3318FL;
            int64_t *l_630 = &l_109.f1.f1;
            int64_t *l_631[1];
            uint16_t *l_632 = (void*)0;
            int8_t **l_663 = &l_650;
            int8_t ***l_662 = &l_663;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_631[i] = &l_209.f1;
            l_602 = l_601;
            l_606 = &l_109;
        }
lbl_748:
        for (g_95 = 0; (g_95 == 7); ++g_95)
        { 
            uint64_t l_702[1][3];
            uint32_t * const l_704 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_702[i][j] = 0xF2E145241265D298LL;
            }
            (*l_686) = (safe_lshift_func_uint16_t_u_s(((((*l_598) = (safe_mul_func_uint8_t_u_u(0x87L, (safe_unary_minus_func_int8_t_s(l_702[0][1]))))) == 1L) ^ (((l_703[1] , (void*)0) != l_704) ^ (((safe_mod_func_int8_t_s_s(0x97L, p_44)) < p_42.f0) , 0x89513E76L))), l_703[1]));
        }
        for (g_160 = 0; (g_160 <= 1); ++g_160)
        { 
            uint8_t l_709 = 0x28L;
            l_709 |= (*g_684);
        }
        for (l_628 = (-28); (l_628 > (-4)); l_628 = safe_add_func_int8_t_s_s(l_628, 9))
        { 
            int8_t l_721[1];
            int32_t l_723[5][4] = {{0L,0x2D418378L,0L,0x2D418378L},{0L,0x2D418378L,0L,0x2D418378L},{0L,0x2D418378L,0L,0x2D418378L},{0L,0x2D418378L,0L,0x2D418378L},{0L,0x2D418378L,0L,0x2D418378L}};
            int32_t l_729 = (-8L);
            uint32_t l_732[4][1];
            int32_t l_740 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_721[i] = 0x19L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_732[i][j] = 0xB768DCEAL;
            }
            for (g_325 = 2; (g_325 >= 0); g_325 -= 1)
            { 
                int16_t l_728 = 0x0D3AL;
                int32_t l_730 = (-1L);
                int32_t l_731[1];
                int64_t *l_757 = &g_552;
                int64_t *l_760 = &l_209.f1;
                uint64_t l_761 = 0x525967E2837F0FD7LL;
                int32_t ****l_768 = (void*)0;
                int8_t l_777 = 0x17L;
                int32_t *l_791 = &g_685[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_731[i] = 0x00607A39L;
                if (p_43)
                { 
                    int64_t *l_722 = &g_603.f1;
                    const int32_t l_724 = 0x529EA2CFL;
                    const int32_t *l_736 = (void*)0;
                    const int32_t **l_735 = &l_736;
                    l_723[2][0] &= (((*l_601) , (safe_lshift_func_uint8_t_u_s(0x1DL, 0))) & ((*l_722) |= ((((((-8L) == (((safe_sub_func_uint64_t_u_u((8UL & p_45), (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(9L)), ((*g_355) , p_45))))) < l_703[1]) != l_721[0])) && (**g_527)) & p_45) == (*l_686)) == 1UL)));
                    l_729 |= (((l_724 > ((*l_650) &= (((*l_722) &= (safe_add_func_uint16_t_u_u(((((**g_171) = (18446744073709551615UL && l_724)) && (l_723[2][2] = (*g_684))) ^ p_45), ((+((void*)0 == &g_355)) <= p_44)))) , l_724))) || l_728) >= l_721[0]);
                    --l_732[2][0];
                    l_731[0] &= 0x1CCA4534L;
                    (*l_735) = &l_724;
                }
                else
                { 
                    int32_t *l_737 = &l_730;
                    int32_t l_741 = 0L;
                    int32_t l_742 = 0x3FB34E90L;
                    int32_t l_743 = 1L;
                    int32_t l_744[6][2][1] = {{{0x5EC16472L},{(-1L)}},{{0xF6364CCCL},{(-1L)}},{{0x5EC16472L},{(-8L)}},{{0x5EC16472L},{(-1L)}},{{0xF6364CCCL},{(-1L)}},{{0x5EC16472L},{(-8L)}}};
                    int i, j, k;
                    l_738 = l_737;
                    g_739 = &g_132;
                    l_745--;
                    if (g_603.f1)
                        goto lbl_748;
                }
                l_729 = p_42.f3;
            }
        }
    }
    return l_792;
}



static int32_t  func_51(struct S0  p_52, uint16_t  p_53, uint64_t  p_54)
{ 
    int64_t l_79 = 1L;
    int32_t **l_92 = (void*)0;
    int32_t ***l_91[2][4];
    int32_t l_93 = 0x638B4FD0L;
    uint32_t *l_94[5][5] = {{&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95}};
    uint32_t l_96 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_91[i][j] = &l_92;
    }
    g_98 ^= (safe_mod_func_int32_t_s_s(l_79, (g_97 |= ((safe_mod_func_uint16_t_u_u((((((g_95 = (18446744073709551615UL && (((safe_add_func_uint64_t_u_u(g_38, ((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(0x0CL, (l_79 < ((((~0UL) , l_91[0][0]) == (void*)0) <= g_4)))) < p_52.f1) < p_52.f0), p_52.f0)) | p_52.f0), l_93)) && 0UL))) ^ p_54) < p_52.f1))) , (void*)0) == &g_38) < 0x8695L) <= l_96), p_53)) , g_76.f1))));
    return p_54;
}



static struct S0  func_55(uint32_t * p_56, uint32_t * p_57, int32_t  p_58, uint16_t * p_59)
{ 
    int32_t *l_75 = &g_38;
    (*l_75) |= p_58;
    return g_76;
}



static uint32_t  func_60(uint16_t  p_61, int32_t  p_62, int32_t * p_63)
{ 
    int16_t l_68 = (-10L);
    int32_t **l_70 = (void*)0;
    int32_t ***l_69 = &l_70;
    int32_t **l_71 = (void*)0;
    int32_t ***l_72 = (void*)0;
    int32_t ***l_73 = &l_71;
    (*p_63) = (safe_add_func_int64_t_s_s(l_68, ((((*l_69) = &p_63) != ((*l_73) = l_71)) ^ 0x6E2EL)));
    return p_61;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_132.f3, "g_132.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_145[i], "g_145[i]", print_hash_value);

    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_224[i], "g_224[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_225[i][j][k], "g_225[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_346[i], "g_346[i]", print_hash_value);

    }
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_423[i], "g_423[i]", print_hash_value);

    }
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_436[i], "g_436[i]", print_hash_value);

    }
    transparent_crc(g_439, "g_439", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_501[i], "g_501[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_502[i][j], "g_502[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_553[i], "g_553[i]", print_hash_value);

    }
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_603.f0, "g_603.f0", print_hash_value);
    transparent_crc(g_603.f1, "g_603.f1", print_hash_value);
    transparent_crc(g_607.f0, "g_607.f0", print_hash_value);
    transparent_crc(g_607.f2, "g_607.f2", print_hash_value);
    transparent_crc(g_607.f3, "g_607.f3", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_685[i], "g_685[i]", print_hash_value);

    }
    transparent_crc(g_1117, "g_1117", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1339[i].f0, "g_1339[i].f0", print_hash_value);
        transparent_crc(g_1339[i].f1, "g_1339[i].f1", print_hash_value);

    }
    transparent_crc(g_1355.f0, "g_1355.f0", print_hash_value);
    transparent_crc(g_1355.f1, "g_1355.f1", print_hash_value);
    transparent_crc(g_1493.f0, "g_1493.f0", print_hash_value);
    transparent_crc(g_1493.f2, "g_1493.f2", print_hash_value);
    transparent_crc(g_1493.f3, "g_1493.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
