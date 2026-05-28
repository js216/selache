// SPDX-License-Identifier: MIT
// cctest_csmith_6a7c3967.c --- cctest case csmith_6a7c3967 (csmith seed 1786526055)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6b3291ce */
/* @exp_ticks 0x4b21 */

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

// Options:   -s 1786526055 -o /tmp/csmith_gen_z59t2chi/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
};

union U1 {
   uint8_t  f0;
   const int8_t * const  f1;
   uint8_t  f2;
};

union U2 {
   uint64_t  f0;
   const uint32_t  f1;
   int64_t  f2;
   const struct S0  f3;
   uint32_t  f4;
};

union U3 {
   int16_t  f0;
   int16_t  f1;
   const int32_t  f2;
   const int8_t * f3;
};


static int8_t g_5[2] = {0x3BL,0x3BL};
static int16_t g_57 = 0x6DB3L;
static int32_t g_59 = 0xCEBB36E9L;
static const union U1 g_61 = {250UL};
static int16_t *g_66 = &g_57;
static uint16_t g_74 = 65532UL;
static int16_t g_92 = 0x28B5L;
static union U1 g_101 = {0x56L};
static union U1 *g_100 = &g_101;
static union U1 **g_99 = &g_100;
static uint32_t g_116 = 4294967295UL;
static int32_t *g_136[1][1] = {{&g_59}};
static int32_t ** const g_135 = &g_136[0][0];
static int16_t * const *g_144 = (void*)0;
static int16_t * const **g_143 = &g_144;
static uint8_t *g_296 = &g_101.f0;
static uint8_t **g_295[2][2][5] = {{{&g_296,&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296,&g_296}},{{&g_296,&g_296,&g_296,&g_296,&g_296},{&g_296,&g_296,&g_296,&g_296,&g_296}}};
static struct S0 g_335 = {0x1051L};
static uint32_t g_379 = 0UL;
static uint8_t * const **g_397 = (void*)0;
static uint32_t g_444 = 0x2C1A5422L;
static int16_t ***g_473 = (void*)0;
static int16_t ****g_472 = &g_473;
static int16_t ****g_476 = &g_473;
static struct S0 g_498[1][5] = {{{0x5AADL},{0x5AADL},{0x5AADL},{0x5AADL},{0x5AADL}}};
static int32_t g_505 = 0x224F4A21L;
static int32_t g_534 = (-4L);
static uint64_t g_552 = 18446744073709551614UL;
static union U2 g_581 = {18446744073709551614UL};
static struct S0 *g_588 = &g_335;
static int32_t **g_634 = &g_136[0][0];
static int32_t ***g_633[3] = {&g_634,&g_634,&g_634};
static int8_t g_657 = 1L;
static uint32_t g_659 = 0xF2871015L;
static uint32_t g_699 = 0x92A62359L;
static union U3 g_721 = {1L};
static union U3 *g_814 = (void*)0;
static uint32_t g_896 = 0x280E7DDEL;
static struct S0 **g_937 = &g_588;
static int8_t g_981 = 0x39L;
static int16_t *** const *g_1003 = &g_473;
static uint32_t *g_1044 = &g_659;
static uint32_t **g_1043 = &g_1044;
static const union U2 g_1069[1] = {{18446744073709551615UL}};
static int32_t g_1101 = 0xE1A3DD5FL;
static uint8_t ***g_1124 = &g_295[1][0][2];
static int8_t g_1142 = 1L;
static int16_t g_1198[4][3] = {{0L,0L,0L},{3L,3L,3L},{0L,0L,0L},{3L,3L,3L}};
static int8_t g_1207 = 0x9EL;
static int8_t g_1210 = 0xDDL;
static uint8_t g_1219 = 2UL;
static struct S0 ***g_1261[3] = {(void*)0,(void*)0,(void*)0};
static const int16_t ** const * const *g_1271 = (void*)0;
static int16_t g_1280 = (-6L);
static const union U2 *g_1408 = (void*)0;
static const union U2 **g_1407 = &g_1408;
static uint32_t ***g_1429[1] = {(void*)0};
static const struct S0 * const **g_1490 = (void*)0;
static const struct S0 * const ***g_1489[1][7][6] = {{{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490},{&g_1490,&g_1490,&g_1490,&g_1490,&g_1490,&g_1490}}};
static const struct S0 * const ****g_1488 = &g_1489[0][6][4];
static int64_t g_1599[7] = {1L,1L,1L,1L,1L,1L,1L};
static int32_t g_1608 = (-1L);
static uint32_t g_1661[1] = {0x503D4D28L};
static uint16_t g_1684 = 7UL;
static int16_t * const ***g_1851 = &g_143;
static uint32_t g_1858 = 0xA8F1497CL;
static uint32_t * const g_1857 = &g_1858;
static uint32_t * const *g_1856[3] = {&g_1857,&g_1857,&g_1857};
static uint32_t * const **g_1855[7][6] = {{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]},{(void*)0,&g_1856[0],&g_1856[0],(void*)0,&g_1856[0],&g_1856[0]}};
static uint32_t * const ***g_1854 = &g_1855[2][4];
static uint8_t g_1907 = 252UL;
static union U1 **g_1982 = &g_100;
static uint16_t g_1988[2][7][2] = {{{0x4F99L,0xF9A1L},{0UL,0xF9A1L},{0x4F99L,0xF9A1L},{0UL,0xF9A1L},{0x4F99L,0xF9A1L},{0UL,0xF9A1L},{0x4F99L,0xF9A1L}},{{0UL,0xF9A1L},{0x4F99L,0xF9A1L},{0UL,0xF9A1L},{0x4F99L,0xF9A1L},{0UL,0xF9A1L},{0x4F99L,0xF9A1L},{0UL,0xF9A1L}}};
static uint64_t g_2003 = 18446744073709551614UL;
static uint64_t g_2142[5] = {0x95C22D9D8ABC683ELL,0x95C22D9D8ABC683ELL,0x95C22D9D8ABC683ELL,0x95C22D9D8ABC683ELL,0x95C22D9D8ABC683ELL};
static int64_t g_2166 = (-1L);



static struct S0  func_1(void);
static int8_t * func_6(uint64_t  p_7, uint32_t  p_8, uint64_t  p_9);
static int8_t  func_10(int8_t * p_11, const int8_t * p_12, int8_t * p_13, int8_t * p_14, int8_t * p_15);
static int8_t * func_17(int8_t * p_18, int32_t  p_19, uint16_t  p_20, uint8_t  p_21);
static int8_t * func_22(int8_t * p_23, uint8_t  p_24, int32_t  p_25, uint32_t  p_26, int8_t * p_27);
static uint8_t  func_28(int8_t * const  p_29);
static int8_t * func_30(int16_t  p_31);
static int32_t  func_34(int16_t  p_35, int8_t * p_36);




static struct S0  func_1(void)
{ 
    int8_t *l_4 = &g_5[0];
    int32_t l_16 = 0x27359B50L;
    int8_t *l_1241 = &g_1207;
    int8_t *l_1242 = &g_1207;
    uint32_t l_1726 = 2UL;
    int64_t l_1727 = 0xE88748347E42049DLL;
    int8_t **l_1729 = &l_1242;
    struct S0 l_1730 = {65533UL};
    uint8_t l_1743 = 0UL;
    union U3 *l_1778 = (void*)0;
    uint32_t l_1781 = 18446744073709551615UL;
    uint32_t l_1804 = 7UL;
    int32_t l_1836 = 0xD2597CC7L;
    int64_t l_1889 = 0L;
    uint8_t l_1895 = 9UL;
    int32_t l_1920 = 6L;
    int32_t l_1943 = 0x5CDE694EL;
    int32_t l_1944 = 0x74EB9E4BL;
    int32_t l_1945[3][4][7] = {{{0x8D8B5EC0L,0x84BDD4D3L,3L,0x9BEFE49DL,0x9BEFE49DL,3L,0x84BDD4D3L},{0x3067182DL,0x4F84DCFDL,0xADF02BD7L,0x4F84DCFDL,0x3067182DL,0x4F84DCFDL,0xADF02BD7L},{0x9BEFE49DL,0x9BEFE49DL,3L,0x84BDD4D3L,0x8D8B5EC0L,0x8D8B5EC0L,0x84BDD4D3L},{0L,0xA72EADD6L,0L,0x4F84DCFDL,0L,0xA72EADD6L,0L}},{{0x9BEFE49DL,0x84BDD4D3L,0x84BDD4D3L,0x9BEFE49DL,0x8D8B5EC0L,3L,3L},{0x3067182DL,0xA72EADD6L,0xADF02BD7L,0xA72EADD6L,0x3067182DL,0xA72EADD6L,0xADF02BD7L},{0x8D8B5EC0L,0x9BEFE49DL,0x84BDD4D3L,0x84BDD4D3L,0x9BEFE49DL,0x8D8B5EC0L,3L},{0L,0x4F84DCFDL,0L,0xA72EADD6L,0L,0x4F84DCFDL,0L}},{{0x8D8B5EC0L,0x84BDD4D3L,3L,0x9BEFE49DL,0x9BEFE49DL,3L,0x84BDD4D3L},{0x3067182DL,0x4F84DCFDL,0xADF02BD7L,0x4F84DCFDL,0x3067182DL,0x4F84DCFDL,0xADF02BD7L},{0x9BEFE49DL,0x9BEFE49DL,3L,0x84BDD4D3L,0x8D8B5EC0L,0x8D8B5EC0L,0x84BDD4D3L},{0L,0xA72EADD6L,0L,0x4F84DCFDL,0L,0xA72EADD6L,0L}}};
    int32_t l_1946 = (-1L);
    union U2 l_1968 = {0UL};
    union U1 **l_1983 = &g_100;
    const int32_t l_2026 = (-1L);
    int16_t l_2035 = 0x79BBL;
    uint32_t * const *l_2069 = (void*)0;
    uint8_t l_2105[2];
    int32_t l_2116[6] = {0x25E85E3DL,0x25E85E3DL,0x25E85E3DL,0x25E85E3DL,0x25E85E3DL,0x25E85E3DL};
    int32_t *l_2117 = &g_59;
    uint32_t l_2184 = 4294967295UL;
    union U1 l_2194[1][7][2] = {{{{0xC5L},{0x1EL}},{{255UL},{255UL}},{{0x1EL},{0xC5L}},{{0xF4L},{0xC5L}},{{0x1EL},{255UL}},{{255UL},{0x1EL}},{{0xC5L},{0xF4L}}}};
    int8_t l_2196 = 2L;
    const uint8_t *l_2198 = (void*)0;
    const uint8_t **l_2197 = &l_2198;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2105[i] = 0UL;
    return (*g_588);
}



static int8_t * func_6(uint64_t  p_7, uint32_t  p_8, uint64_t  p_9)
{ 
    int8_t *l_1728[4] = {&g_5[0],&g_5[0],&g_5[0],&g_5[0]};
    int i;
    return l_1728[1];
}



static int8_t  func_10(int8_t * p_11, const int8_t * p_12, int8_t * p_13, int8_t * p_14, int8_t * p_15)
{ 
    union U1 *l_1251 = &g_101;
    struct S0 ***l_1260 = &g_937;
    int32_t l_1262 = 0x2B99D401L;
    int32_t l_1266 = 2L;
    int32_t l_1287 = 0x82BA10EEL;
    uint32_t l_1300 = 1UL;
    int32_t l_1319[1];
    uint8_t ****l_1342 = (void*)0;
    uint32_t l_1346 = 4294967295UL;
    struct S0 l_1356[7] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    uint16_t l_1357 = 0xE09EL;
    uint32_t ***l_1428 = &g_1043;
    struct S0 l_1470 = {0x47D5L};
    uint16_t l_1494 = 1UL;
    int64_t l_1521 = (-9L);
    int32_t *l_1565 = (void*)0;
    int32_t *l_1566 = &g_59;
    int32_t *l_1567 = &l_1287;
    int32_t *l_1568 = &g_59;
    int32_t *l_1569 = &l_1319[0];
    int32_t *l_1570[3][3][3];
    uint64_t l_1571 = 0UL;
    int16_t l_1607 = (-1L);
    int32_t l_1644 = 0x10825A9CL;
    int8_t l_1723 = 0xA5L;
    union U2 *l_1725[1][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1319[i] = (-1L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1570[i][j][k] = &g_534;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1725[i][j] = &g_581;
    }
lbl_1613:
    for (g_57 = 0; (g_57 <= 1); g_57 += 1)
    { 
        int32_t l_1246 = 6L;
        int32_t l_1247[5];
        uint8_t *l_1248 = &g_1219;
        struct S0 ***l_1259[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S0 ****l_1258 = &l_1259[0][6];
        int16_t * const l_1279 = &g_1280;
        int16_t * const *l_1278[6][7] = {{&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279},{&l_1279,&l_1279,&l_1279,&l_1279,(void*)0,&l_1279,&l_1279},{&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279},{&l_1279,&l_1279,(void*)0,&l_1279,&l_1279,&l_1279,&l_1279},{&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279,&l_1279},{&l_1279,&l_1279,(void*)0,&l_1279,&l_1279,&l_1279,&l_1279}};
        int16_t * const *l_1281 = &l_1279;
        int16_t * const *l_1282[7];
        int16_t * const *l_1283 = &l_1279;
        int16_t * const *l_1284 = (void*)0;
        int16_t * const ** const l_1277[6][7] = {{&l_1282[5],&l_1278[3][1],&l_1284,&l_1284,&l_1278[3][1],&l_1282[5],&l_1278[3][1]},{&l_1283,&l_1282[5],&l_1282[5],&l_1283,&l_1278[3][1],&l_1283,&l_1282[5]},{&l_1281,&l_1281,&l_1282[5],&l_1284,&l_1282[5],&l_1281,&l_1281},{&l_1281,&l_1282[5],&l_1284,&l_1282[5],&l_1281,&l_1281,&l_1282[5]},{&l_1283,&l_1278[3][1],&l_1283,&l_1282[5],&l_1282[5],&l_1283,&l_1278[3][1]},{&l_1282[5],&l_1278[3][1],&l_1284,&l_1284,&l_1278[3][1],&l_1282[5],&l_1278[3][1]}};
        int16_t * const ** const *l_1276 = &l_1277[5][5];
        uint32_t l_1291 = 0UL;
        union U1 l_1309[3] = {{246UL},{246UL},{246UL}};
        const union U1 l_1339 = {0x65L};
        union U1 **l_1351 = &g_100;
        uint8_t l_1410[5] = {0UL,0UL,0UL,0UL,0UL};
        union U2 l_1462 = {18446744073709551609UL};
        uint8_t l_1487 = 0xDBL;
        int32_t l_1559[7];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1247[i] = (-5L);
        for (i = 0; i < 7; i++)
            l_1282[i] = &l_1279;
        for (i = 0; i < 7; i++)
            l_1559[i] = 0L;
        if ((!(safe_lshift_func_int16_t_s_s((l_1246 | 1UL), ((((*l_1248)++) != ((((void*)0 == l_1251) & (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_1247[2], (((*l_1258) = &g_937) == (g_1261[2] = l_1260)))), 0x857C5FE2L)), l_1262))) != l_1247[2])) , l_1247[2])))))
        { 
            uint32_t l_1267 = 0xD26A932CL;
            const int16_t ** const * const **l_1272 = &g_1271;
            int16_t * const ** const *l_1273 = (void*)0;
            int16_t * const ** const **l_1274 = (void*)0;
            int16_t * const ** const **l_1275[7][4][4] = {{{&l_1273,(void*)0,(void*)0,&l_1273},{&l_1273,&l_1273,&l_1273,(void*)0},{(void*)0,&l_1273,&l_1273,&l_1273},{&l_1273,&l_1273,&l_1273,(void*)0}},{{(void*)0,&l_1273,&l_1273,&l_1273},{&l_1273,(void*)0,(void*)0,&l_1273},{&l_1273,(void*)0,&l_1273,&l_1273},{(void*)0,&l_1273,&l_1273,(void*)0}},{{&l_1273,&l_1273,&l_1273,&l_1273},{&l_1273,&l_1273,&l_1273,&l_1273},{&l_1273,&l_1273,(void*)0,(void*)0},{&l_1273,&l_1273,&l_1273,&l_1273}},{{&l_1273,(void*)0,(void*)0,(void*)0},{&l_1273,&l_1273,&l_1273,&l_1273},{(void*)0,&l_1273,&l_1273,(void*)0},{&l_1273,&l_1273,&l_1273,&l_1273}},{{(void*)0,(void*)0,(void*)0,&l_1273},{&l_1273,&l_1273,&l_1273,&l_1273},{(void*)0,(void*)0,&l_1273,&l_1273},{&l_1273,&l_1273,&l_1273,(void*)0}},{{&l_1273,&l_1273,&l_1273,&l_1273},{&l_1273,&l_1273,(void*)0,(void*)0},{&l_1273,(void*)0,(void*)0,&l_1273},{&l_1273,&l_1273,(void*)0,(void*)0}},{{&l_1273,&l_1273,(void*)0,&l_1273},{&l_1273,&l_1273,&l_1273,&l_1273},{&l_1273,&l_1273,&l_1273,&l_1273},{&l_1273,(void*)0,&l_1273,&l_1273}}};
            uint16_t *l_1288 = &g_498[0][1].f0;
            struct S0 ** const l_1289 = (void*)0;
            struct S0 **l_1290 = &g_588;
            int32_t l_1295 = 0xF7978507L;
            int32_t l_1296[3];
            struct S0 ****l_1307 = &g_1261[0];
            uint32_t l_1320[3][2] = {{0UL,0UL},{18446744073709551615UL,0UL},{0UL,18446744073709551615UL}};
            uint8_t * const *l_1345 = &l_1248;
            uint8_t * const * const *l_1344 = &l_1345;
            uint8_t * const * const **l_1343 = &l_1344;
            int32_t *l_1347 = (void*)0;
            int32_t *l_1348 = &l_1319[0];
            uint32_t l_1358[5][5][5] = {{{1UL,1UL,0x74AB8F5DL,0xFBA86031L,4294967295UL},{2UL,0x78F88BE6L,0x93596110L,0x136BA5ACL,1UL},{0xFCEB3A80L,0x65A62AF7L,1UL,8UL,0x38019903L},{0x5244DD6EL,0x78F88BE6L,4294967294UL,4294967294UL,0x78F88BE6L},{0x654AB282L,1UL,1UL,0UL,1UL}},{{5UL,4294967286UL,0x91CCCEE6L,0x5244DD6EL,0x136BA5ACL},{0xFBA86031L,0x82C2089AL,0x38019903L,0x65A62AF7L,2UL},{5UL,0x78AA4DC0L,2UL,0x78AA4DC0L,5UL},{0x654AB282L,0xF37DFD1AL,2UL,0x38019903L,1UL},{0x5244DD6EL,1UL,0UL,0UL,0UL}},{{0xFCEB3A80L,0x71E83439L,0x5FF3D90DL,0xF37DFD1AL,1UL},{2UL,0UL,0UL,2UL,5UL},{1UL,1UL,0UL,1UL,2UL},{0x478DC330L,5UL,0x54E01E2DL,8UL,0x136BA5ACL},{0UL,0x74AB8F5DL,0x82C2089AL,1UL,1UL}},{{1UL,0x478DC330L,1UL,2UL,0x78F88BE6L},{0x74AB8F5DL,0xFBA86031L,4294967295UL,0xF37DFD1AL,0x38019903L},{4294967294UL,0x93596110L,5UL,0UL,1UL},{0xF37DFD1AL,1UL,4294967295UL,0x38019903L,4294967295UL},{0x54E01E2DL,0x54E01E2DL,1UL,0x78AA4DC0L,8UL}},{{2UL,0x71FFEBD6L,0x82C2089AL,0x65A62AF7L,0x654AB282L},{0UL,0x136BA5ACL,0x54E01E2DL,0x5244DD6EL,0UL},{0x38019903L,0x65A62AF7L,2UL,2UL,0x65A62AF7L},{4294967286UL,0UL,0x54E01E2DL,2UL,8UL},{0xFBA86031L,4294967295UL,0xF37DFD1AL,0x38019903L,0x5FF3D90DL}}};
            int16_t l_1384[6];
            const union U2 **l_1405 = (void*)0;
            uint16_t l_1421 = 0x87E3L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1296[i] = (-1L);
            for (i = 0; i < 6; i++)
                l_1384[i] = 2L;
            for (g_1142 = 0; (g_1142 >= 0); g_1142 -= 1)
            { 
                int32_t l_1263[4][4][6] = {{{(-3L),0xD953D285L,(-1L),4L,(-1L),(-2L)},{0xF887AAF8L,0x251493EFL,1L,(-1L),0xB7B86788L,(-5L)},{7L,(-5L),(-8L),(-8L),(-5L),7L},{0x2C72E3B1L,0L,0x251493EFL,4L,0xFEBCCE55L,0xF1036E80L}},{{0xA0D5CA09L,(-5L),(-1L),0L,3L,0x048350FBL},{0xA0D5CA09L,(-1L),0L,4L,9L,(-5L)},{0x2C72E3B1L,0xFEBCCE55L,0x1F973B16L,(-8L),0x9F7E6D46L,4L},{7L,0xF887AAF8L,0x79671E61L,(-1L),0x048350FBL,0x2674E0C9L}},{{0xF887AAF8L,(-1L),0x2C72E3B1L,4L,(-1L),9L},{(-3L),0x5EEBCF79L,(-1L),0x5EEBCF79L,(-3L),0x1F973B16L},{4L,0xDDB366F2L,0xFEBCCE55L,(-5L),4L,0x251493EFL},{(-1L),9L,0L,0xDDB366F2L,0xF1036E80L,0x251493EFL}},{{0xB7B86788L,0x79671E61L,0xFEBCCE55L,1L,(-1L),0x1F973B16L},{0xF1036E80L,0x9F7E6D46L,(-1L),0x2674E0C9L,0x79671E61L,9L},{(-1L),4L,0x2C72E3B1L,7L,(-1L),0x2674E0C9L},{0x2674E0C9L,0L,0x79671E61L,0x450C00F0L,4L,4L}}};
                int32_t *l_1264 = &g_1101;
                int32_t *l_1265[6][1];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1265[i][j] = (void*)0;
                }
                --l_1267;
            }
            if ((~((((*l_1272) = g_1271) == (l_1276 = l_1273)) != ((safe_mul_func_int16_t_s_s(0x4264L, l_1287)) >= (((((*l_1288) |= 0xB954L) >= ((l_1289 == (l_1290 = l_1290)) == l_1247[2])) || l_1262) || l_1291)))))
            { 
                int64_t l_1293 = 0x5788E4F10958BBF4LL;
                int32_t l_1297 = (-9L);
                int32_t l_1298 = 8L;
                int32_t l_1299 = 0x0DA1BA9AL;
                for (g_116 = 0; (g_116 <= 0); g_116 += 1)
                { 
                    int32_t l_1292 = 0x3B4BFCCEL;
                    int32_t *l_1294[7] = {&l_1292,&l_1292,&l_1292,&l_1292,&l_1292,&l_1292,&l_1292};
                    int i;
                    --l_1300;
                    (*g_634) = &l_1295;
                    (*g_135) = &l_1266;
                }
            }
            else
            { 
                int32_t l_1303[2];
                int16_t * const l_1324 = &g_1198[1][1];
                int32_t *l_1325 = &l_1319[0];
                int i;
                for (i = 0; i < 2; i++)
                    l_1303[i] = 0x0FF3A3D4L;
                for (l_1295 = 0; (l_1295 <= 2); l_1295 += 1)
                { 
                    int32_t *l_1304 = &g_505;
                    struct S0 *****l_1308 = &l_1258;
                    int32_t *l_1314 = &g_1101;
                    int32_t *l_1315 = &g_505;
                    int32_t *l_1316 = &g_505;
                    int32_t *l_1317 = &l_1247[2];
                    int32_t *l_1318[6][6][4] = {{{&l_1262,&l_1266,&l_1296[0],(void*)0},{(void*)0,&l_1295,&l_1295,&l_1266},{&l_1296[0],&l_1295,&l_1295,&l_1296[0]},{(void*)0,&l_1303[1],&l_1296[0],&l_1247[2]},{&l_1262,&l_1287,&l_1247[2],(void*)0},{&l_1247[2],(void*)0,(void*)0,(void*)0}},{{&l_1295,&l_1287,&l_1295,&l_1247[2]},{&l_1287,&l_1303[1],(void*)0,&l_1296[0]},{&l_1295,&l_1295,&l_1266,&l_1266},{&l_1295,&l_1295,(void*)0,(void*)0},{&l_1287,&l_1266,&l_1295,&l_1303[1]},{&l_1295,&l_1262,(void*)0,&l_1295}},{{&l_1247[2],&l_1262,&l_1247[2],&l_1303[1]},{&l_1262,&l_1266,&l_1296[0],(void*)0},{(void*)0,&l_1295,&l_1295,&l_1266},{&l_1296[0],&l_1295,&l_1295,&l_1296[0]},{(void*)0,&l_1303[1],&l_1296[0],&l_1247[2]},{&l_1262,&l_1287,&l_1247[2],(void*)0}},{{&l_1247[2],&l_1262,&l_1287,&l_1262},{&l_1296[0],&l_1296[0],(void*)0,&l_1266},{&l_1247[2],&l_1287,&l_1262,&l_1295},{(void*)0,&l_1296[0],&l_1295,&l_1295},{(void*)0,(void*)0,&l_1262,&l_1303[1]},{&l_1247[2],&l_1295,(void*)0,&l_1287}},{{&l_1296[0],(void*)0,&l_1287,(void*)0},{&l_1266,(void*)0,&l_1266,&l_1287},{(void*)0,&l_1295,(void*)0,&l_1303[1]},{&l_1303[1],(void*)0,&l_1296[0],&l_1295},{&l_1295,&l_1296[0],&l_1296[0],&l_1295},{&l_1303[1],&l_1287,(void*)0,&l_1266}},{{(void*)0,&l_1296[0],&l_1266,&l_1262},{&l_1266,&l_1262,&l_1287,&l_1262},{&l_1296[0],&l_1296[0],(void*)0,&l_1266},{&l_1247[2],&l_1287,&l_1262,&l_1295},{(void*)0,&l_1296[0],&l_1295,&l_1295},{(void*)0,(void*)0,&l_1262,&l_1303[1]}}};
                    int i, j, k;
                    (*l_1304) &= (l_1303[1] &= l_1296[l_1295]);
                    l_1296[0] &= (safe_rshift_func_uint8_t_u_u(((((*l_1308) = l_1307) == ((*l_1251) , (void*)0)) , (l_1309[1] , (safe_mod_func_uint8_t_u_u(0x34L, (safe_add_func_uint16_t_u_u(l_1303[1], g_657)))))), 6));
                    (*l_1304) = 0xF842C01FL;
                    ++l_1320[1][0];
                    l_1296[0] |= l_1287;
                }
                (*l_1325) &= (+(l_1324 == l_1324));
            }
            (*l_1348) = (!((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(0L, ((((safe_rshift_func_uint16_t_u_s((l_1319[0] && (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*p_15) == l_1262), (l_1339 , (*p_12)))), ((((((safe_div_func_int64_t_s_s(((((l_1339.f2 >= l_1296[0]) >= 0x12CEL) || l_1295) | l_1287), l_1287)) | l_1266) <= 0x7A8E0A9CL) , l_1342) != l_1343) ^ l_1319[0])))), l_1339.f0)) || l_1291) && (-1L)) , l_1346))), l_1300)) ^ 1UL), (*p_14))) | l_1247[2]));
            if (((*l_1348) = (safe_sub_func_uint8_t_u_u((((void*)0 != l_1351) || (safe_sub_func_uint32_t_u_u(1UL, (safe_mod_func_uint8_t_u_u(((l_1356[0] = l_1356[2]) , (((((-3L) & 0x8DD9A59EBD9A09C6LL) & l_1309[1].f0) <= l_1319[0]) || l_1357)), 3UL))))), l_1358[0][0][4]))))
            { 
                int32_t l_1359 = 0x22BAEBF4L;
                int32_t *l_1360 = &l_1319[0];
                int32_t *l_1361 = &l_1319[0];
                int32_t *l_1362 = &g_505;
                int32_t *l_1363 = &l_1295;
                int32_t *l_1364 = &l_1319[0];
                int32_t *l_1365 = &l_1262;
                int32_t *l_1366 = &l_1287;
                int32_t *l_1367 = &l_1247[2];
                int32_t *l_1368 = &l_1359;
                int32_t *l_1369 = &l_1296[2];
                int32_t *l_1370 = &l_1262;
                int32_t *l_1371 = &l_1296[1];
                int32_t l_1372 = (-7L);
                int32_t *l_1373 = (void*)0;
                int32_t *l_1374 = &g_534;
                int32_t *l_1375 = &l_1296[0];
                int32_t *l_1376 = &l_1295;
                int32_t *l_1377 = &l_1296[0];
                int32_t *l_1378 = &l_1319[0];
                int32_t *l_1379 = &g_505;
                int32_t *l_1380 = &g_505;
                int32_t *l_1381 = &l_1246;
                int32_t *l_1382 = &l_1262;
                int32_t *l_1383[4];
                uint16_t l_1385 = 0x952EL;
                struct S0 l_1388 = {0UL};
                int i;
                for (i = 0; i < 4; i++)
                    l_1383[i] = &l_1247[4];
                l_1385++;
                for (g_896 = 0; (g_896 <= 1); g_896 += 1)
                { 
                    const union U2 ***l_1406[3][3] = {{&l_1405,&l_1405,(void*)0},{&l_1405,&l_1405,(void*)0},{&l_1405,&l_1405,(void*)0}};
                    int32_t l_1409 = 8L;
                    int i, j;
                    (*g_634) = &l_1247[2];
                    l_1388 = l_1388;
                    (**l_1260) = &l_1388;
                    (*g_135) = &l_1247[2];
                    l_1246 = (safe_mod_func_uint64_t_u_u((((g_5[g_896] = ((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((+18446744073709551615UL), (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((g_92 >= ((*l_1360) = (l_1247[1] , ((((***g_1124) = (*l_1381)) < (((*l_1365) = 0x8372FDCFL) == ((+(((g_1407 = l_1405) != &g_1408) | (-10L))) == l_1409))) > g_1207)))) ^ l_1409), (*g_1044))), 1)))) , (-1L)), l_1409)), l_1346)), 18446744073709551615UL)) & (*g_1044))) | l_1409) & l_1409), (-1L)));
                }
                if (l_1410[1])
                    break;
                if (l_1319[0])
                    break;
                (*l_1369) = l_1410[1];
            }
            else
            { 
                int32_t *l_1411 = &l_1247[2];
                int32_t l_1417 = 8L;
                int32_t l_1418 = (-2L);
                int32_t l_1419 = 4L;
                int32_t l_1420 = 0x3B39767FL;
                int8_t *l_1433 = &g_1142;
                int8_t *l_1437 = &g_5[0];
                struct S0 *l_1449[7];
                struct S0 *l_1450 = &l_1356[6];
                struct S0 *l_1451 = &l_1356[2];
                int32_t * const l_1459[4][2][3] = {{{&l_1247[2],&l_1247[2],&l_1247[2]},{&l_1287,&l_1287,&l_1287}},{{&l_1247[2],&l_1247[2],&l_1247[2]},{&l_1287,&l_1287,&l_1287}},{{&l_1247[2],&l_1247[2],&l_1247[2]},{&l_1287,&l_1287,&l_1287}},{{&l_1247[2],&l_1247[2],&l_1247[2]},{&l_1287,&l_1287,&l_1287}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1449[i] = (void*)0;
                if ((2L >= 0x2D61C1E504C8D935LL))
                { 
                    (*g_135) = l_1411;
                    if ((*l_1348))
                        break;
                }
                else
                { 
                    const int32_t *l_1412 = (void*)0;
                    const int32_t **l_1413 = (void*)0;
                    const int32_t **l_1414 = &l_1412;
                    (*l_1414) = l_1412;
                }
                for (l_1266 = 1; (l_1266 >= 0); l_1266 -= 1)
                { 
                    const struct S0 l_1415 = {0x4D19L};
                    int32_t *l_1416[4][3][4] = {{{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]}},{{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]}},{{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]}},{{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]},{&g_59,&l_1247[0],&g_59,&l_1247[0]}}};
                    int i, j, k;
                    l_1356[(l_1266 + 4)] = l_1415;
                    l_1421++;
                }
                for (g_59 = 25; (g_59 < (-18)); g_59 = safe_sub_func_uint64_t_u_u(g_59, 1))
                { 
                    uint32_t ***l_1427 = (void*)0;
                    uint32_t ****l_1426[6][4] = {{(void*)0,&l_1427,&l_1427,&l_1427},{&l_1427,&l_1427,&l_1427,&l_1427},{(void*)0,(void*)0,&l_1427,&l_1427},{&l_1427,&l_1427,&l_1427,&l_1427},{&l_1427,&l_1427,&l_1427,&l_1427},{(void*)0,&l_1427,&l_1427,&l_1427}};
                    int32_t l_1432 = 0x35BEA4A9L;
                    int8_t **l_1434 = &l_1433;
                    int8_t *l_1436 = &g_5[0];
                    int8_t **l_1435[4];
                    int64_t *l_1438 = &g_581.f2;
                    struct S0 l_1443 = {0UL};
                    uint64_t *l_1454[5];
                    int32_t **l_1460 = &g_136[0][0];
                    uint32_t l_1461[4][7][3] = {{{4294967287UL,0x390F43E5L,0UL},{1UL,6UL,0x390F43E5L},{1UL,0xB23EB01FL,0x4B296284L},{4294967287UL,8UL,4294967287UL},{0x4B296284L,0xB23EB01FL,1UL},{8UL,0UL,4294967287UL},{1UL,8UL,0xB23EB01FL}},{{1UL,1UL,0x0714DDA9L},{1UL,0x0714DDA9L,8UL},{8UL,0x0714DDA9L,1UL},{0x0714DDA9L,1UL,1UL},{0xB23EB01FL,8UL,1UL},{4294967287UL,0UL,8UL},{4294967287UL,0x4B296284L,0x0714DDA9L}},{{0xB23EB01FL,0x9A5FFF77L,0xB23EB01FL},{0x0714DDA9L,0x4B296284L,4294967287UL},{8UL,0UL,4294967287UL},{1UL,8UL,0xB23EB01FL},{1UL,1UL,0x0714DDA9L},{1UL,0x0714DDA9L,8UL},{8UL,0x0714DDA9L,1UL}},{{0x0714DDA9L,1UL,1UL},{0xB23EB01FL,8UL,1UL},{4294967287UL,0UL,8UL},{4294967287UL,0x4B296284L,0x0714DDA9L},{0xB23EB01FL,0x9A5FFF77L,0xB23EB01FL},{0x0714DDA9L,0x4B296284L,4294967287UL},{8UL,0UL,4294967287UL}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1435[i] = &l_1436;
                    for (i = 0; i < 5; i++)
                        l_1454[i] = &g_552;
                    (*l_1348) = (((l_1428 = &g_1043) != (g_1429[0] = &g_1043)) > ((safe_div_func_int16_t_s_s(l_1319[0], l_1432)) > l_1266));
                    if (l_1319[0])
                        break;
                    (*l_1348) = ((l_1319[0] | (((*l_1438) = ((l_1437 = ((*l_1434) = l_1433)) == (p_11 = &g_1142))) , (safe_div_func_uint16_t_u_u(((*l_1288)++), (l_1443 , (0xA7A41C0DA520E42DLL || (safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((-9L), (safe_unary_minus_func_int32_t_s(((l_1451 = (l_1450 = (l_1449[6] = &l_1443))) == (void*)0))))) | 0xAD3ED9DFL), 3)))))))) , l_1443.f0);
                    (*l_1460) = ((safe_sub_func_int16_t_s_s(((-10L) > (g_581.f0 = g_61.f2)), (((*l_1248) ^= (((**g_1043) &= l_1432) < (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*p_15), (*l_1411))), 1L)))) && (*p_14)))) , l_1459[2][0][2]);
                    if (l_1461[2][5][2])
                        break;
                }
            }
            (*l_1290) = &l_1356[6];
        }
        else
        { 
            union U3 l_1463 = {0x942FL};
            uint16_t *l_1468 = &g_335.f0;
            int32_t *l_1469 = &l_1247[2];
            (*l_1469) ^= (((-1L) || ((l_1462 , 0x80L) <= l_1462.f1)) != (l_1463 , ((0UL == (safe_mul_func_uint16_t_u_u(((*l_1468) = ((((((safe_mod_func_int64_t_s_s(l_1463.f0, 0x0C49E89799F4CA7FLL)) , l_1262) < l_1266) >= g_1198[1][1]) , l_1463.f0) , g_1069[0].f0)), g_5[1]))) && l_1291)));
        }
        for (g_1280 = 0; (g_1280 >= 0); g_1280 -= 1)
        { 
            struct S0 l_1471 = {0x7324L};
            int32_t l_1483 = 0xD48A88EDL;
            int32_t l_1486 = 0x3AA2458EL;
            uint16_t l_1499 = 65527UL;
            union U1 l_1512[7][4][3] = {{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}},{{{0x6CL},{8UL},{0xDEL}},{{1UL},{255UL},{255UL}},{{0xA0L},{8UL},{1UL}},{{1UL},{1UL},{255UL}}}};
            uint8_t **l_1513 = &g_296;
            int32_t l_1534 = 0x9B7713F5L;
            int32_t l_1547 = 0x395F7823L;
            int32_t l_1549 = 0xFA4515B8L;
            int32_t l_1550 = 1L;
            int32_t l_1551 = 0x0437D36FL;
            int32_t l_1553[5] = {0xF9A0288CL,0xF9A0288CL,0xF9A0288CL,0xF9A0288CL,0xF9A0288CL};
            int i, j, k;
            l_1471 = l_1470;
            for (g_74 = 0; (g_74 <= 4); g_74 += 1)
            { 
                int64_t l_1472 = 0xAACA20D0D0034040LL;
                struct S0 l_1491 = {0xCE22L};
                int32_t l_1493 = (-10L);
                int32_t l_1497 = 0x7245F684L;
                int32_t l_1498[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
                uint64_t l_1502[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1502[i][j] = 18446744073709551615UL;
                }
                for (g_1219 = 0; (g_1219 <= 0); g_1219 += 1)
                { 
                    int i;
                    return l_1410[(g_57 + 1)];
                }
                if ((l_1472 == l_1471.f0))
                { 
                    uint16_t *l_1477 = (void*)0;
                    uint16_t *l_1478 = &g_498[0][1].f0;
                    int32_t l_1484 = 0x83DF5232L;
                    uint16_t *l_1485 = &l_1470.f0;
                    int32_t *l_1492[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1492[i] = &l_1484;
                    l_1484 = (((l_1487 = (l_1319[g_1280] ^= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_s(g_92, (l_1486 |= (0x4AL >= (!((*l_1485) |= (1L < (((*l_1478)--) == ((0UL == (safe_rshift_func_uint8_t_u_s(0x10L, (l_1472 || (l_1483 ^= (g_5[1] > l_1287)))))) > l_1484))))))))))))) , g_1488) == &g_1489[0][6][4]);
                    l_1471 = l_1491;
                    ++l_1494;
                    l_1499--;
                    if (l_1499)
                        continue;
                }
                else
                { 
                    uint64_t l_1503[2][4] = {{0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL},{0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL,0xF9F69637BFF8A67ELL}};
                    int i, j;
                    l_1486 ^= 1L;
                    if (l_1502[1][2])
                        break;
                    if (l_1503[0][0])
                        break;
                    return (*p_13);
                }
                return l_1262;
            }
            for (g_1207 = 0; (g_1207 <= 0); g_1207 += 1)
            { 
                int32_t *l_1506 = (void*)0;
                int32_t *l_1507 = &g_534;
                uint8_t **l_1515 = &g_296;
                struct S0 l_1535 = {9UL};
                int32_t l_1541 = 0xA33AA22EL;
                int32_t l_1542 = 0xC52DF964L;
                int32_t l_1543 = (-1L);
                int32_t l_1544 = 0x94B9B00DL;
                int32_t l_1545 = (-8L);
                int32_t l_1546 = 0xEEC3F0AFL;
                int32_t l_1548 = 0x35F8BAD7L;
                int32_t l_1552 = 0xBAC8657CL;
                int32_t l_1554 = 1L;
                int32_t l_1555 = 0xD0EC2543L;
                int32_t l_1556 = 1L;
                int32_t l_1557 = 0xAAB05E28L;
                int32_t l_1558[1];
                union U2 *l_1564 = &l_1462;
                union U2 **l_1563 = &l_1564;
                int i;
                for (i = 0; i < 1; i++)
                    l_1558[i] = 0L;
                (*l_1507) ^= ((safe_add_func_uint64_t_u_u(0x8F2691E5A76A8482LL, l_1462.f2)) , l_1287);
                for (l_1462.f2 = 0; (l_1462.f2 <= 0); l_1462.f2 += 1)
                { 
                    uint8_t ***l_1516 = &l_1515;
                    int64_t *l_1517 = &g_581.f2;
                    uint32_t l_1518 = 18446744073709551615UL;
                    int32_t *l_1519 = (void*)0;
                    int32_t *l_1520 = &g_505;
                    int i;
                    (*l_1520) ^= ((l_1246 = (safe_mod_func_uint16_t_u_u(((0x1AL ^ (safe_add_func_int32_t_s_s(((l_1512[4][0][0] , (g_444 != (((*l_1517) = ((l_1513 = ((*g_1124) = l_1513)) != ((*l_1516) = ((+((l_1266 & g_57) , (l_1356[(l_1462.f2 + 6)] , l_1487))) , l_1515)))) || l_1319[0]))) , l_1518), l_1499))) , g_1069[0].f4), 9UL))) , (*l_1507));
                }
                for (l_1346 = 0; (l_1346 <= 0); l_1346 += 1)
                { 
                    int16_t l_1522 = 0x63FFL;
                    uint64_t *l_1532 = (void*)0;
                    uint64_t *l_1533 = &g_581.f0;
                    struct S0 l_1536 = {0x305AL};
                    int32_t *l_1537 = &l_1319[0];
                    int32_t *l_1538 = &l_1247[2];
                    int32_t *l_1539 = (void*)0;
                    int32_t *l_1540[2];
                    uint16_t l_1560 = 65528UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1540[i] = &g_534;
                    l_1536 = (((g_1280 || ((l_1512[0][0][0] , (l_1521 <= l_1483)) && ((l_1522 | (++(**g_1043))) , 0x04D3L))) & (l_1534 = (safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((l_1486 = ((*l_1533) = (safe_add_func_int8_t_s_s((*l_1507), (-1L))))))), 0x3CL)) || (*l_1507)), (*l_1507))))) , l_1535);
                    l_1560++;
                    (*g_634) = l_1540[0];
                }
                (*l_1563) = &l_1462;
            }
        }
        return l_1319[0];
    }
    --l_1571;
lbl_1724:
    for (g_1142 = 0; (g_1142 <= 2); g_1142 += 1)
    { 
        uint64_t l_1587 = 18446744073709551615UL;
        int16_t l_1600[4][5][1] = {{{0x8E0CL},{1L},{1L},{0x8E0CL},{(-1L)}},{{0x8E0CL},{1L},{1L},{0x8E0CL},{(-1L)}},{{0x8E0CL},{1L},{1L},{0x8E0CL},{(-1L)}},{{0x8E0CL},{1L},{1L},{0x8E0CL},{1L}}};
        int32_t * const l_1601 = &l_1266;
        uint8_t *** const l_1603 = (void*)0;
        int32_t l_1604 = (-7L);
        int32_t l_1605 = 0L;
        int32_t l_1606[7][6][1] = {{{0xC77DE083L},{0xA29F4B0EL},{0x8E8A09E7L},{0x30CE82D7L},{0xDA21CE86L},{0xDA21CE86L}},{{0x30CE82D7L},{0x8E8A09E7L},{0xA29F4B0EL},{0xC77DE083L},{0x069436C6L},{0x7C08F2EAL}},{{1L},{1L},{1L},{0x7C08F2EAL},{0x069436C6L},{0xC77DE083L}},{{0xA29F4B0EL},{0x8E8A09E7L},{0x30CE82D7L},{0xDA21CE86L},{0xDA21CE86L},{0x30CE82D7L}},{{0x8E8A09E7L},{0xA29F4B0EL},{0xC77DE083L},{0x069436C6L},{0x7C08F2EAL},{1L}},{{1L},{1L},{0x7C08F2EAL},{0x069436C6L},{0xC77DE083L},{0xA29F4B0EL}},{{0x8E8A09E7L},{0x30CE82D7L},{0xDA21CE86L},{0xDA21CE86L},{0x30CE82D7L},{0x8E8A09E7L}}};
        int32_t l_1609 = 0xD2FC727CL;
        uint32_t l_1610 = 8UL;
        int i, j, k;
        for (g_1210 = 0; (g_1210 <= 2); g_1210 += 1)
        { 
            int32_t ****l_1574 = (void*)0;
            int32_t ****l_1575 = &g_633[0];
            uint16_t l_1580[2];
            uint64_t l_1588 = 0x274CC1C5BE4D1482LL;
            int32_t **l_1602 = &l_1565;
            int i;
            for (i = 0; i < 2; i++)
                l_1580[i] = 65535UL;
            (*l_1568) = ((*l_1567) = (((((*l_1575) = &g_634) == (void*)0) & (((safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(0xD727D956L, l_1580[0])) >= (safe_div_func_int64_t_s_s(0L, (safe_lshift_func_int8_t_s_s((*p_15), 1))))), (((safe_add_func_uint64_t_u_u((((0xC70BFA6F4C84233CLL < l_1587) < 0x6CL) | l_1588), 0x0357987FED8D68E6LL)) <= l_1587) >= (-4L)))) != 0xDDF6F0E98DE617FCLL) & (*l_1567))) , 0L));
            (*l_1569) = (((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_1587 > ((safe_sub_func_int16_t_s_s((0L && 1UL), ((((((*l_1569) < 0x175B9701B644C22CLL) , 8L) < 0xE2L) < (*p_12)) < 0x0EL))) ^ l_1588)) < 0UL), g_1599[1])), (-1L))) == l_1587), (*p_13))) , l_1600[1][4][0]), l_1600[1][3][0])) != 0xFDL) < (*l_1569));
            (*l_1602) = l_1601;
            return (*p_12);
        }
        (*l_1569) |= ((*l_1568) = (&g_295[1][1][0] == l_1603));
        --l_1610;
        for (l_1571 = 0; (l_1571 <= 2); l_1571 += 1)
        { 
            if (g_1280)
                goto lbl_1613;
        }
    }
    for (g_335.f0 = 20; (g_335.f0 != 37); g_335.f0++)
    { 
        uint32_t l_1623 = 0x345E1CB5L;
        struct S0 *l_1636 = &g_498[0][1];
        int32_t l_1649 = 6L;
        int32_t l_1655 = 0x2EDCEC51L;
        int32_t l_1658 = (-1L);
        int32_t l_1659[6][2] = {{0xE0AFF1BBL,0xE5015F8DL},{0xE5015F8DL,0xE0AFF1BBL},{0xE5015F8DL,0xE5015F8DL},{0xE0AFF1BBL,0xE5015F8DL},{0xE5015F8DL,0xE0AFF1BBL},{0xE5015F8DL,0xE5015F8DL}};
        union U2 *l_1688 = (void*)0;
        int i, j;
        for (l_1357 = 0; (l_1357 <= 6); l_1357 += 1)
        { 
            uint16_t l_1616 = 2UL;
            int32_t ** const l_1639 = (void*)0;
            union U1 *l_1647 = (void*)0;
            int32_t l_1648 = 1L;
            int32_t l_1650 = 0xB4C7FBC4L;
            int32_t l_1656[6][6][1] = {{{1L},{0x61D0089EL},{1L},{0xC63DA012L},{2L},{0x4D2CA13FL}},{{2L},{0xC63DA012L},{1L},{0x61D0089EL},{1L},{0x61D0089EL}},{{1L},{0xC63DA012L},{2L},{0x4D2CA13FL},{2L},{0xC63DA012L}},{{1L},{0x61D0089EL},{1L},{0x61D0089EL},{1L},{0xC63DA012L}},{{2L},{0x4D2CA13FL},{2L},{0xC63DA012L},{1L},{0x61D0089EL}},{{1L},{0x61D0089EL},{1L},{0xC63DA012L},{2L},{0x4D2CA13FL}}};
            struct S0 l_1665 = {0x3F38L};
            union U3 l_1690 = {7L};
            const int8_t l_1722 = 0xD0L;
            int i, j, k;
            if (l_1616)
            { 
                uint32_t l_1629 = 0UL;
                int16_t ***** const l_1631 = &g_476;
                int32_t l_1653 = 1L;
                int32_t l_1657[4][7][2] = {{{(-3L),(-5L)},{(-5L),(-1L)},{1L,1L},{(-3L),1L},{1L,(-1L)},{1L,1L},{(-3L),1L}},{{1L,(-1L)},{(-5L),(-5L)},{(-3L),(-5L)},{(-5L),(-1L)},{1L,1L},{(-3L),1L},{1L,(-1L)}},{{1L,1L},{(-3L),1L},{1L,(-1L)},{(-5L),(-5L)},{(-3L),(-5L)},{(-5L),(-1L)},{1L,1L}},{{(-3L),1L},{1L,(-1L)},{1L,1L},{(-3L),1L},{1L,(-1L)},{(-5L),(-5L)},{(-3L),(-5L)}}};
                struct S0 ***l_1666 = &g_937;
                struct S0 ****l_1667 = &g_1261[2];
                const int32_t l_1670 = 7L;
                uint32_t *l_1683[3][4] = {{&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,&g_659,&g_659},{&g_659,&g_659,&g_659,&g_659}};
                int8_t l_1693 = 0x03L;
                int32_t l_1696 = 0xB4EC7811L;
                int i, j, k;
                (*l_1569) = (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(g_1608, l_1616)) ^ (safe_mod_func_uint8_t_u_u(248UL, ((*p_14) |= l_1623)))) | (safe_mod_func_uint8_t_u_u(255UL, 0xACL))), (safe_add_func_int64_t_s_s(((!(0UL != 0xC16F189AL)) & l_1629), 0x09C5B6322F73ED38LL))));
                for (g_1142 = 1; (g_1142 <= 6); g_1142 += 1)
                { 
                    int32_t *l_1630 = &l_1319[0];
                    int16_t *****l_1632[1];
                    struct S0 **l_1635 = (void*)0;
                    union U1 **l_1637 = (void*)0;
                    union U1 ***l_1638 = &l_1637;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1632[i] = (void*)0;
                    (*g_634) = l_1630;
                    l_1632[0] = l_1631;
                    l_1636 = ((**l_1260) = ((safe_rshift_func_uint8_t_u_u(((***g_1124) = (*l_1568)), l_1623)) , (void*)0));
                    (*l_1638) = l_1637;
                }
                if (((*l_1567) = ((((void*)0 != l_1639) , ((0x0843L | (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_1644, (*l_1568))), (safe_lshift_func_int16_t_s_s((&g_101 == l_1647), 6))))) != 0L)) <= 0x74L)))
                { 
                    int32_t l_1651 = 0x394EAEC6L;
                    int32_t l_1652 = 3L;
                    int32_t l_1654 = 5L;
                    int32_t l_1660 = 0x3AE582C1L;
                    g_1661[0]--;
                }
                else
                { 
                    int32_t *l_1664 = &l_1653;
                    int i;
                    l_1356[l_1357] = l_1356[l_1357];
                    (*g_135) = (void*)0;
                    l_1664 = &l_1644;
                    if ((*l_1664))
                        break;
                    l_1665 = l_1356[l_1357];
                }
                (*l_1667) = l_1666;
                if ((g_1599[6] < ((safe_lshift_func_uint8_t_u_u(((l_1670 , (safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((**g_1043), ((g_699 || (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((g_335.f0 != (l_1623 < (((((l_1655 = 4294967295UL) == l_1658) > (*l_1567)) <= 18446744073709551614UL) , l_1623))) , l_1659[0][0]), l_1670)), l_1657[0][0][0])), l_1623))) & 0xE0B6L))), (*g_1044)))) , g_1684), 7)) & 0xC7555098E36DAEA9LL)))
                { 
                    union U2 **l_1689 = &l_1688;
                    int32_t l_1691 = (-2L);
                    int32_t l_1692 = (-8L);
                    uint8_t *l_1704 = &g_101.f2;
                    uint8_t *l_1705[3];
                    uint32_t *l_1706 = &g_116;
                    uint16_t *l_1718 = &g_498[0][1].f0;
                    uint16_t *l_1719 = (void*)0;
                    uint16_t *l_1720[4];
                    union U3 l_1721 = {-1L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1705[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_1720[i] = &l_1470.f0;
                    l_1692 = (l_1691 = ((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((g_1684 = 65535UL))) != l_1653), 0xEE35L)) == (((*l_1689) = l_1688) == (l_1690 , (void*)0))));
                    (*l_1568) = l_1693;
                    (*l_1566) = ((l_1691 |= ((((safe_mul_func_int8_t_s_s(l_1696, (l_1656[3][5][0] ^= ((safe_div_func_int8_t_s_s(l_1623, (safe_div_func_uint8_t_u_u((l_1692 < (((l_1623 & (0x73C0L >= ((l_1629 < (+(safe_mul_func_uint16_t_u_u(g_379, (*l_1566))))) != (*l_1567)))) , 0x6FA85714L) > 6L)), (*p_13))))) < 0x84L)))) || (*l_1567)) , (void*)0) != l_1706)) == l_1692);
                    (*l_1566) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(0x63A8BF801D57C2AALL, g_1210)), (safe_div_func_int8_t_s_s(1L, (g_61 , ((l_1659[2][1] , l_1658) & ((safe_div_func_int8_t_s_s(((*p_13) = (safe_sub_func_uint16_t_u_u(((((l_1691 = (l_1692 = ((*l_1718) = ((+((void*)0 != l_1631)) , 65533UL)))) , l_1721) , (*l_1566)) ^ 0x73L), l_1722))), l_1723)) | (*l_1569))))))));
                }
                else
                { 
                    if (l_1657[0][0][0])
                        break;
                }
            }
            else
            { 
                if (l_1262)
                    goto lbl_1724;
            }
            return (*p_13);
        }
    }
    (*l_1569) &= ((void*)0 == l_1725[0][0]);
    return (*p_13);
}



static int8_t * func_17(int8_t * p_18, int32_t  p_19, uint16_t  p_20, uint8_t  p_21)
{ 
    union U3 *l_903 = &g_721;
    uint32_t l_904 = 1UL;
    uint16_t *l_918 = &g_74;
    int8_t l_919 = 0xB0L;
    int32_t *l_920 = &g_534;
    int32_t *l_921[2][1];
    int32_t l_922 = (-6L);
    int16_t ***l_925 = (void*)0;
    union U1 l_926 = {0UL};
    struct S0 **l_935 = &g_588;
    struct S0 ***l_936[5];
    uint8_t ** const *l_939[2];
    uint8_t ** const **l_938 = &l_939[1];
    uint32_t l_940 = 0x163DBAE7L;
    uint16_t l_941 = 1UL;
    int64_t l_945 = 0xCB16D4CC75929E07LL;
    uint32_t l_947 = 4294967295UL;
    uint32_t l_997 = 1UL;
    uint8_t l_1005 = 0xABL;
    int8_t *l_1008 = &g_981;
    const union U2 *l_1068[2][4];
    const union U2 **l_1067 = &l_1068[0][2];
    uint32_t l_1107 = 0xD0FF1641L;
    union U3 l_1117 = {0xECFBL};
    int16_t l_1151 = 0x7F6CL;
    uint8_t l_1153 = 253UL;
    struct S0 **l_1160 = &g_588;
    int32_t l_1224 = 0L;
    int8_t l_1229 = 0L;
    uint32_t l_1236 = 0x2FB2B070L;
    struct S0 l_1239 = {65526UL};
    uint8_t **l_1240 = &g_296;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_921[i][j] = &g_505;
    }
    for (i = 0; i < 5; i++)
        l_936[i] = &l_935;
    for (i = 0; i < 2; i++)
        l_939[i] = &g_295[1][0][4];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1068[i][j] = &g_1069[0];
    }
    l_922 = ((*l_920) = (safe_rshift_func_uint16_t_u_u(((((((((((safe_mul_func_int16_t_s_s((((void*)0 != l_903) | l_904), l_904)) >= (0xC308477DL != ((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s((((((((safe_rshift_func_uint8_t_u_s((l_904 != ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(((((*l_918) &= (+(safe_add_func_int32_t_s_s((l_904 , l_904), p_20)))) != g_335.f0) ^ p_21), 9)) , (*p_18)) <= l_904), g_699)) , 1UL)), 3)) , (-1L)) <= l_904) && 9UL) != p_19) < l_919) || p_20), 0x56L)), 0x309C2B7932EB400DLL)) ^ p_21))) == l_919) <= (*p_18)) && l_919) ^ 0x5AA10A5F74E23359LL) || (*p_18)) && 0x97AE45CC28501B22LL) , (void*)0) == l_903), 4)));
    if ((safe_sub_func_int16_t_s_s((p_21 & (g_721.f0 >= ((void*)0 == l_925))), (l_926 , (safe_add_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((((((****l_938) ^= ((((safe_div_func_uint32_t_u_u((&g_588 == (g_937 = l_935)), p_20)) , (void*)0) == l_938) <= (-8L))) <= p_19) , l_940) & 4294967295UL), 0)) == g_699), g_59)) , &g_397) != &l_939[1]), l_941))))))
    { 
        int8_t l_942 = (-3L);
        int32_t l_943 = 0xFCB3A6E4L;
        int32_t l_944[1];
        int16_t l_946 = (-1L);
        struct S0 l_950[6][4] = {{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}}};
        uint16_t l_959 = 0x1AA0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_944[i] = 1L;
        l_947--;
        l_950[2][0] = l_950[3][1];
        for (p_19 = (-19); (p_19 < 19); ++p_19)
        { 
            union U1 l_956 = {1UL};
            uint32_t *l_960[2][4] = {{&g_581.f4,&g_581.f4,&g_581.f4,&g_581.f4},{&g_581.f4,&g_581.f4,&g_581.f4,&g_581.f4}};
            int i, j;
            (*g_634) = (((safe_sub_func_uint64_t_u_u((+(&l_925 != (((*p_18) = g_335.f0) , &l_925))), (g_699 < (l_956 , (g_659 = (((p_21 ^ (safe_rshift_func_uint8_t_u_u(l_959, 3))) ^ p_20) , 0x5065A05CL)))))) | 0x942BB8CCL) , (void*)0);
        }
    }
    else
    { 
        int64_t l_961 = 1L;
        union U2 l_962 = {0UL};
        int32_t *l_965 = &g_505;
        int32_t l_1004 = (-6L);
        uint32_t l_1028 = 0UL;
        union U2 *l_1071 = (void*)0;
        union U2 **l_1070 = &l_1071;
        uint64_t l_1086 = 0x58D7CC361834EBE2LL;
        int32_t l_1098 = (-10L);
        int32_t l_1102 = 0x0FD121A8L;
        int32_t l_1103 = 0L;
        int32_t l_1104 = 0xF09CB4CAL;
        int32_t l_1105 = 0xB7FB60F5L;
        struct S0 l_1113 = {0UL};
        uint32_t l_1163 = 4294967295UL;
        uint32_t l_1164 = 0UL;
        int16_t l_1228 = 0xC4B1L;
        int32_t l_1230 = 1L;
        int32_t l_1231 = 0xDCE93F9BL;
        int32_t l_1232 = 0L;
        int32_t l_1233 = (-1L);
        int32_t l_1234 = 0x865480E2L;
        int32_t l_1235[2][3][5] = {{{0xC48B7790L,0L,(-7L),0L,0xC48B7790L},{0x33DD9002L,0x4C7497E5L,2L,0x4C7497E5L,0x33DD9002L},{0xC48B7790L,0L,(-7L),0L,0xC48B7790L}},{{0x33DD9002L,0x4C7497E5L,2L,0x4C7497E5L,0x33DD9002L},{0xC48B7790L,0L,(-7L),0L,0xC48B7790L},{0x33DD9002L,0x4C7497E5L,2L,0x4C7497E5L,0x33DD9002L}}};
        int i, j, k;
lbl_1211:
        for (g_57 = 1; (g_57 >= 0); g_57 -= 1)
        { 
            int32_t *l_963 = &g_505;
            int32_t **l_964[5][1] = {{&l_921[1][0]},{(void*)0},{&l_921[1][0]},{(void*)0},{&l_921[1][0]}};
            const uint8_t *l_971 = &g_101.f0;
            const uint8_t ** const l_970 = &l_971;
            const uint8_t ** const *l_969 = &l_970;
            int16_t *** const *l_1000[4][3][4] = {{{&g_473,&g_473,&g_473,&l_925},{&g_473,&g_473,&l_925,(void*)0},{&g_473,&l_925,&l_925,(void*)0}},{{&g_473,&g_473,&g_473,&l_925},{(void*)0,&g_473,&g_473,(void*)0},{&g_473,(void*)0,&g_473,&g_473}},{{&l_925,&g_473,(void*)0,&g_473},{&g_473,&l_925,&g_473,&g_473},{&g_473,&l_925,&g_473,&g_473}},{{&g_473,&g_473,(void*)0,(void*)0},{&l_925,&g_473,&g_473,&g_473},{&g_473,&g_473,&g_473,&l_925}}};
            struct S0 l_1011 = {8UL};
            int i, j, k;
            (*l_920) = l_961;
            l_965 = (l_962 , ((*g_135) = l_963));
            for (g_699 = 0; (g_699 <= 1); g_699 += 1)
            { 
                uint8_t ** const *l_968 = (void*)0;
                union U1 *l_972 = &l_926;
                int32_t l_974[6] = {0xC09DDE53L,0xC09DDE53L,0xC09DDE53L,0xC09DDE53L,0xC09DDE53L,0xC09DDE53L};
                int i;
                if ((safe_lshift_func_int8_t_s_u((l_968 != l_969), 0)))
                { 
                    (*g_99) = l_972;
                    (*g_135) = &p_19;
                }
                else
                { 
                    uint32_t *l_980 = &g_444;
                    uint32_t **l_979[3][6] = {{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980},{&l_980,&l_980,&l_980,&l_980,&l_980,&l_980}};
                    int32_t l_982 = 5L;
                    int64_t *l_983 = &l_945;
                    int32_t l_996 = (-1L);
                    int16_t *** const **l_1001 = (void*)0;
                    int16_t *** const **l_1002[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1002[i] = &l_1000[1][1][0];
                    (*l_920) = (g_721.f0 ^ (~((*l_983) = (l_974[4] & (safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((l_979[1][0] != (void*)0) & ((g_981 , &l_926) != &l_926)), (-1L))) >= l_982), 0x6FL))))));
                    l_997 = ((*l_920) = ((*l_965) ^= ((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(p_19, g_101.f0)), (l_996 ^= (safe_lshift_func_int8_t_s_u(0L, ((safe_div_func_uint32_t_u_u(4294967295UL, (((*l_983) = (safe_sub_func_uint16_t_u_u(((((((*l_920) > ((void*)0 != &g_444)) > p_19) < g_657) ^ 0x78L) , g_74), 0x8446L))) && l_982))) < p_19)))))) && 0L)));
                    p_19 ^= (l_996 &= ((*l_963) = (safe_add_func_uint64_t_u_u(p_20, p_20))));
                    g_1003 = l_1000[3][1][0];
                }
                l_1005++;
                for (l_962.f4 = 0; (l_962.f4 <= 1); l_962.f4 += 1)
                { 
                    if (p_20)
                        break;
                    return l_1008;
                }
                (*l_920) = (safe_div_func_uint16_t_u_u((0x1AAE91CDE69136B6LL != ((p_20 != (l_1011 , ((1L <= (safe_add_func_uint8_t_u_u(p_21, ((*g_296)++)))) <= (safe_sub_func_int64_t_s_s((g_581.f2 = (p_19 < (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_965) = (*l_965)), 5)), l_974[4])))), p_20))))) | 0xA963L)), p_21));
                if (p_21)
                    break;
            }
        }
        if ((0x4DB0L < ((*l_965) = p_20)))
        { 
            struct S0 l_1036 = {0UL};
            uint64_t l_1049 = 0x443E3B59445799BALL;
            uint64_t *l_1050[2][2];
            int32_t l_1051 = (-1L);
            struct S0 l_1052 = {1UL};
            int16_t l_1059 = (-1L);
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1050[i][j] = &g_581.f0;
            }
            if ((p_21 , p_21))
            { 
                uint16_t l_1023 = 3UL;
                for (l_945 = 0; (l_945 <= 1); l_945 += 1)
                { 
                    int32_t l_1022 = (-8L);
                    int i;
                    if (g_5[l_945])
                        break;
                    --l_1023;
                    return p_18;
                }
            }
            else
            { 
                for (g_335.f0 = 11; (g_335.f0 != 17); ++g_335.f0)
                { 
                    l_1028--;
                    (*l_965) &= ((((void*)0 == l_925) != 5UL) < (+(safe_rshift_func_uint16_t_u_u((--(*l_918)), 4))));
                }
                l_1036 = l_1036;
            }
            for (p_19 = 0; (p_19 <= 21); p_19++)
            { 
                for (g_116 = 0; (g_116 >= 15); g_116 = safe_add_func_int16_t_s_s(g_116, 8))
                { 
                    return p_18;
                }
            }
            (*l_920) = (((safe_lshift_func_uint8_t_u_s((&l_1036 == (void*)0), 2)) , ((**g_1043) = (g_1043 != &g_1044))) || ((((((((safe_add_func_int64_t_s_s(l_1036.f0, (g_101.f0 && (l_1051 = (safe_add_func_uint64_t_u_u(p_21, l_1049)))))) >= p_19) && 0xEDFC7D92AF343B0DLL) < 0x3415F69CL) | p_21) || g_581.f1) || g_981) , p_21));
            g_498[0][1] = l_1052;
            (*l_965) ^= (l_1036.f0 != (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(p_21, 3)) <= p_20), ((safe_sub_func_int16_t_s_s((l_1059 = 0xF508L), g_379)) | (safe_add_func_int8_t_s_s((p_19 == ((p_19 , p_19) != p_21)), (*l_920)))))));
        }
        else
        { 
            uint32_t *l_1064 = &l_904;
            const union U2 *l_1066 = &l_962;
            const union U2 **l_1065 = &l_1066;
            union U2 ***l_1072 = &l_1070;
            union U2 **l_1074 = &l_1071;
            union U2 ***l_1073 = &l_1074;
            int32_t l_1089 = (-7L);
            int32_t l_1097 = 1L;
            int32_t l_1100 = 1L;
            int32_t l_1106[4][6][3] = {{{(-8L),6L,0x2F1262D5L},{6L,(-8L),(-8L)},{0x2F1262D5L,(-8L),0x51978D04L},{0xE3235F80L,6L,1L},{0x2F1262D5L,0x2F1262D5L,1L},{6L,0xE3235F80L,0x51978D04L}},{{(-8L),0x2F1262D5L,(-8L)},{(-8L),6L,0x2F1262D5L},{6L,(-8L),(-8L)},{0x2F1262D5L,(-8L),0x51978D04L},{0xE3235F80L,6L,1L},{0x2F1262D5L,0x2F1262D5L,1L}},{{6L,0xE3235F80L,0x51978D04L},{(-8L),0x2F1262D5L,(-8L)},{(-8L),6L,0x2F1262D5L},{6L,(-8L),(-8L)},{0x2F1262D5L,(-8L),0x51978D04L},{0xE3235F80L,6L,1L}},{{0x2F1262D5L,0x2F1262D5L,1L},{6L,0xE3235F80L,0x51978D04L},{(-8L),0x2F1262D5L,(-8L)},{(-8L),6L,0x2F1262D5L},{6L,(-8L),(-8L)},{0x2F1262D5L,(-8L),0x51978D04L}}};
            uint32_t l_1110 = 0x3F171421L;
            struct S0 l_1114 = {0xF577L};
            union U1 l_1154 = {0xEDL};
            uint8_t l_1168 = 0xAFL;
            uint8_t **l_1175 = &g_296;
            int16_t * const l_1197 = &g_1198[3][0];
            int16_t * const *l_1196 = &l_1197;
            int16_t * const ** const l_1195 = &l_1196;
            int16_t * const ** const *l_1194 = &l_1195;
            uint16_t l_1215 = 0x803FL;
            int i, j, k;
            p_19 = ((((*l_1064) &= p_20) , ((((l_1067 = l_1065) != ((*l_1073) = ((*l_1072) = l_1070))) | (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(0x955E6800L, (((0xCEL & (p_21 , (p_19 < g_101.f0))) <= (*l_965)) || p_19))), 0x085EDF1999662023LL))) > (-9L))) == 0x00C9L);
            for (g_981 = 26; (g_981 > 9); g_981--)
            { 
                union U2 l_1081 = {0xEE96586E983D65EBLL};
                int32_t *l_1088 = &g_505;
                int32_t l_1090 = 0x6CDFAFAEL;
                int32_t l_1093 = 0L;
                int32_t l_1094 = (-1L);
                int32_t l_1095 = 0L;
                int64_t l_1096 = 0x7B5820ADD79AAA23LL;
                int32_t l_1099[6];
                uint8_t ***l_1126 = &g_295[1][0][1];
                uint8_t ****l_1125 = &l_1126;
                union U2 ***l_1167[2][7] = {{&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074,&l_1074},{&l_1070,&l_1074,&l_1070,&l_1074,&l_1070,&l_1074,&l_1070}};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1099[i] = 6L;
                if ((((*g_99) == (l_1081 , &l_926)) <= (safe_lshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(l_1081.f0, ((**g_1043) = 0x10FE92F6L))) == p_19) , (((l_1086 > p_19) <= l_1081.f2) & p_19)), 0))))
                { 
                    int32_t *l_1087 = &l_1004;
                    int64_t l_1091 = 0x1911806EADED565ELL;
                    int32_t l_1092[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1092[i] = (-4L);
                    l_1088 = l_1087;
                    l_1107--;
                    return &g_981;
                }
                else
                { 
                    l_1110++;
                    l_1114 = l_1113;
                    if (l_1106[0][0][1])
                        break;
                }
                (*l_920) = (p_21 ^ (safe_mod_func_uint16_t_u_u(l_1089, (0x3AL ^ ((0xD3B9B5B6FBD08BCFLL != (*l_965)) , (((65535UL == (l_1117 , 8UL)) || p_19) < g_721.f0))))));
                if (((safe_mul_func_int8_t_s_s(((((*l_903) , (safe_sub_func_int8_t_s_s((0x6775F8C1L == (*l_920)), (safe_div_func_uint64_t_u_u(p_19, ((*l_1088) = g_534)))))) , g_1124) == ((*l_1125) = &g_295[1][0][3])), 0xF5L)) < g_896))
                { 
                    return &g_657;
                }
                else
                { 
                    uint8_t l_1131 = 1UL;
                    int16_t *l_1135 = &l_1117.f1;
                    uint64_t *l_1138[7] = {&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086,&l_1086};
                    int64_t *l_1140 = &l_1081.f2;
                    int64_t *l_1141[2];
                    uint32_t l_1152 = 0UL;
                    struct S0 **l_1161 = &g_588;
                    uint32_t l_1162 = 7UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1141[i] = &l_945;
                    l_1152 |= (safe_rshift_func_int8_t_s_u((0x0BD2L ^ (safe_add_func_int8_t_s_s(l_1131, ((safe_add_func_int64_t_s_s((g_1142 = ((0x063E7440L ^ (safe_unary_minus_func_int16_t_s(((*l_1135) = (-1L))))) , ((*l_1140) = (safe_mod_func_uint64_t_u_u((g_581.f0 = 0xFA84391E37BB8D45LL), (safe_unary_minus_func_int32_t_s(0xE218FB0DL))))))), (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*l_920), l_1131)), 9UL)), 1L)), g_101.f0)))) < l_1151)))), l_1100));
                    (*l_920) &= (p_20 , ((l_1153 || p_19) != ((l_1154 , ((*p_18) ^ (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((l_1160 == l_1161) > l_1162))) , l_1163), 255UL)) == (*l_1088)), (*l_1088))))) , p_20)));
                    if (l_1152)
                        continue;
                    l_1164--;
                }
                p_19 &= ((*l_965) = ((*l_920) = (&l_1065 != l_1167[1][1])));
                ++l_1168;
            }
            l_1100 = (*l_920);
            for (g_534 = 0; (g_534 <= 1); g_534 += 1)
            { 
                int16_t * const ** const *l_1192 = (void*)0;
                int16_t * const ** const **l_1193[7];
                uint16_t *l_1203 = &l_941;
                int32_t l_1206 = 0L;
                uint32_t l_1208 = 0x4658C6C4L;
                int64_t *l_1209 = &l_962.f2;
                int i;
                for (i = 0; i < 7; i++)
                    l_1193[i] = &l_1192;
                l_1106[0][1][1] ^= ((g_1210 |= (safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(0x0B91L, ((**l_938) != l_1175))) , ((safe_add_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((!((*l_965) = (safe_div_func_int16_t_s_s((((((safe_add_func_int32_t_s_s((0x8FL | ((((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((+((l_1194 = l_1192) != &g_473)), (safe_mul_func_uint16_t_u_u((++(*l_918)), (g_498[0][1].f0 |= (((--(*l_1203)) ^ ((((g_1069[0].f4 < p_21) ^ 0xC11000793638374ALL) ^ l_1206) || (*p_18))) , 8UL)))))), l_1089)) | 0UL) <= l_1100) , (*p_18))), p_20)) , 0L) != 0UL) ^ g_1069[0].f0) ^ g_1207), 0x5F3CL)))) & l_1110), p_21)) != p_19) , g_1142), l_1208)) , l_1110)), (*g_1044)))) || (*l_965));
                if (l_962.f1)
                    goto lbl_1211;
                for (g_444 = 0; (g_444 <= 1); g_444 += 1)
                { 
                    uint32_t l_1212 = 0xD63828ABL;
                    l_1212--;
                    ++l_1215;
                }
                for (g_74 = 0; (g_74 <= 1); g_74 += 1)
                { 
                    uint8_t l_1218 = 0x1DL;
                    int32_t l_1222 = 1L;
                    int32_t l_1223[5][6] = {{0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL},{0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL},{0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL},{0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL},{0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL,0x66DB945DL}};
                    uint64_t l_1225 = 0x74EB9367CF5BE16BLL;
                    int i, j;
                    (*l_965) = l_1218;
                    if (l_1206)
                        break;
                    ++g_1219;
                    ++l_1225;
                }
            }
        }
        l_1236--;
    }
    g_498[0][0] = l_1239;
    p_19 = (((**l_938) == l_1240) , 0x245FB63BL);
    return &g_5[0];
}



static int8_t * func_22(int8_t * p_23, uint8_t  p_24, int32_t  p_25, uint32_t  p_26, int8_t * p_27)
{ 
    uint8_t *l_512 = &g_101.f0;
    uint8_t **l_513 = &g_296;
    int32_t l_530[6][3][5] = {{{0L,0x99CCE516L,1L,1L,0x9AD5E69FL},{0L,(-6L),(-8L),0xE9C794C2L,1L},{0xE9C794C2L,0xF66D2B1FL,0x07E076A8L,0xD8A94C85L,0xF54DF8DBL}},{{(-8L),0x9AD5E69FL,1L,1L,0xF54DF8DBL},{1L,0L,0L,1L,1L},{0x744D341AL,1L,0L,0xF54DF8DBL,0x9AD5E69FL}},{{4L,0L,1L,1L,0x744D341AL},{1L,1L,(-8L),0xF54DF8DBL,0L},{0xE08EC087L,0x920FBE32L,0x38F80A25L,1L,0x920FBE32L}},{{1L,0L,4L,1L,0x99CCE516L},{0L,1L,4L,0xD8A94C85L,4L},{0x99CCE516L,0x99CCE516L,0x38F80A25L,0xE9C794C2L,0x9AD5E69FL}},{{1L,0x9AD5E69FL,(-8L),1L,0xE9C794C2L},{0xE9C794C2L,2L,1L,0xD8A94C85L,0x6A3DEB56L},{0xE08EC087L,0x9AD5E69FL,0L,0x920FBE32L,0xF54DF8DBL}},{{1L,0x99CCE516L,0L,1L,0xE9C794C2L},{0x744D341AL,1L,1L,0xF54DF8DBL,(-6L)},{0x744D341AL,0L,0x07E076A8L,0L,0x744D341AL}}};
    int32_t l_531 = (-5L);
    int32_t l_532 = 0L;
    int32_t *l_533[7];
    union U3 l_557 = {0x7D1DL};
    int32_t l_600 = 9L;
    union U2 l_622 = {0xF84F1EC8C7C8FD7ALL};
    int32_t ***l_636[7][2][2] = {{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}},{{&g_634,&g_634},{&g_634,&g_634}}};
    int16_t **l_641 = (void*)0;
    struct S0 l_687[4][3] = {{{65529UL},{0UL},{65529UL}},{{0UL},{0UL},{0UL}},{{65529UL},{0UL},{65529UL}},{{0UL},{0UL},{0UL}}};
    uint32_t l_773 = 0x9E235FABL;
    uint16_t l_790 = 0x34FBL;
    union U3 l_791[4][6][7] = {{{{-1L},{0x8361L},{0x59EEL},{-3L},{0xD5BAL},{0xFA6AL},{0xC1C3L}},{{9L},{-7L},{0x06EFL},{0L},{0xAC3BL},{0x1D82L},{3L}},{{-1L},{0xD4BBL},{0xC1C3L},{-1L},{0x9F75L},{-1L},{0xC1C3L}},{{0L},{0L},{0xAC3BL},{0L},{9L},{0x06EFL},{3L}},{{-9L},{0x227EL},{0x3919L},{0xAA6AL},{0L},{0xD4BBL},{3L}},{{0x06EFL},{0x1D82L},{9L},{3L},{9L},{0x1D82L},{0x06EFL}}},{{{0xBEDBL},{0x2A52L},{-1L},{-1L},{-1L},{-9L},{0x9F75L}},{{9L},{0x9121L},{0xB32BL},{0x8A72L},{-1L},{0x224BL},{0x224BL}},{{-1L},{0x8361L},{-1L},{0x8361L},{-1L},{0xFAE3L},{0L}},{{0xAC3BL},{0L},{9L},{0x06EFL},{3L},{0L},{-1L}},{{0x59EEL},{1L},{0x3919L},{1L},{-1L},{0x48ECL},{0xC1C3L}},{{0xAC3BL},{0x06EFL},{0xAC3BL},{-4L},{0L},{0x9121L},{1L}}},{{{-1L},{0xAE9EL},{0x18D5L},{0xFAE3L},{0xC1C3L},{0x227EL},{0xBEDBL}},{{9L},{0xAC3BL},{0x9121L},{0x1D82L},{0x1D82L},{0x9121L},{0xAC3BL}},{{0xBEDBL},{1L},{0x9F75L},{-3L},{0xF2C9L},{0x48ECL},{0L}},{{0x06EFL},{0xB32BL},{0L},{9L},{1L},{0L},{0x8A72L}},{{-9L},{-9L},{-1L},{-3L},{3L},{0xFAE3L},{0x0871L}},{{0L},{0x8A72L},{9L},{0x1D82L},{-4L},{0x224BL},{0L}}},{{{0L},{1L},{-1L},{0xFAE3L},{0x3919L},{-9L},{0x3919L}},{{-4L},{0x8A72L},{0x8A72L},{-4L},{0xB32BL},{0x1D82L},{0L}},{{-1L},{-9L},{-1L},{1L},{0xBEDBL},{0xD4BBL},{-1L}},{{0x224BL},{0xB32BL},{0L},{0x06EFL},{0L},{0x06EFL},{0L}},{{-1L},{1L},{0L},{0x8361L},{0xD5BAL},{0x2A52L},{0x3919L}},{{0xE5CEL},{0xAC3BL},{3L},{0x8A72L},{0x224BL},{9L},{0L}}}};
    uint32_t *l_810 = &g_116;
    uint32_t **l_809[3][2][7] = {{{&l_810,(void*)0,&l_810,&l_810,(void*)0,&l_810,&l_810},{&l_810,&l_810,&l_810,&l_810,&l_810,&l_810,&l_810}},{{&l_810,(void*)0,&l_810,&l_810,(void*)0,&l_810,&l_810},{&l_810,(void*)0,&l_810,&l_810,(void*)0,&l_810,&l_810}},{{&l_810,&l_810,&l_810,&l_810,&l_810,&l_810,&l_810},{&l_810,(void*)0,&l_810,&l_810,(void*)0,&l_810,&l_810}}};
    union U1 **l_820[7][7][3] = {{{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100}},{{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100}},{{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0}},{{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100}},{{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100}},{{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100}},{{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0},{&g_100,&g_100,&g_100},{&g_100,(void*)0,&g_100},{&g_100,&g_100,&g_100},{(void*)0,(void*)0,(void*)0}}};
    int16_t **l_848[4][6] = {{(void*)0,(void*)0,&g_66,(void*)0,(void*)0,&g_66},{(void*)0,(void*)0,&g_66,(void*)0,(void*)0,&g_66},{(void*)0,(void*)0,&g_66,(void*)0,(void*)0,&g_66},{(void*)0,(void*)0,&g_66,(void*)0,(void*)0,&g_66}};
    uint32_t l_856 = 1UL;
    int16_t l_866 = 0xDBB6L;
    uint16_t *l_872[1][2];
    uint8_t l_887 = 0x5EL;
    uint64_t *l_892 = &g_552;
    uint32_t l_893 = 0xF27D1FE6L;
    uint32_t l_894 = 0x8153B3D2L;
    uint64_t l_895 = 0x2F1668992F4247CALL;
    uint8_t l_897 = 0x4DL;
    int64_t l_898 = 9L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_533[i] = &g_505;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_872[i][j] = &g_498[0][1].f0;
    }
lbl_660:
    g_534 &= (safe_mod_func_uint16_t_u_u(((((*g_296) && (((*l_513) = l_512) != &p_24)) & (p_26 != (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_531 &= (l_530[2][1][3] = (((safe_div_func_uint32_t_u_u((0x86A4DEEBL & (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(0x54L, (safe_mul_func_int16_t_s_s(0x45AAL, 1L)))) || g_59), 6)) && 0x6B651E01L), 9)), 0UL))), p_24)) & 0x6287L) > l_530[2][1][3]))), l_532)), (*p_23))))) , l_532), l_532));
lbl_867:
    if ((safe_rshift_func_int8_t_s_u(g_57, 4)))
    { 
        uint32_t l_542 = 0x9DD14846L;
        int32_t l_554 = 0xEA05389AL;
        int16_t l_566[2];
        union U2 *l_580 = &g_581;
        struct S0 *l_606 = &g_498[0][4];
        int32_t ****l_635 = &g_633[0];
        int16_t **l_643 = &g_66;
        struct S0 l_644 = {7UL};
        union U1 * const *l_676 = (void*)0;
        int16_t l_693 = (-9L);
        int8_t l_736 = 0xBEL;
        int32_t l_743 = 0x02384E95L;
        int32_t l_745[1][4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_566[i] = 0xFA7DL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_745[i][j] = 0x48C84018L;
        }
lbl_778:
        for (g_444 = 26; (g_444 <= 17); --g_444)
        { 
            struct S0 l_545 = {65526UL};
            uint32_t **l_546 = (void*)0;
            uint32_t *l_548[5][4] = {{&g_116,(void*)0,(void*)0,&g_116},{&l_542,(void*)0,&g_116,(void*)0},{(void*)0,&l_542,&g_116,&g_116},{&l_542,&l_542,(void*)0,&g_116},{&g_116,&l_542,&g_116,(void*)0}};
            uint32_t **l_547 = &l_548[4][3];
            uint64_t *l_551 = &g_552;
            int32_t l_553 = 1L;
            int i, j;
            if (p_26)
                break;
            l_553 ^= (!((*l_551) ^= (safe_mul_func_uint8_t_u_u(l_542, ((*p_27) = ((safe_sub_func_int64_t_s_s((l_545 , (((*l_547) = l_533[2]) == &g_444)), 1L)) && (safe_rshift_func_uint8_t_u_s((*g_296), (p_25 | g_444)))))))));
            l_554 |= (p_26 >= (0xA30FDE17L || 0UL));
        }
        if ((safe_add_func_int64_t_s_s((l_557 , ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x7737L, g_444)), ((g_5[0] , l_542) & (safe_lshift_func_int16_t_s_s(0x08F0L, 1))))) || ((((safe_add_func_uint16_t_u_u(0xEB47L, 0xCFCBL)) == g_444) < 0xF80D826CL) > 0x3F08E093L))), l_566[0])))
        { 
            int32_t l_575 = 0L;
            union U1 l_578 = {0xD0L};
            int32_t l_579 = 0x81721696L;
            for (g_552 = (-10); (g_552 < 56); g_552 = safe_add_func_int8_t_s_s(g_552, 3))
            { 
                if (p_25)
                    break;
            }
            p_25 &= (safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_26, (((safe_sub_func_int64_t_s_s(g_61.f0, l_575)) & l_575) , ((safe_mod_func_int8_t_s_s((g_498[0][0] , ((*p_23) == (l_578 , (*p_27)))), l_578.f0)) != 0x0208F46643FFAFAFLL)))), 9L));
            l_579 ^= (l_575 || p_25);
        }
        else
        { 
            uint16_t l_591 = 0xC951L;
            int32_t **l_608[7][3] = {{&g_136[0][0],&g_136[0][0],&g_136[0][0]},{&l_533[1],&g_136[0][0],&l_533[1]},{&g_136[0][0],&g_136[0][0],&g_136[0][0]},{&l_533[1],&g_136[0][0],&l_533[1]},{&g_136[0][0],&g_136[0][0],&g_136[0][0]},{&l_533[1],&g_136[0][0],&l_533[1]},{&g_136[0][0],&g_136[0][0],&g_136[0][0]}};
            int i, j;
            for (g_74 = 0; (g_74 <= 1); g_74 += 1)
            { 
                union U2 **l_582 = &l_580;
                int i;
                if (l_566[g_74])
                    break;
                (*l_582) = l_580;
            }
            for (g_552 = 0; (g_552 != 28); g_552++)
            { 
                struct S0 *l_587 = &g_498[0][2];
                int32_t l_589 = 0x12750605L;
                int32_t l_590 = 0x35BC6A01L;
                for (g_379 = 0; (g_379 < 24); g_379 = safe_add_func_int64_t_s_s(g_379, 1))
                { 
                    p_25 ^= 0x547D1242L;
                    g_588 = l_587;
                    (*g_135) = &g_59;
                }
                l_591++;
            }
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            { 
                uint32_t l_594[2][6] = {{0xF090578EL,4294967295UL,0xF090578EL,4294967295UL,0xF090578EL,4294967295UL},{0xF090578EL,4294967295UL,0xF090578EL,4294967295UL,0xF090578EL,4294967295UL}};
                int16_t *l_601 = &l_566[0];
                int32_t **l_607 = &l_533[3];
                int32_t l_620 = (-2L);
                int16_t l_630 = 0xD05DL;
                int i, j;
                l_594[0][1]--;
                if (((safe_lshift_func_uint8_t_u_u((!(g_61.f2 < ((*l_601) |= (l_600 | g_505)))), (((safe_rshift_func_int8_t_s_u(l_594[0][1], ((safe_div_func_int64_t_s_s(((((l_606 != (((l_608[0][2] = l_607) != ((*p_23) , (void*)0)) , &g_498[0][1])) > (-1L)) > p_25) <= 65532UL), 0x4111E1C0AD85CFEDLL)) | p_24))) & p_25) <= p_25))) , p_26))
                { 
                    int16_t * const ***l_619 = &g_143;
                    int16_t * const ****l_618[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_618[i] = &l_619;
                    l_620 &= (safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((*p_27) > (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u((p_25 , (l_618[0] == (g_505 , &g_472))), ((void*)0 == (*g_472)))))) ^ 0x306C3FCDL), 65530UL))), g_57)) < 0x79ECL), p_25));
                }
                else
                { 
                    int64_t l_621 = 1L;
                    (**l_607) = l_621;
                }
                for (l_542 = 0; (l_542 <= 0); l_542 += 1)
                { 
                    int16_t l_631 = 0x381AL;
                    int32_t l_632 = 0L;
                    if (p_26)
                        break;
                    (*g_135) = (void*)0;
                    (*g_135) = (void*)0;
                    l_632 &= (p_25 || (l_622 , ((1L < ((safe_unary_minus_func_uint32_t_u((p_25 | (((safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(9UL, 247UL)), (((((**l_607) >= p_24) || 4L) , (*p_27)) , l_630))) , p_26), p_25)) , (void*)0) == (void*)0)))) | 0x181C7E9AL)) , l_631)));
                    return &g_5[1];
                }
            }
        }
        p_25 |= ((((*l_635) = g_633[0]) == l_636[0][1][0]) > (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(((l_641 == ((+p_24) , l_643)) != p_26), ((l_644 , p_24) && 255UL))) == 5UL) , (*g_296)), (*p_27))));
lbl_825:
        for (l_532 = 18; (l_532 != 23); l_532++)
        { 
            int8_t l_655 = 6L;
            int8_t *l_656 = &g_657;
            int8_t *l_658[4] = {&g_5[1],&g_5[1],&g_5[1],&g_5[1]};
            int32_t *** const l_669 = &g_634;
            const int32_t l_697 = (-1L);
            int32_t l_722 = 0x48356B41L;
            uint32_t l_734 = 0xE8D0B73FL;
            int32_t l_741 = 0x6A0A688FL;
            int32_t l_742[6][6] = {{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L},{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L},{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L},{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L},{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L},{0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L,0x5FC07F99L}};
            int8_t l_746[3];
            uint32_t l_748 = 0UL;
            struct S0 l_761 = {65529UL};
            int8_t l_771[1][4][3];
            int16_t l_772[2];
            int32_t *l_792[1][6][7];
            union U2 l_813[7][2][3] = {{{{0xC3BE7C956B5305E5LL},{18446744073709551615UL},{0x5FEB658C6DB7D543LL}},{{18446744073709551606UL},{18446744073709551606UL},{0UL}}},{{{18446744073709551606UL},{0UL},{0xA130B7CFF47C3856LL}},{{0xC3BE7C956B5305E5LL},{0x0BEA32D2A1FF3282LL},{0xB76037D740C62DADLL}}},{{{0xA130B7CFF47C3856LL},{18446744073709551613UL},{0xC3BE7C956B5305E5LL}},{{6UL},{0xC3BE7C956B5305E5LL},{0xB76037D740C62DADLL}}},{{{0x40E4CB651077630ELL},{0x2757F56F086961BCLL},{0xA130B7CFF47C3856LL}},{{0UL},{0x4A94BC96E7B72436LL},{0UL}}},{{{0xB7EA412763E0D5A9LL},{0x4A94BC96E7B72436LL},{0x5FEB658C6DB7D543LL}},{{0x5FEB658C6DB7D543LL},{0x2757F56F086961BCLL},{18446744073709551613UL}}},{{{0x4A94BC96E7B72436LL},{0xC3BE7C956B5305E5LL},{18446744073709551606UL}},{{18446744073709551615UL},{18446744073709551613UL},{0xD6CC3A969B3F0EB6LL}}},{{{0x4A94BC96E7B72436LL},{0x0BEA32D2A1FF3282LL},{4UL}},{{0x5FEB658C6DB7D543LL},{0UL},{0UL}}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_746[i] = 0x9EL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_771[i][j][k] = 0x65L;
                }
            }
            for (i = 0; i < 2; i++)
                l_772[i] = 0x6370L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_792[i][j][k] = &l_745[0][2];
                }
            }
            if ((((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_25, p_25)), 6)) == (((safe_div_func_int8_t_s_s((*p_23), (g_659 |= (safe_mod_func_int16_t_s_s(l_655, (((((((*l_656) = ((**g_99) , 0x7BL)) , (9L && 0x2F7DB60A4C76AA23LL)) > g_101.f0) , p_26) == 1L) & g_581.f4)))))) > 0xAAL) ^ l_655)) , (-7L)))
            { 
                int32_t ** const *l_667 = &g_634;
                int32_t l_671 = 2L;
                int8_t *l_677 = &g_5[0];
                uint32_t *l_688 = &g_659;
                uint32_t *l_694 = (void*)0;
                uint32_t *l_695 = &g_581.f4;
                int16_t *l_696 = &l_557.f0;
                uint32_t l_698 = 0x97ABAA89L;
                int32_t l_744[2];
                int32_t l_747 = 2L;
                int i;
                for (i = 0; i < 2; i++)
                    l_744[i] = 9L;
                if ((&g_588 != (p_26 , &l_606)))
                { 
                    int32_t ** const **l_668 = &l_667;
                    uint16_t *l_670[5] = {&g_498[0][1].f0,&g_498[0][1].f0,&g_498[0][1].f0,&g_498[0][1].f0,&g_498[0][1].f0};
                    int i;
                    (*g_135) = &p_25;
                    if (g_581.f4)
                        goto lbl_660;
                    p_25 = (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((p_26 <= (l_671 = (0UL && (safe_div_func_uint16_t_u_u((((*l_668) = l_667) == l_669), g_659))))), (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((&l_669 == (void*)0) || (*g_296)) , l_676) != &g_100), (*p_23))), p_25)))), p_26));
                    (*g_135) = &p_25;
                }
                else
                { 
                    return l_677;
                }
                if ((((g_699 = (safe_add_func_int16_t_s_s(((!((safe_lshift_func_uint8_t_u_s((((((1UL || ((-3L) >= (safe_mod_func_uint16_t_u_u((((((*l_696) &= (l_554 |= (((l_655 != ((((*l_656) = ((((((*l_695) = ((((p_25 == (l_687[0][0] , (++(*l_688)))) || ((*p_23) ^= (safe_div_func_uint32_t_u_u(g_101.f0, (l_693 ^ g_101.f2))))) != 0L) > (-10L))) > 0xE36E9885L) & p_26) && g_335.f0) && 18446744073709551614UL)) ^ g_101.f2) , p_25)) , (**g_99)) , p_26))) > p_24) & l_697) || (*p_23)), p_24)))) & l_698) , 255UL) > 0x9EL) < g_335.f0), 6)) || p_26)) & p_24), 1UL))) >= 254UL) < g_101.f0))
                { 
                    const int16_t l_706[3][4][6] = {{{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}},{{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}}};
                    uint16_t *l_707 = &g_335.f0;
                    int32_t l_708 = 0x3CEB7DE3L;
                    int i, j, k;
                    l_708 &= (safe_sub_func_int64_t_s_s((((*l_707) = (safe_mul_func_uint16_t_u_u((p_25 | ((1UL >= (safe_rshift_func_uint8_t_u_u(1UL, (g_581 , ((g_581.f2 = ((((0xD43E08B0L > ((**g_99) , (p_24 >= 9UL))) || 0xBDB09762L) , (-1L)) & 2UL)) || p_26))))) ^ 1UL)), l_706[0][1][2]))) | 0xE023L), p_26));
                    l_722 ^= (0UL | (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(1UL, 5)), 0)) ^ (l_706[0][1][2] > (0L & ((safe_mod_func_int8_t_s_s((((~g_581.f4) != (((p_24 = (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_u(0x9D9AL, (safe_mod_func_int8_t_s_s((((((l_708 = (p_25 = ((((g_721 , 0L) > g_379) != l_706[0][0][5]) | g_444))) >= g_552) >= g_335.f0) | p_24) && g_101.f2), (*p_23)))))))) , p_24) < 65535UL)) == 0xEB79CBA3357FC061LL), p_26)) >= g_57)))) != (-10L)));
                    p_25 = (l_708 = (safe_add_func_int8_t_s_s(((*l_656) = (*p_27)), (safe_mod_func_uint64_t_u_u((((0x5982F5A0L & p_25) > ((((!(safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_734 = (-3L)), ((!0xB494L) < p_25))), 5))) , p_25) <= p_26) < 1UL)) != p_25), l_706[0][1][2])))));
                    p_25 |= l_736;
                    return l_512;
                }
                else
                { 
                    l_554 |= p_24;
                    if (l_644.f0)
                        goto lbl_867;
                    (*g_588) = (*g_588);
                }
                (*l_606) = (*g_588);
                for (g_59 = 0; (g_59 != (-2)); g_59--)
                { 
                    int32_t l_739 = 2L;
                    int32_t l_740[6] = {0L,5L,0L,0L,5L,0L};
                    struct S0 **l_751 = &g_588;
                    int32_t *l_752 = &l_554;
                    int8_t l_774 = 0L;
                    int32_t l_775 = (-8L);
                    int i;
                    (*l_606) = (*l_606);
                    --l_748;
                    (*l_751) = &l_687[0][0];
                    l_752 = &p_25;
                    l_775 ^= ((((0x2DL & ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((*g_588) = l_761) , (*l_752)) , ((safe_sub_func_uint64_t_u_u(g_721.f1, (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u((~(safe_mul_func_int16_t_s_s((l_740[4] &= ((((p_25 , ((0UL > ((&g_634 != l_667) != p_24)) != l_771[0][1][2])) & g_335.f0) != l_772[0]) == g_61.f0)), p_24))), 0x280BDB9734605C7DLL)) <= g_444), 1)))) | g_101.f0)), 2)), (*p_27))) < 0xBD106B0B80D885ADLL), l_773)) < 0xD7338EDAE74BD9A2LL)) != 2UL) == l_774) , p_25);
                }
                for (g_699 = (-19); (g_699 > 58); ++g_699)
                { 
                    const uint32_t l_787 = 0x09437FB0L;
                    int64_t *l_788[4][1];
                    int32_t l_789[3][6][3] = {{{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL}},{{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL}},{{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL},{0xC6DD1A8BL,(-9L),0xC6DD1A8BL}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_788[i][j] = &g_581.f2;
                    }
                    if (g_581.f1)
                        goto lbl_778;
                    if (p_25)
                        break;
                    l_790 &= (((safe_div_func_uint64_t_u_u(((((l_789[0][3][2] = (0x65E2L ^ ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((g_335.f0 |= (((**l_635) == (void*)0) != (((g_74 >= (safe_div_func_int8_t_s_s(((*l_667) != (void*)0), (l_787 , 0x83L)))) == p_24) == (*p_27)))), g_116)), l_787)) | 0x9044L))) > p_25) < 5UL) | (*p_27)), 0x82EC38AE83052363LL)) , (void*)0) == (void*)0);
                    (*g_634) = (l_791[3][2][0] , l_792[0][5][5]);
                }
            }
            else
            { 
                uint8_t l_795 = 1UL;
                uint16_t l_808[7] = {0x9E16L,0x326FL,0x9E16L,0x9E16L,0x326FL,0x9E16L,0x9E16L};
                int i;
                for (g_379 = (-4); (g_379 > 15); g_379 = safe_add_func_uint8_t_u_u(g_379, 1))
                { 
                    return &g_657;
                }
                (*g_135) = &p_25;
                if ((p_25 &= 0L))
                { 
                    uint32_t l_807 = 0x278836D2L;
                    uint32_t ***l_811 = &l_809[0][1][0];
                    int8_t *l_812 = &g_5[0];
                    (***l_635) = &p_25;
                    l_795++;
                    p_25 = (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(((*l_656) = ((!(g_657 >= (safe_sub_func_int64_t_s_s(0x27901EE6FF11735CLL, (safe_rshift_func_uint16_t_u_s((l_533[2] != &g_659), 0)))))) , (l_807 && l_808[0]))), (((*l_811) = l_809[2][0][0]) == (void*)0))), (-7L)));
                    return l_812;
                }
                else
                { 
                    struct S0 l_815[3] = {{65535UL},{65535UL},{65535UL}};
                    struct S0 *l_816 = &l_644;
                    int i;
                    g_814 = (l_813[3][0][2] , &g_721);
                    p_25 ^= 0x27DC455FL;
                    (*l_816) = (l_815[0] , ((*g_588) = (*g_588)));
                    if (p_24)
                        break;
                    if (l_808[0])
                        continue;
                }
                p_25 |= ((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int8_t_s_u(((void*)0 == l_820[4][1][1]), (*g_296))) , (p_26 == (safe_lshift_func_uint16_t_u_u((g_5[0] , g_101.f2), 0)))))) > p_24);
            }
        }
        for (g_444 = 0; (g_444 <= 1); g_444 += 1)
        { 
            uint16_t *l_824 = &g_498[0][1].f0;
            int32_t l_834[6];
            union U2 *l_841 = &g_581;
            int i;
            for (i = 0; i < 6; i++)
                l_834[i] = (-1L);
            if ((g_581 , (((*l_824) |= (~1UL)) != 6L)))
            { 
                struct S0 l_828 = {7UL};
                for (g_379 = 0; (g_379 <= 1); g_379 += 1)
                { 
                    uint64_t *l_829 = &g_581.f0;
                    uint64_t *l_830 = (void*)0;
                    uint64_t *l_831 = &l_622.f0;
                    int i;
                    if (l_644.f0)
                        goto lbl_825;
                    p_25 ^= ((g_5[g_444] != (((**g_99) , (l_828 , 0UL)) < g_61.f2)) < ((((*l_831)++) >= p_24) == (-9L)));
                }
                return p_23;
            }
            else
            { 
                int8_t l_835 = 0xE0L;
                int32_t l_836 = 0L;
                int32_t l_837[5][7] = {{0x5EEEBC05L,0xDB66FB81L,(-6L),0xF90F315EL,0xF90F315EL,(-6L),0xDB66FB81L},{0x265192E4L,0x86CC76DAL,7L,1L,1L,7L,0x86CC76DAL},{0x5EEEBC05L,0xDB66FB81L,(-6L),0xF90F315EL,0xF90F315EL,(-6L),0xDB66FB81L},{0x265192E4L,0x86CC76DAL,7L,1L,1L,7L,0x86CC76DAL},{0x5EEEBC05L,0xDB66FB81L,(-6L),0xF90F315EL,0xF90F315EL,(-6L),0xDB66FB81L}};
                uint8_t l_838 = 0xAFL;
                union U2 **l_842 = &l_841;
                union U2 **l_843 = &l_580;
                int i, j;
                l_838++;
                (*l_843) = ((*l_842) = l_841);
                (*g_634) = &p_25;
            }
        }
    }
    else
    { 
        int16_t ***l_846 = &l_641;
        int16_t **l_847 = &g_66;
        int16_t **l_849 = &g_66;
        int32_t l_850[4][1] = {{(-4L)},{4L},{(-4L)},{4L}};
        int32_t l_851 = (-2L);
        int i, j;
        l_851 ^= ((p_24 = (((safe_sub_func_uint8_t_u_u(((l_847 = ((*l_846) = l_641)) == (l_849 = l_848[0][5])), (&g_476 == (void*)0))) > ((*p_27) != p_25)) < ((((p_24 < l_850[1][0]) | p_26) , &g_295[1][0][3]) == (void*)0))) || p_26);
        p_25 = (safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(0xACL, l_856)) < (!((((safe_rshift_func_int16_t_s_s(7L, 6)) , ((safe_div_func_int16_t_s_s((((l_850[1][0] = (l_866 = (((*p_23) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((void*)0 != &g_588) == (((*g_588) = (l_622 , (*g_588))) , (*p_23))), (*p_23))), (*p_23)))) || 0x84L))) <= g_657) , 0xF0C4L), p_25)) , l_851)) && p_24) , l_850[0][0]))) < p_26), p_25));
    }
    for (l_622.f4 = (-11); (l_622.f4 < 39); l_622.f4 = safe_add_func_uint16_t_u_u(l_622.f4, 5))
    { 
        uint16_t l_870 = 65529UL;
        int32_t l_871[6][5] = {{(-1L),0L,(-9L),(-9L),0L},{0x5AC1BFB8L,0x4435991DL,0x232F8AE1L,0L,0x7CDD5F43L},{0x4435991DL,(-9L),0x232F8AE1L,0xDB804320L,0x232F8AE1L},{0x7CDD5F43L,0x7CDD5F43L,(-9L),0x5AC1BFB8L,0L},{0x4435991DL,0L,(-1L),0x5AC1BFB8L,0x5AC1BFB8L},{0x5AC1BFB8L,(-1L),0x5AC1BFB8L,0xDB804320L,0x6B1CBA7BL}};
        int i, j;
        l_871[1][1] = l_870;
        return p_23;
    }
    p_25 ^= p_24;
    l_898 = ((p_24 , ((((--g_335.f0) & (g_92 |= (((safe_mul_func_int16_t_s_s((g_721.f0 = ((l_897 = ((((*p_23) , ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((*l_810) |= ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((((l_887 &= (p_25 ^= 0L)) & (safe_mul_func_int16_t_s_s((0xAF9E5EB1L == ((p_24 , p_24) , ((((((safe_rshift_func_uint16_t_u_u((&g_552 == l_892), p_26)) , p_26) , 0x43B56BBCB24ECD4CLL) || g_534) != l_893) < l_894))), p_24))) > l_895) >= (*p_27)), g_444)), p_26)), g_896)) < 65534UL)), g_721.f0)), (*p_23))) == 0x68L)) && 5UL) != g_57)) | 0xCDBAF12AL)), g_534)) | p_24) <= g_699))) & p_26) && p_25)) ^ 0x78L);
    return &g_5[0];
}



static uint8_t  func_28(int8_t * const  p_29)
{ 
    int32_t *l_490 = &g_59;
    uint16_t *l_493 = &g_335.f0;
    uint8_t ** const l_503[5] = {&g_296,&g_296,&g_296,&g_296,&g_296};
    int32_t *l_504 = &g_505;
    struct S0 *l_508 = &g_498[0][1];
    struct S0 **l_509 = &l_508;
    int i;
    (*g_135) = l_490;
    (*l_504) ^= (safe_lshift_func_int16_t_s_s((*l_490), ((((--(*l_493)) < (((*l_490) <= (safe_mul_func_uint8_t_u_u((*l_490), (g_498[0][1] , ((safe_lshift_func_int16_t_s_s(0L, (safe_lshift_func_uint16_t_u_u((l_503[0] != &g_296), (*l_490))))) & 0x6FL))))) == 0xD1DCC962D9AF3343LL)) , (*l_490)) > (*l_490))));
    for (g_92 = 0; (g_92 <= 12); g_92++)
    { 
        return (*g_296);
    }
    (*l_509) = l_508;
    return (*l_490);
}



static int8_t * func_30(int16_t  p_31)
{ 
    uint32_t l_53[2];
    int8_t *l_54 = (void*)0;
    int8_t *l_55 = &g_5[0];
    int16_t *l_56 = &g_57;
    int32_t l_58 = 0L;
    const union U1 *l_72[2];
    const union U1 **l_71 = &l_72[0];
    int16_t l_110 = 0xBD3FL;
    int32_t l_113 = 0x88D8CC67L;
    int16_t l_115 = 0xA164L;
    uint8_t *l_163 = &g_101.f0;
    uint8_t **l_162 = &l_163;
    int32_t l_223 = (-1L);
    int32_t l_224 = 0xF382EBA4L;
    int32_t l_229 = 0L;
    int32_t l_235 = (-8L);
    int32_t l_238 = 0x878D381CL;
    int32_t l_241 = (-1L);
    int32_t l_244 = 0x1DFFD33DL;
    int32_t l_245 = 0xB8CB3F81L;
    int32_t l_246 = 0xB2E94D31L;
    uint8_t l_247 = 1UL;
    struct S0 l_254 = {65534UL};
    union U2 l_258[7][1][1] = {{{{18446744073709551615UL}}},{{{0UL}}},{{{0UL}}},{{{18446744073709551615UL}}},{{{0UL}}},{{{0UL}}},{{{18446744073709551615UL}}}};
    int16_t ***l_350 = (void*)0;
    int16_t *l_351 = &g_92;
    int32_t l_352 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_53[i] = 0x2C5A4ECBL;
    for (i = 0; i < 2; i++)
        l_72[i] = &g_61;
    if (func_34((((((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(65535UL, ((((safe_div_func_uint8_t_u_u(p_31, (safe_div_func_uint8_t_u_u(p_31, (safe_mod_func_int64_t_s_s(((((((p_31 < p_31) , (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((l_58 &= ((*l_56) = (((*l_55) = ((safe_add_func_int8_t_s_s(((((void*)0 != &g_5[0]) | g_5[0]) && g_5[1]), g_5[0])) , l_53[1])) || 0xF9L))), 14)) > l_53[1]), 1UL))) >= g_59) == 0L) | l_53[0]) , g_59), l_53[0])))))) != g_59) , p_31) | p_31))), l_53[0])) & (-1L)) && g_5[0]) && l_53[1]) , 0xE3BAL), l_54))
    { 
        int16_t **l_65[2];
        uint16_t *l_73 = &g_74;
        int8_t *l_94[5][6] = {{(void*)0,&g_5[1],&g_5[0],&g_5[0],&g_5[1],&g_5[0]},{&g_5[1],(void*)0,&g_5[0],(void*)0,&g_5[1],&g_5[1]},{&g_5[0],(void*)0,&g_5[0],&g_5[0],&g_5[1],&g_5[0]},{&g_5[0],&g_5[1],&g_5[0],(void*)0,(void*)0,&g_5[0]},{&g_5[1],&g_5[1],&g_5[0],&g_5[0],(void*)0,&g_5[1]}};
        int32_t l_102 = 0x80C53E4AL;
        struct S0 l_103 = {0xDAE8L};
        int32_t **l_137 = &g_136[0][0];
        int16_t *l_156 = &l_110;
        int16_t *** const l_158 = &l_65[0];
        int16_t *** const *l_157 = &l_158;
        int16_t ***l_160 = &l_65[0];
        int16_t ****l_159 = &l_160;
        int16_t l_161 = 0xE2A0L;
        uint8_t ***l_164 = &l_162;
        int32_t *l_172[5][2][3] = {{{(void*)0,(void*)0,&l_102},{&g_59,&g_59,&l_58}},{{(void*)0,(void*)0,&l_102},{&g_59,(void*)0,&g_59}},{{&l_113,&l_113,(void*)0},{(void*)0,(void*)0,&g_59}},{{&l_113,&l_113,(void*)0},{(void*)0,(void*)0,&g_59}},{{&l_113,&l_113,(void*)0},{(void*)0,(void*)0,&g_59}}};
        union U1 l_206 = {247UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_65[i] = &l_56;
        if ((safe_rshift_func_uint16_t_u_s((&p_31 == (l_56 = (g_66 = (void*)0))), (((0L >= (safe_mul_func_uint16_t_u_u(((*l_73) &= ((((((safe_rshift_func_uint8_t_u_s((l_71 != (void*)0), 5)) & (g_61.f2 != 65532UL)) || g_57) | g_61.f2) , 5UL) & p_31)), p_31))) , l_58) == p_31))))
        { 
            uint8_t l_81[2];
            const struct S0 l_87 = {0x630FL};
            int i;
            for (i = 0; i < 2; i++)
                l_81[i] = 254UL;
            for (g_74 = 0; (g_74 <= 1); g_74 += 1)
            { 
                int32_t *l_75 = &l_58;
                int32_t **l_76 = (void*)0;
                int32_t **l_77 = (void*)0;
                int32_t **l_78 = &l_75;
                int8_t *l_82 = &g_5[0];
                uint32_t *l_84 = &l_53[1];
                uint8_t *l_93[2][6][7] = {{{&l_81[0],(void*)0,&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0]},{&l_81[0],&l_81[0],&l_81[0],(void*)0,&l_81[0],(void*)0,&l_81[0]},{&l_81[0],&l_81[1],&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0]},{&l_81[0],&l_81[0],&l_81[0],(void*)0,&l_81[0],(void*)0,&l_81[0]},{(void*)0,&l_81[0],&l_81[0],(void*)0,(void*)0,&l_81[0],&l_81[0]},{&l_81[0],&l_81[1],&l_81[0],&l_81[0],&l_81[0],(void*)0,(void*)0}},{{&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0]},{(void*)0,(void*)0,&l_81[0],&l_81[0],&l_81[0],&l_81[1],&l_81[0]},{&l_81[0],&l_81[0],(void*)0,(void*)0,&l_81[0],&l_81[0],(void*)0},{&l_81[0],(void*)0,&l_81[0],(void*)0,&l_81[0],&l_81[0],&l_81[0]},{&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[0],&l_81[1],&l_81[0]},{&l_81[0],(void*)0,&l_81[0],(void*)0,&l_81[0],&l_81[0],&l_81[0]}}};
                int i, j, k;
                (*l_78) = l_75;
                for (g_59 = 0; (g_59 <= 1); g_59 += 1)
                { 
                    const int8_t l_79 = 0xF5L;
                    int i;
                    (*l_75) &= ((l_79 , (((!(&p_31 == &g_57)) != (l_81[0] < ((0L ^ 0x9AL) <= l_79))) | l_53[1])) , p_31);
                    return l_82;
                }
                if ((&p_31 != (g_66 = ((((0x5C53L >= (+(++(*l_84)))) <= (l_87 , 1L)) , (safe_mod_func_uint8_t_u_u((l_58 ^= (g_92 = ((1L || (safe_rshift_func_int16_t_s_s(0x4E99L, 3))) && (p_31 , g_61.f2)))), p_31))) , &g_92))))
                { 
                    return &g_5[1];
                }
                else
                { 
                    return l_94[2][0];
                }
            }
        }
        else
        { 
            int32_t *l_95[7] = {&l_58,&l_58,&g_59,&l_58,&l_58,&g_59,&l_58};
            int16_t * const ***l_145 = &g_143;
            int16_t * const **l_147[6][1][1] = {{{&g_144}},{{&g_144}},{{&g_144}},{{&g_144}},{{&g_144}},{{&g_144}}};
            int16_t * const ***l_146 = &l_147[4][0][0];
            int i, j, k;
lbl_142:
            g_59 = ((p_31 & p_31) && p_31);
            for (p_31 = 0; (p_31 == 26); p_31++)
            { 
                union U1 ** const l_109 = (void*)0;
                int32_t l_114 = 0x5AE40314L;
                l_102 = (!(g_99 == &g_100));
                for (l_58 = 1; (l_58 >= 0); l_58 -= 1)
                { 
                    struct S0 *l_104 = &l_103;
                    uint64_t l_111 = 18446744073709551615UL;
                    int32_t l_112 = 0x5D61FA6EL;
                    int i;
                    (*l_104) = l_103;
                    l_111 ^= ((l_110 = (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((4L ^ (l_53[l_58] , 4L)), (((l_109 != &g_100) >= g_74) <= ((l_102 , p_31) == (-1L))))), (-1L)))) | l_58);
                    ++g_116;
                    l_112 = (safe_mul_func_int16_t_s_s((4294967295UL < (l_102 | ((((safe_sub_func_uint8_t_u_u((((+(safe_lshift_func_int8_t_s_s(((**l_137) = (safe_mul_func_uint16_t_u_u(((~p_31) && ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_135 != l_137), l_114)), ((--(*l_73)) , (safe_div_func_uint64_t_u_u(p_31, g_92))))) >= l_112)), 9UL))), 7))) , 18446744073709551609UL) | 18446744073709551615UL), g_5[0])) && l_53[l_58]) | p_31) && g_74))), 0x4645L));
                }
                if (g_59)
                    goto lbl_142;
                if (l_114)
                    break;
            }
            (*l_146) = (g_116 , ((*l_145) = g_143));
        }
        (**l_137) = (safe_rshift_func_uint16_t_u_s(((void*)0 != l_56), 3));
        (*l_164) = ((safe_rshift_func_int8_t_s_s(0x09L, (!(safe_unary_minus_func_uint16_t_u((((p_31 && (p_31 < (0xD1592912FC398B08LL < (safe_sub_func_uint8_t_u_u(((0x3505F385L != (l_156 != ((l_157 == l_159) , (void*)0))) | (**l_137)), 9L))))) , l_161) && p_31)))))) , l_162);
        g_59 = (safe_rshift_func_int8_t_s_u((((!(&g_74 == l_156)) > (safe_lshift_func_int8_t_s_s(((((--(*l_73)) , (void*)0) != (void*)0) > (((*l_137) = &l_113) != &l_113)), 0))) ^ g_92), 7));
        for (g_57 = 0; (g_57 <= 3); g_57 = safe_add_func_uint16_t_u_u(g_57, 7))
        { 
            uint64_t l_180 = 0x0F49ACE371FA290ELL;
            struct S0 l_195[7][2][5] = {{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}},{{{5UL},{1UL},{1UL},{5UL},{0x12BBL}},{{5UL},{1UL},{1UL},{5UL},{0x12BBL}}}};
            int32_t l_213 = 0x1088D654L;
            int32_t l_214 = 4L;
            int32_t l_216 = 0L;
            int32_t l_218 = 1L;
            int32_t l_226 = 0x255A8A43L;
            int32_t l_227 = (-1L);
            int32_t l_231 = 3L;
            int32_t l_234 = 0x41E11B27L;
            int32_t l_239 = 0xFD68B034L;
            int32_t l_243 = 0x04AD4DC7L;
            uint32_t l_250 = 0UL;
            int i, j, k;
        }
    }
    else
    { 
        struct S0 l_253 = {6UL};
        uint32_t l_263 = 0x21EC47C4L;
        uint8_t **l_298 = &l_163;
        int32_t l_319 = 0L;
        int32_t l_320 = 0L;
        int32_t l_324 = 7L;
        int32_t l_325 = 0x3B34546DL;
        int32_t l_326 = 0x7EAFB50DL;
        int32_t l_327 = (-1L);
        int32_t l_328 = 1L;
        int32_t *l_343 = (void*)0;
        int16_t * const ***l_373 = &g_143;
        int32_t ***l_394[1][4][5];
        uint8_t l_422 = 0xFBL;
        int8_t *l_434[7];
        uint64_t l_467[3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 5; k++)
                    l_394[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 7; i++)
            l_434[i] = &g_5[0];
        for (i = 0; i < 3; i++)
            l_467[i] = 1UL;
        (*g_135) = (*g_135);
        if ((**g_135))
        { 
            struct S0 *l_255 = &l_254;
            struct S0 *l_256 = (void*)0;
            struct S0 *l_257 = &l_253;
            (*g_135) = (l_253 , (*g_135));
            (*l_257) = ((*l_255) = l_254);
        }
        else
        { 
            int32_t *l_264 = &l_235;
            uint16_t l_276 = 65535UL;
            uint32_t *l_290 = &l_53[1];
            (*l_264) ^= (((l_258[2][0][0] , (g_101.f2 , p_31)) > ((1L <= (safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(((p_31 >= p_31) < p_31), (-1L))) > 0x755336F3L) < (**g_135)), l_241))) ^ l_263)) && g_61.f2);
            (*l_264) |= (**g_135);
lbl_268:
            for (p_31 = 0; (p_31 <= 1); p_31 += 1)
            { 
                int i;
                (*l_264) |= (safe_lshift_func_uint16_t_u_u(g_5[p_31], 4));
                for (g_92 = 0; (g_92 <= 0); g_92 += 1)
                { 
                    int8_t *l_267[3][7][4] = {{{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]}},{{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]}},{{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]},{&g_5[0],&g_5[p_31],&g_5[0],&g_5[0]},{&g_5[p_31],&g_5[p_31],&g_5[p_31],&g_5[p_31]},{&g_5[p_31],&g_5[0],&g_5[0],&g_5[p_31]}}};
                    int i, j, k;
                    (*l_264) |= ((**g_135) = (0UL >= 253UL));
                    if (l_53[(g_92 + 1)])
                        continue;
                    return l_267[2][1][2];
                }
                if (g_74)
                    goto lbl_268;
                (*g_135) = (*g_135);
                return &g_5[1];
            }
            (**g_135) = ((safe_mod_func_uint64_t_u_u((0x1F9FL != (((+(safe_div_func_uint32_t_u_u((*l_264), (safe_sub_func_uint32_t_u_u(l_276, (+(g_101.f0 & (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0x04D9L, (safe_sub_func_int32_t_s_s((**g_135), (safe_mod_func_uint32_t_u_u(((*l_290) = ((((safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u((p_31 < p_31), p_31)), p_31)) & p_31) , p_31) , 4294967295UL)), p_31)))))), p_31))))))))) <= g_74) , 0x5AE9L)), 0xBF2CD2CC1E2D72D9LL)) || p_31);
        }
        for (l_238 = 0; (l_238 <= 0); l_238 += 1)
        { 
            uint8_t ***l_297 = &l_162;
            int32_t l_305 = 0x8909F1A7L;
            int32_t l_318 = 1L;
            int32_t l_321 = 0x0D3CBCC6L;
            int32_t l_322 = (-4L);
            int32_t l_323[6] = {0xA3CC2DD6L,0xA3CC2DD6L,0xA3CC2DD6L,0xA3CC2DD6L,0xA3CC2DD6L,0xA3CC2DD6L};
            int32_t **l_348 = &g_136[0][0];
            int32_t ***l_347 = &l_348;
            int32_t ****l_346[4][2][3] = {{{(void*)0,(void*)0,(void*)0},{&l_347,&l_347,&l_347}},{{(void*)0,(void*)0,(void*)0},{&l_347,&l_347,&l_347}},{{(void*)0,(void*)0,(void*)0},{&l_347,&l_347,&l_347}},{{(void*)0,(void*)0,(void*)0},{&l_347,&l_347,&l_347}}};
            uint32_t l_353 = 0UL;
            union U3 l_357[5] = {{-6L},{-6L},{-6L},{-6L},{-6L}};
            int i, j, k;
        }
        for (l_325 = 0; (l_325 < 13); l_325++)
        { 
            int16_t ****l_474 = &l_350;
            int32_t l_485[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
            int8_t l_489 = 1L;
            int i;
        }
    }
    return l_54;
}



static int32_t  func_34(int16_t  p_35, int8_t * p_36)
{ 
    const union U1 *l_60 = &g_61;
    const union U1 **l_62 = &l_60;
    (*l_62) = l_60;
    return p_35;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_498[i][j].f0, "g_498[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_581.f0, "g_581.f0", print_hash_value);
    transparent_crc(g_581.f1, "g_581.f1", print_hash_value);
    transparent_crc(g_581.f2, "g_581.f2", print_hash_value);
    transparent_crc(g_581.f4, "g_581.f4", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_721.f0, "g_721.f0", print_hash_value);
    transparent_crc(g_721.f1, "g_721.f1", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1069[i].f0, "g_1069[i].f0", print_hash_value);
        transparent_crc(g_1069[i].f1, "g_1069[i].f1", print_hash_value);
        transparent_crc(g_1069[i].f2, "g_1069[i].f2", print_hash_value);
        transparent_crc(g_1069[i].f4, "g_1069[i].f4", print_hash_value);

    }
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1142, "g_1142", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1198[i][j], "g_1198[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1599[i], "g_1599[i]", print_hash_value);

    }
    transparent_crc(g_1608, "g_1608", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1661[i], "g_1661[i]", print_hash_value);

    }
    transparent_crc(g_1684, "g_1684", print_hash_value);
    transparent_crc(g_1858, "g_1858", print_hash_value);
    transparent_crc(g_1907, "g_1907", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1988[i][j][k], "g_1988[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2003, "g_2003", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2142[i], "g_2142[i]", print_hash_value);

    }
    transparent_crc(g_2166, "g_2166", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
