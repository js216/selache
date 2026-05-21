// SPDX-License-Identifier: MIT
// cctest_csmith_51a5e1a0.c --- cctest case csmith_51a5e1a0 (csmith seed 1369825696)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb65c1692 */

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

// Options:   -s 1369825696 -o /tmp/csmith_gen_cpdme6mi/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
};

union U1 {
   int8_t * f0;
   uint64_t  f1;
   uint16_t  f2;
   struct S0  f3;
   uint32_t  f4;
};

union U2 {
   uint16_t  f0;
   int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint16_t  f4;
};

union U3 {
   int16_t  f0;
   const uint32_t  f1;
   int8_t  f2;
};


static uint16_t g_10[3] = {0x58E1L,0x58E1L,0x58E1L};
static uint8_t g_19 = 0x07L;
static uint16_t g_25[4] = {0xDAE9L,0xDAE9L,0xDAE9L,0xDAE9L};
static int64_t g_28 = 0x8AAE07EA4C5706B3LL;
static int32_t g_30[3] = {(-1L),(-1L),(-1L)};
static int32_t *g_29 = &g_30[2];
static union U1 g_35 = {0};
static struct S0 g_85 = {0x93C069BDD23608D4LL};
static union U2 g_87 = {0x14CEL};
static int16_t g_104[1] = {1L};
static uint32_t g_114 = 0x94540758L;
static uint64_t g_115 = 0UL;
static int32_t g_125 = 0xAFD50193L;
static int8_t g_128 = 0xDBL;
static int8_t g_180 = 0x11L;
static int64_t g_181 = 0x0FE71AB90A9B597BLL;
static uint16_t g_182 = 9UL;
static union U3 g_190 = {-5L};
static union U3 *g_192 = (void*)0;
static uint32_t g_206 = 0xCBC3A3F2L;
static uint64_t g_207 = 0x2EA2ED9D6BEC8285LL;
static int8_t g_212 = (-4L);
static uint16_t g_214 = 0x9346L;
static const int32_t g_236 = (-10L);
static uint32_t g_238 = 1UL;
static uint64_t g_242 = 0x50BB737AE78DEA3DLL;
static uint64_t g_252 = 3UL;
static int32_t g_257 = 0x2E92B18FL;
static int64_t g_258 = 0x0BD9C6B668147835LL;
static int32_t g_260 = 2L;
static int32_t g_262 = 0x66ECD9DEL;
static uint64_t g_263 = 0xCACBAFCE22FE3B4DLL;
static const uint8_t g_275[5][3][6] = {{{0x46L,0UL,0x81L,0x6EL,0x81L,0UL},{253UL,0xDEL,0x81L,255UL,255UL,0x6EL},{0x96L,255UL,0UL,0UL,0x29L,0x0FL}},{{0UL,255UL,0x96L,0x3DL,255UL,9UL},{0x81L,0xDEL,253UL,0xDEL,0x81L,255UL},{0x81L,0UL,0x46L,0x3DL,0x6DL,9UL}},{{255UL,0x6EL,255UL,1UL,0x29L,9UL},{253UL,9UL,0xB7L,0UL,0x6DL,0UL},{0x29L,0x3DL,0x29L,0xDEL,0x6DL,0x0FL}},{{0xB7L,9UL,253UL,255UL,0x29L,0UL},{255UL,0x6EL,255UL,255UL,0x81L,0xDEL},{0xB7L,1UL,0x96L,0xDEL,0x96L,1UL}},{{0x29L,252UL,0x96L,0UL,255UL,0xDEL},{253UL,0UL,255UL,1UL,0UL,0UL},{255UL,0UL,253UL,0x68L,255UL,0x0FL}}};
static const uint32_t g_286 = 4294967295UL;
static int32_t g_335 = 3L;
static int32_t g_336 = 0xC427DAAFL;
static uint32_t g_339[4] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
static struct S0 g_385 = {1L};
static uint32_t *g_388[1][2] = {{&g_238,&g_238}};
static uint32_t **g_387 = &g_388[0][0];
static uint32_t ***g_386 = &g_387;
static int32_t **g_396 = &g_29;
static int32_t ***g_395 = &g_396;
static const uint16_t *g_411 = &g_10[2];
static const uint16_t **g_410 = &g_411;
static const uint16_t ** const *g_409 = &g_410;
static int64_t g_415 = 0x636AC42B4206B83DLL;
static uint64_t g_416 = 0x4EAA836820222B3BLL;
static uint64_t *g_477 = &g_252;
static uint64_t g_518 = 0UL;
static int8_t g_527 = 1L;
static int8_t g_570 = 0xC1L;
static int32_t g_571 = 4L;
static int32_t g_573 = (-1L);
static int16_t g_578 = 0xBAD3L;
static uint16_t g_579 = 65529UL;
static int32_t g_585[7][6][2] = {{{(-2L),0x615277C0L},{0xB2028901L,0xB2028901L},{1L,0x0FE221F9L},{0xDE84B6F2L,0x809C7B16L},{0L,(-5L)},{0x615277C0L,0L}},{{(-1L),0x712F3771L},{(-1L),0L},{0x615277C0L,(-5L)},{0L,0x809C7B16L},{0xDE84B6F2L,0x0FE221F9L},{1L,0xB2028901L}},{{0xB2028901L,0x615277C0L},{(-2L),(-1L)},{(-1L),0xB2028901L},{6L,(-6L)},{0xDE84B6F2L,0xB1477024L},{6L,(-5L)}},{{(-1L),6L},{(-1L),0x3DC3FD44L},{0x28727493L,0L},{(-1L),7L},{0L,0xB1477024L},{0xF103769DL,0x0FE221F9L}},{{6L,(-1L)},{0xB2028901L,(-1L)},{3L,(-1L)},{0xB2028901L,(-1L)},{6L,0x0FE221F9L},{0xF103769DL,0xB1477024L}},{{0L,7L},{(-1L),0L},{0x28727493L,0x3DC3FD44L},{(-1L),6L},{(-1L),(-5L)},{6L,0xB1477024L}},{{0xDE84B6F2L,(-6L)},{6L,0xB2028901L},{(-1L),(-1L)},{(-2L),0x615277C0L},{0xB2028901L,0xB2028901L},{1L,0x0FE221F9L}}};
static uint32_t g_586 = 1UL;
static struct S0 *g_613 = &g_385;
static struct S0 **g_612 = &g_613;
static uint64_t g_625 = 18446744073709551610UL;
static union U1 *g_684 = &g_35;
static union U1 **g_683 = &g_684;
static int32_t *g_726[2][1] = {{&g_571},{&g_571}};
static int32_t **g_725 = &g_726[1][0];
static int8_t g_755 = (-9L);
static uint16_t *g_813 = &g_10[2];
static uint16_t **g_812 = &g_813;
static uint16_t ***g_840 = &g_812;
static struct S0 **g_861 = &g_613;
static int32_t g_901 = (-1L);
static uint16_t g_909[1][3] = {{0x6641L,0x6641L,0x6641L}};
static int16_t g_969 = (-3L);
static uint32_t g_1011 = 0x5BAB98E7L;
static uint16_t g_1120[4][7] = {{0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL,0xA51CL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL}};
static uint16_t ****g_1156[2][4] = {{&g_840,&g_840,&g_840,&g_840},{&g_840,&g_840,&g_840,&g_840}};
static uint16_t **** const *g_1155 = &g_1156[0][3];
static union U1 g_1183 = {0};
static union U1 ***g_1195 = &g_683;
static union U1 ****g_1194[6] = {&g_1195,&g_1195,&g_1195,&g_1195,&g_1195,&g_1195};
static uint8_t **g_1202 = (void*)0;
static int64_t g_1224 = 1L;
static int16_t *g_1238 = &g_578;
static int16_t **g_1237 = &g_1238;
static int16_t ***g_1236 = &g_1237;
static const uint8_t g_1278 = 247UL;
static uint32_t g_1291[4] = {0UL,0UL,0UL,0UL};
static int8_t g_1439 = (-1L);
static uint32_t *g_1459 = &g_1291[0];
static struct S0 *g_1522 = &g_35.f3;
static int16_t g_1532 = 9L;
static int32_t g_1599 = 0x870F9B15L;
static uint32_t g_1603 = 18446744073709551613UL;
static int32_t *g_1606 = &g_30[2];
static uint8_t g_1747[5] = {0xFCL,0xFCL,0xFCL,0xFCL,0xFCL};
static uint16_t g_1775 = 65535UL;
static union U3 **g_1780 = &g_192;
static union U3 ** const *g_1779 = &g_1780;
static uint16_t g_1821 = 0xC827L;
static int8_t g_1842 = 0L;
static uint16_t g_1849 = 0x0AECL;
static int32_t g_1886[6] = {7L,7L,7L,7L,7L,7L};
static int16_t g_1949 = 0x7D7CL;



static struct S0  func_1(void);
static int32_t * func_2(uint16_t  p_3, struct S0  p_4, int16_t  p_5, union U1  p_6);
static int16_t  func_12(int8_t  p_13, int8_t  p_14, int32_t * p_15, int32_t * p_16);
static int32_t  func_58(int64_t * p_59, union U3  p_60, uint16_t * p_61, uint32_t  p_62);
static int64_t * func_63(union U2  p_64, int64_t * const  p_65);
static int64_t * const  func_67(uint16_t ** p_68, uint64_t  p_69, int32_t  p_70, uint16_t  p_71, int64_t * p_72);
static uint16_t ** func_73(int32_t  p_74, const union U1  p_75, uint16_t * p_76);
static int8_t  func_81(struct S0  p_82, union U3  p_83, const int32_t  p_84);




static struct S0  func_1(void)
{ 
    uint16_t *l_7 = (void*)0;
    uint16_t *l_8 = (void*)0;
    uint16_t *l_9 = &g_10[1];
    struct S0 l_11 = {-5L};
    uint16_t *l_24[1][2][5] = {{{&g_25[2],(void*)0,&g_25[2],(void*)0,&g_25[2]},{&g_25[2],&g_25[2],&g_25[2],&g_25[2],&g_25[2]}}};
    int64_t *l_26 = (void*)0;
    int64_t *l_27 = &g_28;
    int32_t l_2064 = (-1L);
    uint16_t l_2079 = 0x6DD1L;
    int32_t l_2080 = 0x6FBCA5A7L;
    int i, j, k;
    (**g_395) = func_2(((*l_9) = 9UL), l_11, func_12((safe_div_func_int32_t_s_s(g_19, (-1L))), g_19, ((safe_add_func_int64_t_s_s(l_11.f0, ((*l_27) = (safe_lshift_func_uint8_t_u_s((l_24[0][1][3] == (void*)0), g_25[1]))))) , g_29), &g_30[2]), g_35);
    (**g_725) = (safe_lshift_func_uint16_t_u_u((g_1747[1] <= (safe_rshift_func_uint16_t_u_s(4UL, (safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(l_2064, (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_10[1], (0xEE242F2EF0FFA9F0LL > ((-1L) ^ ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_2080 = l_2079), g_87.f4)), l_11.f0)), 0)), l_2064)) , 0x55D67176CBD41AF2LL))))), (*g_1238))), 0x6A0E5927L)))) , l_2080), 3)) , l_11.f0), g_212))))), (*****g_1155)));
    return l_11;
}



static int32_t * func_2(uint16_t  p_3, struct S0  p_4, int16_t  p_5, union U1  p_6)
{ 
    int16_t l_42 = 0xD4C3L;
    int32_t l_43 = 0x515ED761L;
    int32_t l_45[6];
    uint16_t l_48 = 0x1471L;
    int32_t *l_51[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int16_t l_52 = (-7L);
    int64_t l_53 = 0xB49816E0766B1C03LL;
    uint32_t l_54[4][1][2] = {{{4294967288UL,4294967295UL}},{{4294967288UL,4294967295UL}},{{4294967288UL,4294967295UL}},{{4294967288UL,4294967295UL}}};
    union U3 l_86[2][5][4] = {{{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}}},{{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}},{{0xBF38L},{-7L},{0xBF38L},{-7L}}}};
    const int8_t *l_1733 = &g_128;
    struct S0 l_1750 = {6L};
    uint32_t l_1764 = 0xB85FE992L;
    int8_t l_1819 = 8L;
    union U1 **l_1872 = (void*)0;
    uint32_t ****l_1882 = &g_386;
    uint32_t ** const *l_1885[6];
    uint32_t ** const **l_1884[6][3][4] = {{{&l_1885[1],&l_1885[4],&l_1885[1],&l_1885[4]},{&l_1885[1],&l_1885[1],(void*)0,&l_1885[2]},{(void*)0,(void*)0,&l_1885[4],(void*)0}},{{&l_1885[4],&l_1885[4],(void*)0,(void*)0},{&l_1885[4],&l_1885[4],(void*)0,&l_1885[1]},{&l_1885[2],(void*)0,&l_1885[4],&l_1885[4]}},{{&l_1885[2],(void*)0,(void*)0,&l_1885[4]},{&l_1885[4],&l_1885[4],(void*)0,&l_1885[1]},{&l_1885[4],&l_1885[4],&l_1885[4],&l_1885[4]}},{{(void*)0,&l_1885[4],(void*)0,(void*)0},{&l_1885[1],&l_1885[1],&l_1885[1],&l_1885[4]},{&l_1885[1],&l_1885[4],&l_1885[4],&l_1885[4]}},{{&l_1885[1],&l_1885[4],(void*)0,&l_1885[4]},{(void*)0,&l_1885[4],&l_1885[4],&l_1885[4]},{&l_1885[4],&l_1885[4],&l_1885[4],&l_1885[4]}},{{(void*)0,&l_1885[1],&l_1885[1],(void*)0},{&l_1885[4],&l_1885[4],&l_1885[0],&l_1885[4]},{&l_1885[4],&l_1885[4],&l_1885[4],&l_1885[1]}}};
    uint32_t l_1901 = 6UL;
    int32_t l_1920 = 0xB6A1353FL;
    uint64_t **l_1929 = &g_477;
    uint64_t ** const *l_1928[5] = {&l_1929,&l_1929,&l_1929,&l_1929,&l_1929};
    struct S0 l_2012 = {-8L};
    uint16_t l_2031 = 65535UL;
    int32_t l_2047 = 0xE81FBFCFL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_45[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_1885[i] = &g_387;
    for (p_3 = 0; (p_3 <= 2); p_3 += 1)
    { 
        int64_t l_44 = (-6L);
        int32_t l_46 = (-1L);
        int32_t l_47 = 0x86A8E7E6L;
        for (p_5 = 0; (p_5 <= 2); p_5 += 1)
        { 
            int32_t *l_36 = &g_30[p_3];
            int32_t *l_37 = &g_30[1];
            int32_t *l_38 = &g_30[p_3];
            int32_t *l_39 = &g_30[p_3];
            int32_t *l_40 = &g_30[p_3];
            int32_t *l_41[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_48--;
        }
    }
    l_54[0][0][1]--;
    return (**g_395);
}



static int16_t  func_12(int8_t  p_13, int8_t  p_14, int32_t * p_15, int32_t * p_16)
{ 
    uint16_t *l_32[2][2] = {{&g_25[0],&g_25[0]},{&g_25[0],&g_25[0]}};
    uint16_t **l_31[5];
    uint16_t *l_33[2];
    uint16_t *l_34 = &g_25[3];
    int i, j;
    for (i = 0; i < 5; i++)
        l_31[i] = &l_32[1][1];
    for (i = 0; i < 2; i++)
        l_33[i] = (void*)0;
    (*p_15) |= ((l_33[1] = &g_25[3]) != l_34);
    return p_13;
}



static int32_t  func_58(int64_t * p_59, union U3  p_60, uint16_t * p_61, uint32_t  p_62)
{ 
    int16_t l_1492 = 0x45E8L;
    union U3 * const *l_1498[2][6][3] = {{{(void*)0,&g_192,&g_192},{&g_192,&g_192,&g_192},{&g_192,(void*)0,&g_192},{&g_192,&g_192,&g_192},{&g_192,&g_192,&g_192},{&g_192,&g_192,&g_192}},{{&g_192,&g_192,&g_192},{&g_192,&g_192,&g_192},{&g_192,&g_192,&g_192},{&g_192,&g_192,&g_192},{(void*)0,&g_192,(void*)0},{&g_192,&g_192,&g_192}}};
    uint8_t *l_1499 = (void*)0;
    int32_t *l_1500 = &g_125;
    int32_t *l_1515 = (void*)0;
    int32_t *l_1516 = &g_585[6][0][0];
    struct S0 *l_1517 = &g_85;
    struct S0 **l_1518 = &g_613;
    struct S0 **l_1519 = &g_613;
    struct S0 **l_1520 = &g_613;
    struct S0 **l_1521[4][4] = {{&g_613,(void*)0,(void*)0,&g_613},{(void*)0,&g_613,&l_1517,&g_613},{(void*)0,&l_1517,(void*)0,&l_1517},{&g_613,&g_613,&l_1517,&l_1517}};
    uint8_t l_1523 = 0x95L;
    int32_t l_1528 = 3L;
    uint32_t l_1540 = 0xC01F0EDBL;
    uint8_t l_1567 = 0x77L;
    int32_t l_1579 = 0xCCFEF5CCL;
    int32_t l_1584[2];
    int8_t l_1587 = 1L;
    int16_t ****l_1628 = &g_1236;
    union U2 l_1655[6] = {{0xA2FCL},{0xA2FCL},{0xA2FCL},{0xA2FCL},{0xA2FCL},{0xA2FCL}};
    union U1 *l_1669 = &g_35;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1584[i] = 0xCA7FD2ECL;
    (*l_1500) = (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((g_19 = ((safe_lshift_func_uint8_t_u_u((l_1492 & (l_1492 > (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((((~(l_1498[0][1][1] == (void*)0)) >= (**g_396)) <= (l_1492 > ((***g_1236) = (***g_1236)))) < g_214), l_1492)), 7)))), 2)) , l_1492)) , l_1492), 0xFE1C49B3CE095831LL)), p_62));
    (*l_1500) = ((*l_1500) ^ (safe_add_func_int16_t_s_s(7L, (safe_lshift_func_int8_t_s_u((65535UL ^ (((((safe_div_func_uint16_t_u_u(((((((*p_59) = (*l_1500)) >= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((*l_1516) = (safe_rshift_func_uint8_t_u_s(1UL, 5))) , (l_1517 != (g_1522 = l_1517))), 3)), 0)), (*l_1500)))) | (*l_1500)) >= 9L) , (*l_1500)), 65528UL)) || l_1523) && 1L) , 18446744073709551615UL) , (*l_1500))), 0)))));
    for (g_1224 = 13; (g_1224 <= (-28)); g_1224 = safe_sub_func_int64_t_s_s(g_1224, 1))
    { 
        return p_60.f0;
    }
    for (g_1011 = 0; (g_1011 <= 19); g_1011++)
    { 
        int32_t *l_1529 = &g_125;
        int32_t *l_1530 = &l_1528;
        int32_t *l_1531 = (void*)0;
        int32_t *l_1533 = &g_125;
        int32_t *l_1534 = &g_335;
        int32_t *l_1535 = &g_87.f3;
        int32_t *l_1536 = &g_335;
        int32_t *l_1537 = &g_87.f3;
        int32_t *l_1538 = &g_262;
        int32_t *l_1539[7][4] = {{&g_335,&l_1528,&l_1528,&l_1528},{&g_335,&g_262,(void*)0,&l_1528},{(void*)0,&l_1528,(void*)0,&g_262},{&g_335,&l_1528,&l_1528,&l_1528},{&g_335,&g_262,(void*)0,&l_1528},{(void*)0,&l_1528,(void*)0,&g_262},{&g_335,&l_1528,&l_1528,&l_1528}};
        struct S0 l_1574 = {0xB5E70A6F33151F51LL};
        int64_t l_1576 = 0xD9BFDBDFB660BE96LL;
        int16_t l_1586 = 0xF1DAL;
        int32_t **l_1638 = &l_1529;
        struct S0 l_1678 = {1L};
        int i, j;
        l_1540++;
    }
    (*l_1500) |= (&g_190 == &g_190);
    return (**g_396);
}



static int64_t * func_63(union U2  p_64, int64_t * const  p_65)
{ 
    int32_t l_950 = 9L;
    int32_t **l_967 = &g_726[1][0];
    struct S0 l_968 = {0x8327557A5C5D5190LL};
    int8_t l_992 = 1L;
    int32_t l_1001 = (-10L);
    int32_t l_1002 = (-7L);
    int32_t l_1007[4][6] = {{0xDC075CC3L,0x1108BA76L,(-1L),0x6FCBC346L,0L,0x173B5B0FL},{0x173B5B0FL,0x5DD7D0DFL,0xBBB6751CL,0x5DD7D0DFL,0x173B5B0FL,0x1108BA76L},{0x173B5B0FL,0xDC075CC3L,0x5DD7D0DFL,0x6FCBC346L,(-2L),(-2L)},{0xDC075CC3L,0L,0L,0xDC075CC3L,0xBBB6751CL,(-2L)}};
    int32_t l_1009 = (-2L);
    int32_t l_1028 = 0x517AF7B7L;
    int32_t l_1029[3][4] = {{0xEA70FEC3L,(-9L),0xEA70FEC3L,(-9L)},{0xEA70FEC3L,(-9L),0xEA70FEC3L,(-9L)},{0xEA70FEC3L,(-9L),0xEA70FEC3L,(-9L)}};
    int32_t l_1079[7] = {0x76D77CBEL,0xBC134490L,0xBC134490L,0x76D77CBEL,0xBC134490L,0xBC134490L,0x76D77CBEL};
    int32_t l_1080 = (-1L);
    uint64_t l_1141 = 1UL;
    int16_t *l_1145 = &g_104[0];
    int32_t l_1148 = 0L;
    int32_t l_1185 = 0xFF8CF805L;
    union U1 *l_1191[4][2][2] = {{{&g_1183,&g_1183},{&g_1183,&g_1183}},{{&g_1183,&g_1183},{&g_1183,&g_1183}},{{&g_1183,&g_1183},{&g_1183,&g_1183}},{{&g_1183,&g_1183},{&g_1183,&g_1183}}};
    int8_t l_1204[2];
    uint64_t l_1207[3];
    uint32_t l_1213 = 4294967289UL;
    uint8_t l_1223 = 0xE1L;
    uint16_t l_1247 = 0x25B0L;
    uint8_t l_1265 = 0x85L;
    uint16_t ***l_1273 = &g_812;
    uint16_t l_1274 = 0x12CBL;
    const uint8_t *l_1277 = &g_1278;
    int64_t l_1289 = 0xEEBDF1CFB93C5617LL;
    int16_t **l_1333 = &g_1238;
    int16_t l_1353 = (-8L);
    const int32_t *l_1365 = &l_1029[0][3];
    const int32_t **l_1364[1][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}}};
    const int32_t ***l_1363 = &l_1364[0][0][3];
    uint32_t l_1406 = 4294967295UL;
    uint32_t * const **l_1410 = (void*)0;
    const uint16_t l_1418 = 0x6A1EL;
    union U1 ***l_1466 = &g_683;
    int64_t *l_1484 = &l_1289;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1204[i] = 0L;
    for (i = 0; i < 3; i++)
        l_1207[i] = 7UL;
lbl_1210:
    if ((safe_add_func_int8_t_s_s((((l_950 == l_950) , ((safe_rshift_func_uint8_t_u_s(((((((safe_mul_func_uint8_t_u_u((((*g_477) |= ((safe_mul_func_uint16_t_u_u((((*p_65) = (safe_rshift_func_uint8_t_u_s((((((p_64.f0 & (((0x77F06F95E65EC58ALL & (((safe_mul_func_int8_t_s_s(l_950, (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 == l_967), g_207)), (-6L))), (*g_411))))) < g_242) & p_64.f4)) , 1UL) , 255UL)) & p_64.f4) ^ (***g_386)) , p_64.f4) & p_64.f0), 0))) && 1L), 0x1D8FL)) || p_64.f0)) == 0x9E74941B83366BDALL), g_236)) , l_968) , p_64.f4) > g_969) > l_950) , 253UL), l_968.f0)) < 4L)) , p_64.f0), p_64.f4)))
    { 
        int32_t *l_970 = (void*)0;
        int32_t l_1000 = (-5L);
        int32_t l_1003 = 0xC1DDDCF7L;
        int32_t l_1004 = 0x0B2448B0L;
        int32_t l_1005 = 0xD3DDDA00L;
        int32_t l_1010 = 1L;
        int16_t l_1027 = 1L;
        int32_t l_1030 = 1L;
        int32_t l_1031[3];
        uint32_t l_1050 = 1UL;
        uint16_t l_1096 = 65530UL;
        int64_t *l_1121[5] = {&g_28,&g_28,&g_28,&g_28,&g_28};
        union U1 l_1132 = {0};
        int i;
        for (i = 0; i < 3; i++)
            l_1031[i] = 0xC7A0BFE2L;
        (*l_967) = (l_970 = (*g_396));
        for (g_181 = 0; (g_181 >= 0); g_181 -= 1)
        { 
            uint8_t l_971 = 1UL;
            union U1 l_975 = {0};
            union U3 l_980 = {-3L};
            int32_t l_989 = 0L;
            int32_t l_999[2];
            int8_t l_1128[3][2] = {{0xE7L,0xE7L},{0xE7L,0xE7L},{0xE7L,0xE7L}};
            struct S0 l_1137[7][6] = {{{1L},{-1L},{1L},{-1L},{1L},{-1L}},{{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L}},{{1L},{-1L},{1L},{-1L},{1L},{-1L}},{{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L}},{{1L},{-1L},{1L},{-1L},{1L},{-1L}},{{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L},{0xB20155854A23DBCFLL},{-1L}},{{1L},{-1L},{1L},{-1L},{1L},{-1L}}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_999[i] = 0x7FD55275L;
            if (l_971)
            { 
                int16_t *l_973[3][2][4] = {{{&g_969,&g_969,&g_104[0],&g_969},{&g_969,(void*)0,(void*)0,&g_969}},{{(void*)0,&g_969,(void*)0,&g_104[0]},{(void*)0,(void*)0,&g_969,(void*)0}},{{(void*)0,&g_104[0],&g_104[0],(void*)0},{&g_104[0],(void*)0,&g_104[0],&g_104[0]}}};
                int16_t **l_972 = &l_973[2][0][3];
                int16_t ***l_974 = &l_972;
                int i, j, k;
                for (g_87.f4 = 0; (g_87.f4 <= 3); g_87.f4 += 1)
                { 
                    int i, j;
                    if (p_64.f4)
                        break;
                    (*l_967) = g_388[g_181][(g_181 + 1)];
                    return &g_258;
                }
                (*l_974) = l_972;
            }
            else
            { 
                uint8_t *l_988[1];
                int32_t l_990 = (-10L);
                int32_t l_1006[7];
                int32_t *l_1021 = &g_335;
                int32_t *l_1024 = &l_999[1];
                int32_t *l_1069 = (void*)0;
                int32_t *l_1070 = &l_1005;
                int32_t *l_1071 = &l_1029[2][1];
                int32_t *l_1072 = &g_87.f3;
                int32_t *l_1073 = (void*)0;
                int32_t *l_1074 = &l_1006[1];
                int32_t *l_1075 = &l_990;
                int32_t *l_1076 = &l_989;
                int32_t *l_1077 = &l_1006[1];
                int32_t *l_1078[3][6][7] = {{{&l_1010,&l_1010,&l_1031[1],&l_1010,&l_1010,&l_1031[1],&l_1010},{&g_335,&g_262,&g_262,&g_335,&g_262,&g_262,&g_335},{&g_125,&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125,&l_1010},{&g_262,&g_335,&g_262,&g_262,&g_335,&g_262,&g_262}},{{&l_1010,&l_1010,&l_1031[1],&l_1010,&l_1010,&l_1031[1],&l_1010},{&g_335,&g_262,&g_262,&g_335,&g_262,&g_262,&g_335},{&g_125,&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125,&l_1010},{&g_262,&g_335,&g_262,&g_262,&g_335,&g_262,&g_262}},{{&l_1010,&l_1010,&l_1031[1],&l_1010,&l_1010,&l_1031[1],&l_1010},{&g_335,&g_262,&g_262,&g_335,&g_262,&g_262,&g_335},{&g_125,&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&l_1010,&g_125,&g_125,&l_1010,&g_125,&g_125,&l_1010},{&g_262,&g_335,&g_262,&g_262,&g_335,&g_262,&g_262}}};
                uint8_t l_1081 = 0x25L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_988[i] = &l_971;
                for (i = 0; i < 7; i++)
                    l_1006[i] = 0xEEBEE9A1L;
                if (((l_975 , (p_64 , (safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_980 , g_115), (+g_527))), (**g_812))))) < (safe_lshift_func_uint16_t_u_u((g_25[(g_181 + 1)] = ((safe_lshift_func_uint8_t_u_u((l_989 = (((safe_mul_func_int16_t_s_s((-6L), p_64.f0)) <= p_64.f4) != p_64.f0)), g_275[3][2][0])) && l_971)), 6))))
                { 
                    l_990 = p_64.f0;
                }
                else
                { 
                    uint32_t l_991 = 18446744073709551615UL;
                    int32_t *l_993 = (void*)0;
                    int32_t *l_994 = &l_990;
                    int32_t *l_995 = &g_87.f3;
                    int32_t *l_996 = &g_125;
                    int32_t *l_997 = (void*)0;
                    int32_t *l_998[1];
                    int32_t l_1008[4][1][3] = {{{(-1L),(-1L),(-1L)}},{{8L,8L,8L}},{{(-1L),(-1L),(-1L)}},{{8L,8L,8L}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_998[i] = &g_125;
                    l_992 ^= ((l_991 |= p_64.f0) | p_64.f0);
                    g_1011++;
                }
                (*l_1024) = (!(safe_add_func_uint8_t_u_u(p_64.f0, (safe_lshift_func_int8_t_s_s(((g_19 = (((*l_1021) |= ((p_64 , ((((*g_477)--) ^ (*p_65)) >= (*l_970))) > 1UL)) & l_971)) <= (safe_add_func_uint64_t_u_u(l_980.f2, g_28))), l_1006[1])))));
                if (p_64.f0)
                { 
                    int8_t l_1025 = (-4L);
                    int32_t *l_1026[7][1][4] = {{{&l_1005,&l_1005,&l_1003,&l_1004}},{{&l_1000,&l_1001,&l_1000,&l_1003}},{{&l_1000,&l_1003,&l_1003,&l_1000}},{{&l_1005,&l_1003,&l_1004,&l_1003}},{{&l_1003,&l_1001,&l_1004,&l_1004}},{{&l_1005,&l_1005,&l_1003,&l_1004}},{{&l_1000,&l_1001,&l_1000,&l_1003}}};
                    int64_t l_1032 = 0xD976AC297CB16A02LL;
                    uint32_t l_1033[4];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1033[i] = 0xB915D620L;
                    (*l_1024) = p_64.f4;
                    l_1002 ^= p_64.f0;
                    if ((*l_970))
                        break;
                    l_1033[1]--;
                }
                else
                { 
                    int32_t *l_1048 = &l_1028;
                    int32_t *l_1049[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1049[i] = &l_1006[2];
                    (*g_612) = &l_968;
                    l_1000 |= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((((**g_396) && (~((safe_mod_func_int32_t_s_s(p_64.f4, (**g_387))) && (*l_1024)))) == (((safe_sub_func_uint16_t_u_u(((~(safe_mod_func_uint8_t_u_u((((l_975 , p_64.f0) == (-9L)) | p_64.f4), 0xF7L))) < (-1L)), p_64.f0)) >= g_573) < p_64.f4)) <= 0UL) , p_64.f4) != 1L), g_571)), 5)) && 0xF295L);
                    l_1050--;
                    (*l_1021) ^= (-8L);
                    (*l_1021) = (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s((((*g_477) &= 18446744073709551613UL) != (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(1L, 4)) && (safe_div_func_int32_t_s_s(0L, (*l_970)))), 7))), l_992)) ^ ((safe_sub_func_uint8_t_u_u((9UL >= (safe_lshift_func_uint16_t_u_u((*g_813), p_64.f0))), 255UL)) , (**g_396))) , (void*)0) == &l_1024) & 0x2E62774A83B00F8ELL), (-2L))), (*l_1048)));
                }
                (**g_861) = l_968;
                --l_1081;
            }
            for (g_257 = 6; (g_257 >= 0); g_257 -= 1)
            { 
                int16_t *l_1093 = &g_104[0];
                int32_t *l_1097 = (void*)0;
                int8_t *l_1119 = &l_992;
                int i;
                l_1028 &= (safe_mul_func_uint8_t_u_u((~(-1L)), (0xD6DB5C20L <= (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(l_1079[g_257], (safe_mod_func_int16_t_s_s(((((0x9F975D24L != (((*l_1093) = g_286) || ((safe_lshift_func_int8_t_s_u(((p_64.f0 | 0x94AAL) == (*l_970)), l_989)) > l_1096))) ^ 1L) != p_64.f4) > (*p_65)), p_64.f4)))) <= 0x1E2BL), 0x30965595L)))));
                if ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((*l_970), 7)), (p_64.f4 || ((((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((l_989 = (g_10[1] && ((safe_mod_func_int32_t_s_s(5L, ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((0x6B46B1C483EECF12LL || (1L & (safe_mod_func_int8_t_s_s(((*l_1119) |= (~(((((*p_65) <= (*p_65)) == g_901) == l_999[1]) <= 65527UL))), 0x75L)))), p_64.f0)) != 65533UL), g_335)), p_64.f4)), 5)) | p_64.f0))) > g_1120[1][3]))) , (**g_387)) | 0xBF45D0D4L), l_980.f2)), 1L)) <= p_64.f4) && 0x2BL) ^ p_64.f0)))))
                { 
                    return l_1121[2];
                }
                else
                { 
                    union U1 l_1131 = {0};
                    int32_t l_1135 = (-9L);
                    int32_t *l_1136 = &l_1005;
                    (*l_1136) &= ((l_999[0] && ((p_64.f0 >= (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_1128[0][1] || (safe_div_func_int32_t_s_s((((*l_1093) = ((g_87 , (l_1132 = ((**g_683) = l_1131))) , ((safe_sub_func_uint64_t_u_u((l_1135 , ((((p_64.f4 < p_64.f0) , (*l_970)) && l_980.f0) && p_64.f4)), g_214)) <= g_252))) != p_64.f0), 0x0D069CB2L))), g_10[1])), p_64.f4)), 2L))) <= 0x9EB1L)) , 0x53526A16L);
                    (**g_861) = ((&g_258 == (void*)0) , l_1137[5][2]);
                }
                return &g_258;
            }
            (**g_861) = l_1137[5][2];
        }
        (*l_967) = ((((**g_612) = (**g_861)) , l_968) , (*g_396));
        for (g_336 = 0; (g_336 != 8); g_336 = safe_add_func_int8_t_s_s(g_336, 2))
        { 
            int32_t *l_1140[3][1][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1140[i][j][k] = &l_1029[0][3];
                }
            }
            l_1141++;
        }
    }
    else
    { 
        int64_t *l_1144 = &g_181;
        return l_1144;
    }
    if ((((*l_1145) = p_64.f4) >= (safe_lshift_func_uint8_t_u_u(l_1148, 0))))
    { 
        int32_t *l_1151[3][1];
        uint16_t ****l_1192 = &g_840;
        uint8_t l_1193 = 0x14L;
        struct S0 l_1215 = {6L};
        int32_t *l_1225 = &g_262;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1151[i][j] = (void*)0;
        }
        for (g_336 = 1; (g_336 >= 0); g_336 -= 1)
        { 
            int32_t *l_1149 = (void*)0;
            int32_t *l_1150[3];
            union U2 l_1152 = {1UL};
            union U3 l_1184 = {0x8D48L};
            struct S0 l_1198 = {-10L};
            uint64_t l_1199 = 0x847759904F4841FBLL;
            int i;
            for (i = 0; i < 3; i++)
                l_1150[i] = &g_125;
            l_1001 &= l_1079[g_336];
            for (l_968.f0 = 1; (l_968.f0 >= 0); l_968.f0 -= 1)
            { 
                uint16_t ****l_1154 = &g_840;
                uint16_t *****l_1153[7][4] = {{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154},{&l_1154,&l_1154,&l_1154,&l_1154}};
                int32_t l_1157 = 1L;
                int32_t l_1161[6][3] = {{0x5C5C91B5L,4L,0xD86C158FL},{0x5C5C91B5L,(-3L),0x5C5C91B5L},{0x5C5C91B5L,2L,4L},{0x5C5C91B5L,4L,0xD86C158FL},{0x5C5C91B5L,(-3L),0x5C5C91B5L},{0x5C5C91B5L,2L,4L}};
                uint8_t l_1162 = 0x09L;
                int i, j;
                (*l_967) = l_1151[0][0];
                l_1157 |= ((l_1152 , l_1153[3][0]) == (g_1155 = g_1155));
                for (l_1009 = 1; (l_1009 >= 0); l_1009 -= 1)
                { 
                    int64_t l_1158[6][5] = {{(-8L),0x2415ECB2CF8E3939LL,(-8L),(-5L),(-5L)},{1L,0x90AD17C55A7AE21DLL,1L,5L,5L},{(-8L),0x2415ECB2CF8E3939LL,(-8L),(-5L),(-5L)},{1L,0x90AD17C55A7AE21DLL,1L,5L,5L},{(-8L),0x2415ECB2CF8E3939LL,(-8L),(-5L),(-5L)},{1L,0x90AD17C55A7AE21DLL,1L,5L,5L}};
                    int32_t l_1159[6];
                    int32_t l_1160[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int16_t *l_1171 = &g_578;
                    uint16_t l_1172 = 0UL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1159[i] = (-2L);
                    l_1162++;
                    if (g_585[(g_336 + 2)][(l_968.f0 + 2)][l_1009])
                        continue;
                    p_64.f3 = (((g_182 || ((*l_1171) = (safe_div_func_uint8_t_u_u(((l_1159[4] = p_64.f4) < (g_182 ^ (*p_65))), (((-1L) | (l_1160[1] |= (*g_29))) || (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((*l_1145) = ((p_64.f4 , 0x19L) , g_238)), p_64.f4)), 2))))))) > p_64.f0) , 1L);
                    if (p_64.f0)
                        break;
                    ++l_1172;
                }
            }
            for (g_238 = 0; (g_238 <= 6); g_238 += 1)
            { 
                uint8_t l_1181[7][2];
                union U1 *l_1182 = &g_1183;
                int32_t l_1186[2];
                uint64_t l_1187 = 0xE9F07E46F7FB0C84LL;
                int32_t l_1188 = (-1L);
                int8_t l_1206 = 0xC6L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1181[i][j] = 1UL;
                }
                for (i = 0; i < 2; i++)
                    l_1186[i] = 0xEEC634B9L;
                l_1186[0] ^= (safe_div_func_int32_t_s_s((l_1185 = (safe_rshift_func_uint8_t_u_s(250UL, ((((safe_mul_func_uint16_t_u_u(l_1181[0][0], ((***g_840) = 0x4CC2L))) == ((g_190 , ((*l_1182) = ((**g_683) = (**g_683)))) , ((*g_477) || (((l_1184 , 0x6DBAL) >= g_625) && 0L)))) >= p_64.f4) == p_64.f0)))), p_64.f4));
                if (l_1187)
                    continue;
                if ((**g_396))
                    continue;
                l_1188 &= (*g_29);
                if ((safe_rshift_func_int8_t_s_s(((*g_683) != ((**g_612) , l_1191[1][0][1])), ((void*)0 != l_1192))))
                { 
                    union U1 *****l_1196 = &g_1194[3];
                    int i;
                    l_1193 = 0x5B774174L;
                    (*l_1196) = g_1194[3];
                    if (l_1187)
                        continue;
                }
                else
                { 
                    struct S0 l_1197 = {7L};
                    uint8_t ***l_1203 = &g_1202;
                    int32_t l_1205[5][3][1] = {{{0x10B7749AL},{0L},{0x10B7749AL}},{{0L},{0x10B7749AL},{0L}},{{0x10B7749AL},{0L},{0x10B7749AL}},{{0L},{0x10B7749AL},{0L}},{{0x10B7749AL},{0L},{0x10B7749AL}}};
                    int i, j, k;
                    l_1198 = ((**g_861) = l_1197);
                    ++l_1199;
                    (*l_1203) = g_1202;
                    p_64.f3 = l_1204[1];
                    l_1207[0]--;
                }
                for (g_87.f2 = 6; (g_87.f2 >= 2); g_87.f2 -= 1)
                { 
                    int i, j, k;
                    if (g_585[g_87.f2][(g_336 + 2)][g_336])
                        break;
                }
            }
            if (l_1009)
                goto lbl_1210;
            for (g_257 = 6; (g_257 >= 0); g_257 -= 1)
            { 
                uint64_t l_1214 = 0xE70BD4D509E1D423LL;
                uint16_t **l_1220 = &g_813;
                uint8_t *l_1221 = (void*)0;
                uint8_t *l_1222 = &l_1193;
                l_1214 ^= (l_1213 ^= (safe_rshift_func_int8_t_s_u(p_64.f0, 2)));
                if (l_1213)
                    goto lbl_1210;
                g_1224 = (((*g_477) = ((l_1215 , (p_64.f4 || (safe_mod_func_uint32_t_u_u((((((((g_1120[3][5] == (((safe_add_func_int64_t_s_s(((*p_65) = (((*l_1222) |= (((l_1002 &= (p_64.f3 = 0xE8627C85L)) , l_1220) != (**l_1192))) & g_335)), (*g_477))) < g_214) & (**g_387))) & (**g_396)) == (*g_477)) , l_1223) | g_339[0]) , 248UL) , 0xC8DEECB2L), l_1214)))) ^ l_1223)) < g_10[2]);
                for (g_207 = 0; (g_207 <= 1); g_207 += 1)
                { 
                    return &g_415;
                }
            }
        }
        (*l_967) = l_1225;
        for (g_85.f0 = (-21); (g_85.f0 > (-23)); g_85.f0 = safe_sub_func_uint16_t_u_u(g_85.f0, 4))
        { 
            int16_t ****l_1239 = &g_1236;
            int32_t l_1243 = 0L;
            uint8_t *l_1246 = &g_19;
            uint32_t l_1248 = 4294967295UL;
            (*l_1225) |= ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((0x13L >= (safe_div_func_uint8_t_u_u(((*l_1246) = ((p_64.f3 = (((*l_1239) = g_1236) == (((0xAB93167FL && ((!((safe_sub_func_uint64_t_u_u(l_1243, g_260)) , 0x2B42AF49L)) && (safe_rshift_func_int16_t_s_u(((**g_1237) = (-1L)), 5)))) > l_1207[0]) , &g_1237))) >= 0x6690B714L)), l_1247))) < 1UL), 0x1EL)), 10)), (***g_840))) <= l_1243) == 0x23L) , l_1248);
        }
    }
    else
    { 
        uint32_t l_1258[4];
        union U1 l_1263 = {0};
        struct S0 l_1271 = {0x2725546E97406791LL};
        const uint8_t *l_1275 = (void*)0;
        int32_t l_1279 = 8L;
        int32_t l_1287 = 0xF1454619L;
        int32_t l_1290 = 0x613C5858L;
        int16_t **l_1334 = &l_1145;
        uint16_t l_1335[4];
        int32_t l_1448 = 0x70AF0D73L;
        uint64_t l_1449 = 18446744073709551615UL;
        int64_t *l_1452 = &g_415;
        uint16_t ***l_1454 = &g_812;
        union U1 ****l_1483 = &l_1466;
        int i;
        for (i = 0; i < 4; i++)
            l_1258[i] = 0x624B8C90L;
        for (i = 0; i < 4; i++)
            l_1335[i] = 65535UL;
        if (((**g_410) == ((safe_div_func_uint64_t_u_u(0UL, (safe_div_func_uint32_t_u_u(((!1L) , (safe_lshift_func_int16_t_s_s(((g_190.f0 & (safe_sub_func_int64_t_s_s((*p_65), ((**g_1195) == l_1191[1][1][1])))) <= l_1080), 12))), l_1258[2])))) , p_64.f4)))
        { 
            uint32_t * const **l_1262 = (void*)0;
            uint32_t * const ***l_1261 = &l_1262;
            uint16_t *l_1266 = &g_87.f4;
            int32_t *l_1267 = &l_1029[0][3];
            uint8_t *l_1268[1];
            const uint8_t **l_1276[6];
            int32_t l_1288[7][5] = {{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L},{1L,0xC313ADA7L,0xCEB9E3DEL,0xCEB9E3DEL,0xC313ADA7L}};
            union U3 * const *l_1344 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1268[i] = &g_19;
            for (i = 0; i < 6; i++)
                l_1276[i] = &l_1275;
            (*l_1267) = (safe_mod_func_int16_t_s_s((p_64.f4 >= (((*l_1261) = (void*)0) != (void*)0)), ((*l_1266) = ((l_1263 , l_968) , ((**g_812) ^= (safe_unary_minus_func_uint8_t_u(((l_1002 = p_64.f0) , l_1265))))))));
lbl_1345:
            if (((g_570 , 2UL) < ((((l_1268[0] != (l_1277 = (l_1275 = ((safe_rshift_func_int16_t_s_s((***g_1236), ((l_1274 |= (((l_968 = l_1271) , l_1271.f0) || (+(l_1273 != (**g_1155))))) == 1UL))) , l_1275)))) >= 4294967295UL) < (*g_29)) , (*****g_1155))))
            { 
                int32_t *l_1280 = &l_1009;
                int32_t *l_1281 = &g_262;
                int32_t *l_1282 = &l_1029[0][3];
                int32_t *l_1283 = &l_1185;
                int32_t *l_1284 = (void*)0;
                int32_t *l_1285 = &l_1001;
                int32_t *l_1286[2][6] = {{&g_262,&g_571,&g_262,&g_262,&g_571,&g_262},{&g_262,&g_571,&g_262,&g_262,&g_571,&g_262}};
                int i, j;
                ++g_1291[1];
            }
            else
            { 
                int64_t *l_1296 = &g_385.f0;
                for (p_64.f0 = 0; (p_64.f0 != 8); p_64.f0 = safe_add_func_int32_t_s_s(p_64.f0, 8))
                { 
                    l_1271 = (**g_861);
                }
                return l_1296;
            }
            for (g_242 = (-12); (g_242 >= 60); ++g_242)
            { 
                uint8_t **l_1305 = &l_1268[0];
                int32_t l_1306[5][5] = {{0x96E011BAL,0x3B0E8E21L,0x08D4F442L,7L,(-10L)},{0x08D4F442L,0x3B0E8E21L,0x96E011BAL,0x96E011BAL,0x3B0E8E21L},{0xF3F21FC3L,0x0E825066L,0x5424695BL,0x3B0E8E21L,(-10L)},{0x0E825066L,0x96E011BAL,0x5424695BL,(-7L),0x5424695BL},{(-10L),(-10L),0x96E011BAL,0xF3F21FC3L,0L}};
                const uint16_t l_1307 = 0xC5BAL;
                int32_t *l_1308 = &g_125;
                uint32_t * const ** const *l_1314 = &l_1262;
                union U3 l_1342 = {-3L};
                int i, j;
                (*l_1308) |= (g_87 , (safe_sub_func_int32_t_s_s((((((((safe_lshift_func_int8_t_s_u(((p_64.f4 != (l_1287 | (((safe_mul_func_uint8_t_u_u(((l_1258[0] , g_1202) == (g_180 , l_1305)), (*l_1267))) ^ (-1L)) && l_1306[2][2]))) > (*l_1267)), l_1306[2][2])) < p_64.f0) , 1L) != 0x611D99735D5FD502LL) && 0x7765A5185739D716LL) != p_64.f4) < l_1307), (**g_396))));
                if ((*l_1308))
                { 
                    uint64_t l_1309 = 0x1C0F9D9092D5872ALL;
                    ++l_1309;
                }
                else
                { 
                    (*l_1267) |= ((void*)0 != &l_1267);
                    if (g_236)
                        goto lbl_1210;
                    if (p_64.f4)
                        continue;
                }
                l_1267 = ((safe_lshift_func_int16_t_s_u((((((l_1314 == l_1314) , ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((~(***g_409)) < (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((l_1258[3] > (*l_1267)), g_570)), (safe_add_func_uint32_t_u_u((+(((*g_1236) = l_1333) != l_1334)), l_1335[0])))), p_64.f4))), 4)), (*l_1267))) , p_64.f0), p_64.f0)), 7L)) ^ 5L)) , (void*)0) != (void*)0) , 0x97DDL), l_1258[1])) , &l_1290);
                (*l_1308) = p_64.f4;
                (*l_967) = ((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != &l_1275), (**g_1237))), 1)) > (0L > (safe_mul_func_int8_t_s_s(8L, p_64.f4)))) < (l_1342 , 0UL)) , &l_1288[1][1]);
            }
            if ((safe_unary_minus_func_uint16_t_u((65533UL <= (l_1344 == (void*)0)))))
            { 
                int32_t l_1346 = 0L;
                uint32_t l_1348 = 0x5E4F90D4L;
                (**g_861) = (**g_861);
                if (p_64.f4)
                { 
                    if (p_64.f4)
                        goto lbl_1345;
                }
                else
                { 
                    int32_t *l_1347[3][5];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1347[i][j] = &g_262;
                    }
                    l_1346 ^= 0xDDFDEAA2L;
                    l_1348--;
                    (*l_1267) |= ((safe_lshift_func_int16_t_s_s((((*g_1238) |= (l_1346 == l_1353)) != ((&l_1273 == (*g_1155)) <= ((*****g_1155) , (((*g_477) = (safe_add_func_uint16_t_u_u(((*g_813)++), (p_64.f0 , l_1346)))) | (*p_65))))), p_64.f0)) , p_64.f4);
                    return &g_415;
                }
            }
            else
            { 
                uint64_t **l_1362 = &g_477;
                const int32_t ****l_1366 = &l_1363;
                int32_t l_1367 = 0L;
                int32_t *l_1368 = &l_1028;
                uint64_t ***l_1369 = &l_1362;
                uint64_t **l_1371 = &g_477;
                uint64_t ***l_1370 = &l_1371;
                (*l_1368) = ((safe_rshift_func_uint16_t_u_s((((*l_1366) = ((0xFB71L != (safe_lshift_func_int16_t_s_s(((*l_1267) = ((*p_65) || ((g_1291[1] , (((*l_1362) = (void*)0) != &g_242)) != g_182))), l_1287))) , l_1363)) != (void*)0), (**g_1237))) || l_1367);
                (*l_1370) = ((*l_1369) = &g_477);
            }
        }
        else
        { 
            int32_t l_1373 = 0xBDB37BE1L;
            int16_t **l_1384 = &l_1145;
            uint32_t * const ***l_1411 = &l_1410;
            int32_t *l_1415 = &l_1029[1][0];
            int32_t l_1424 = 4L;
            int32_t l_1429 = 0x8575687CL;
            int32_t l_1434 = 0x16E8B806L;
            int32_t l_1442 = 0xF521D062L;
            int32_t l_1447 = 5L;
            uint8_t **l_1467 = (void*)0;
            int32_t l_1474 = 0x84CF325BL;
            if (p_64.f4)
            { 
                (**g_861) = l_1271;
            }
            else
            { 
                int32_t *l_1372[6];
                struct S0 l_1391 = {0x28F44B48F5C0515BLL};
                uint8_t *l_1392 = (void*)0;
                uint8_t *l_1393[7];
                int8_t l_1394 = 0x16L;
                int i;
                for (i = 0; i < 6; i++)
                    l_1372[i] = &l_1028;
                for (i = 0; i < 7; i++)
                    l_1393[i] = &g_19;
                l_1373 |= (*l_1365);
                l_1373 = (l_1279 <= (g_415 = (safe_div_func_uint64_t_u_u(p_64.f4, (p_64.f4 && (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_968 , ((safe_mul_func_uint16_t_u_u(((*****g_1155) = ((((safe_mod_func_uint16_t_u_u(((&l_968 == (g_87 , &l_1271)) && p_64.f4), l_1373)) > p_64.f4) , l_1384) == (void*)0)), 0xBF41L)) >= (**g_1237))) < (*p_65)), p_64.f4)), p_64.f0)))))));
lbl_1407:
                l_1287 &= ((((*g_29) & ((*l_1365) >= (safe_rshift_func_uint8_t_u_u((l_1394 = (safe_rshift_func_int8_t_s_u((l_1373 != ((((*p_65) = (safe_rshift_func_uint16_t_u_s(((**g_812) = (l_1391 , ((g_190.f2 ^ ((-1L) < (((*p_65) == (*p_65)) != 0x0906AB05L))) > (-1L)))), 10))) != 7L) == l_1279)), p_64.f0))), 2)))) > p_64.f0) || (*l_1365));
                l_1373 = (p_64.f3 = ((p_64.f0 | ((0xB4C36A26F6FF96C7LL > 0xAFB485EE560ACD31LL) | (safe_lshift_func_int16_t_s_s(((*l_1145) = ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(0xEDA0L, (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((!p_64.f0) | (p_64.f4 > g_182)), p_64.f4)), l_1406)))), (*g_477))) | p_64.f0)), 14)))) != 1L));
                if (g_260)
                    goto lbl_1407;
            }
            if ((safe_mul_func_int8_t_s_s((((((*l_1411) = l_1410) != &g_387) || 0x45BA1247L) >= (255UL == (g_286 ^ g_190.f0))), (safe_mod_func_int16_t_s_s((*g_1238), p_64.f0)))))
            { 
                int32_t *l_1414 = &l_1002;
                (*l_967) = (*g_396);
                (*l_967) = l_1414;
                for (g_415 = 0; (g_415 >= 0); g_415 -= 1)
                { 
                    int i;
                    if (g_104[g_415])
                        break;
                    l_1415 = (*g_396);
                }
                l_1414 = (*g_396);
                l_1414 = (*g_396);
            }
            else
            { 
                int16_t l_1440[3];
                int32_t l_1441 = 0xB9C762CBL;
                int32_t l_1443 = 0xCD40322FL;
                int32_t l_1444 = 0xFA929452L;
                int32_t l_1445 = 0x6923B432L;
                int32_t l_1446 = 8L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1440[i] = 0xD43CL;
                (*l_1415) |= (safe_lshift_func_int8_t_s_s(p_64.f0, l_1418));
                if ((safe_mul_func_int16_t_s_s(p_64.f0, ((((*p_65) , ((+0UL) > (((((0xB889L ^ ((((void*)0 == (**g_386)) == (safe_div_func_int32_t_s_s(p_64.f0, (-1L)))) , (**g_812))) && 0L) , (*l_1415)) != p_64.f0) != l_1335[0]))) <= 3UL) < (*g_29)))))
                { 
                    int32_t *l_1425 = &g_125;
                    int32_t *l_1426 = (void*)0;
                    int32_t *l_1427 = &g_125;
                    int32_t *l_1428 = &l_1009;
                    int32_t *l_1430 = (void*)0;
                    int32_t *l_1431 = (void*)0;
                    int32_t *l_1432 = &l_1287;
                    int32_t *l_1433 = &l_1279;
                    int32_t *l_1435 = &l_1029[1][3];
                    int32_t *l_1436 = &l_1279;
                    int32_t *l_1437 = (void*)0;
                    int32_t *l_1438[5][2][3] = {{{(void*)0,&l_1029[0][1],(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_1029[0][1],(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_1029[0][1],(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_1029[0][1],(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_1029[0][1],(void*)0},{(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    --l_1449;
                    return &g_258;
                }
                else
                { 
                    l_1448 ^= ((*l_1415) = (*l_1415));
                    return l_1452;
                }
            }
            if ((!((**g_1155) != l_1454)))
            { 
                uint8_t *l_1471 = &l_1223;
                uint8_t * const *l_1470 = &l_1471;
                int32_t l_1480 = 0x4301DEB0L;
                if ((safe_div_func_uint32_t_u_u(((p_64.f0 <= (*l_1415)) >= (safe_mod_func_int8_t_s_s((g_1459 == &l_1258[3]), p_64.f0))), (safe_rshift_func_uint16_t_u_s((p_64.f4 || (((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((l_1335[0] , (*g_477)), (*g_477))), (*p_65))) | 0L) >= (**g_396))), 2)))))
                { 
                    uint8_t ***l_1468 = (void*)0;
                    uint8_t ***l_1469 = &l_1467;
                    const int32_t l_1475 = 0xA48534C1L;
                    int32_t *l_1476 = &g_335;
                    (*l_1476) |= ((((((void*)0 != l_1466) <= p_64.f4) > ((l_1474 = ((((((*l_1469) = l_1467) != l_1470) , (*l_1415)) && (((safe_lshift_func_int16_t_s_s((***g_1236), p_64.f4)) , (-8L)) && 1L)) || g_969)) <= (*g_29))) && 0UL) <= l_1475);
                }
                else
                { 
                    uint64_t l_1481 = 1UL;
                    l_1287 ^= (*g_29);
                    l_1481 = (p_64.f4 , (+(safe_mod_func_uint16_t_u_u(p_64.f4, ((g_1224 = l_1480) && 0xDB4C1D496407748CLL)))));
                }
            }
            else
            { 
                union U2 *l_1482[4] = {&g_87,&g_87,&g_87,&g_87};
                int i;
                (**g_612) = l_968;
                l_1482[3] = ((***l_1466) , &p_64);
            }
        }
        l_1483 = &l_1466;
    }
    return &g_28;
}



static int64_t * const  func_67(uint16_t ** p_68, uint64_t  p_69, int32_t  p_70, uint16_t  p_71, int64_t * p_72)
{ 
    int32_t *l_922 = &g_335;
    union U1 *l_923 = &g_35;
    int16_t *l_928[3][3] = {{&g_104[0],&g_578,&g_104[0]},{&g_578,&g_578,&g_578},{&g_104[0],&g_578,&g_104[0]}};
    uint8_t *l_943 = &g_19;
    int32_t l_944 = 0x5D8B55BEL;
    uint32_t ***l_945[7][4] = {{(void*)0,(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387,&g_387},{&g_387,&g_387,&g_387,&g_387},{&g_387,&g_387,(void*)0,&g_387},{&g_387,(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387,&g_387}};
    int8_t l_946[6];
    int64_t * const l_947 = &g_385.f0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_946[i] = 0L;
    l_922 = l_922;
    l_923 = (*g_683);
    l_944 = ((safe_mod_func_int8_t_s_s(((*l_922) = (safe_sub_func_int64_t_s_s((l_928[1][0] == l_928[1][0]), (((*l_943) = (((*g_411) ^ (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_257, 14)), 1)), (safe_div_func_int32_t_s_s((p_71 , (*l_922)), (safe_add_func_int64_t_s_s((((safe_add_func_int8_t_s_s((*l_922), g_275[1][0][3])) <= p_71) == (**g_812)), (*l_922))))))), (*l_922)))) < p_71)) >= 248UL)))), 0x9CL)) != p_69);
    (*g_683) = (l_923 = (((*p_72) || (l_945[5][2] == &g_387)) , l_923));
    (*l_922) &= (l_946[2] = (**g_396));
    return l_947;
}



static uint16_t ** func_73(int32_t  p_74, const union U1  p_75, uint16_t * p_76)
{ 
    int32_t ****l_482 = (void*)0;
    union U2 l_483 = {0x4308L};
    union U2 *l_484 = &l_483;
    int32_t ***l_485[3][5][2] = {{{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396}},{{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396}},{{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396},{&g_396,&g_396}}};
    int32_t l_508 = 0xD07B776CL;
    uint32_t l_537 = 1UL;
    uint32_t * const l_561[3] = {&g_206,&g_206,&g_206};
    const uint8_t *l_652 = &g_275[1][1][2];
    uint8_t l_654 = 0xB3L;
    union U3 **l_661 = &g_192;
    int16_t *l_675[6][3][6] = {{{&g_578,&g_104[0],&g_578,&g_104[0],&g_578,&g_190.f0},{&g_578,&g_578,&g_104[0],&g_578,&g_578,&g_190.f0},{&g_104[0],(void*)0,&g_190.f0,&g_578,(void*)0,&g_104[0]}},{{&g_578,&g_104[0],&g_104[0],&g_104[0],&g_104[0],&g_104[0]},{&g_578,&g_104[0],&g_578,&g_578,&g_104[0],&g_578},{&g_104[0],(void*)0,&g_190.f0,&g_578,&g_104[0],&g_104[0]}},{{&g_578,&g_578,&g_190.f0,&g_104[0],&g_104[0],&g_190.f0},{&g_578,&g_104[0],&g_104[0],&g_578,&g_104[0],&g_104[0]},{&g_104[0],&g_104[0],&g_104[0],&g_578,(void*)0,&g_578}},{{&g_578,&g_104[0],&g_578,&g_104[0],&g_578,&g_190.f0},{&g_578,&g_578,&g_104[0],&g_578,&g_578,&g_190.f0},{&g_104[0],(void*)0,&g_190.f0,&g_578,(void*)0,&g_104[0]}},{{&g_578,&g_104[0],&g_104[0],&g_104[0],&g_104[0],&g_104[0]},{&g_578,&g_104[0],&g_578,&g_578,&g_104[0],&g_578},{&g_104[0],(void*)0,&g_190.f0,&g_578,&g_104[0],&g_104[0]}},{{&g_578,&g_578,&g_190.f0,&g_104[0],&g_104[0],&g_190.f0},{&g_578,&g_104[0],&g_104[0],&g_578,&g_104[0],&g_104[0]},{&g_104[0],&g_104[0],&g_104[0],&g_578,(void*)0,&g_578}}};
    struct S0 l_735 = {0x22E5FF14E1C3ADC2LL};
    uint32_t l_742 = 0x809354ABL;
    uint32_t l_796 = 0UL;
    int8_t l_809[3][1];
    uint16_t l_820 = 0xC680L;
    int32_t l_822 = 0x6590198CL;
    int32_t l_833 = 0L;
    struct S0 **l_862 = &g_613;
    uint8_t *l_886 = (void*)0;
    uint8_t *l_891[6][1][2] = {{{&g_19,&l_654}},{{&l_654,&g_19}},{{&l_654,&l_654}},{{&g_19,&l_654}},{{&l_654,&g_19}},{{&l_654,&g_19}}};
    uint8_t l_898[6][2] = {{253UL,253UL},{253UL,253UL},{253UL,253UL},{253UL,253UL},{253UL,253UL},{253UL,253UL}};
    uint32_t **** const l_914 = &g_386;
    uint32_t l_917 = 4294967295UL;
    uint32_t l_918[6][5][4] = {{{0x1D7A3C60L,0xB0EE2A95L,1UL,1UL},{0x944C3E56L,4UL,18446744073709551614UL,1UL},{4UL,4UL,18446744073709551615UL,1UL},{4UL,0xB0EE2A95L,0x37E6D609L,0x93165A08L},{0xE883E5ABL,0UL,4UL,0UL}},{{0x075672C0L,0x0AA21793L,1UL,18446744073709551614UL},{0x944C3E56L,0x2FBFB7BAL,18446744073709551615UL,0x1D7A3C60L},{0xB20C544FL,1UL,0xB84A7D81L,1UL},{0x2FBFB7BAL,0x93E71C90L,0UL,0xB84A7D81L},{4UL,0xE883E5ABL,4UL,18446744073709551615UL}},{{1UL,0xB0EE2A95L,0x944C3E56L,1UL},{1UL,0x2FBFB7BAL,4UL,1UL},{4UL,1UL,0UL,18446744073709551614UL},{0x2FBFB7BAL,18446744073709551612UL,0xB84A7D81L,0x93165A08L},{0xB20C544FL,4UL,18446744073709551615UL,18446744073709551615UL}},{{0x944C3E56L,0x93E71C90L,1UL,18446744073709551615UL},{0x075672C0L,4UL,4UL,0x075672C0L},{0xE883E5ABL,1UL,0x37E6D609L,1UL},{4UL,18446744073709551612UL,18446744073709551615UL,0UL},{4UL,0xB20C544FL,18446744073709551614UL,0UL}},{{0x944C3E56L,18446744073709551612UL,1UL,1UL},{0x1D7A3C60L,1UL,18446744073709551615UL,0x075672C0L},{0UL,4UL,0UL,18446744073709551615UL},{1UL,0x93E71C90L,18446744073709551615UL,18446744073709551615UL},{0xE883E5ABL,4UL,0x2FBFB7BAL,0x93165A08L}},{{1UL,18446744073709551612UL,1UL,18446744073709551614UL},{0x075672C0L,1UL,18446744073709551614UL,1UL},{0UL,0x2FBFB7BAL,0xB84A7D81L,1UL},{1UL,0xB0EE2A95L,0xB84A7D81L,18446744073709551615UL},{0UL,0xE883E5ABL,18446744073709551614UL,0xB84A7D81L}}};
    int32_t l_919[7] = {0x8621EFE1L,0xB84F1D25L,0x8621EFE1L,0x8621EFE1L,0xB84F1D25L,0x8621EFE1L,0x8621EFE1L};
    uint16_t **l_921 = &g_813;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_809[i][j] = 4L;
    }
    if (((g_395 = (void*)0) == (((*l_484) = l_483) , l_485[0][0][1])))
    { 
        uint16_t *****l_488 = (void*)0;
        uint8_t *l_489 = &g_19;
        int32_t l_494 = 9L;
        uint16_t *l_506 = (void*)0;
        uint16_t *l_507[4];
        int8_t *l_509 = &g_128;
        int16_t *l_510 = (void*)0;
        int16_t *l_511 = (void*)0;
        int16_t *l_512[3];
        union U3 l_524 = {0L};
        int32_t l_558 = 7L;
        int32_t l_562 = 0xAF7C5DB8L;
        int32_t l_564 = (-8L);
        int16_t l_566 = 5L;
        int32_t l_569 = 0x6002CB84L;
        const uint32_t **l_605 = (void*)0;
        const uint32_t ***l_604 = &l_605;
        union U3 **l_610 = &g_192;
        struct S0 **l_614 = &g_613;
        union U1 *l_678 = &g_35;
        union U1 **l_677 = &l_678;
        uint32_t * const l_682 = &l_537;
        union U1 **l_687 = &l_678;
        int32_t *l_688 = (void*)0;
        const uint64_t *l_739 = &g_416;
        int32_t l_763 = 0x9ABE8670L;
        int32_t l_764 = 0x2FFE73D5L;
        int32_t l_766 = 0x62640BE4L;
        int32_t l_767 = 0xFED57C63L;
        int32_t l_770 = 0x32544808L;
        uint32_t l_771 = 0x13503D7CL;
        int16_t l_778 = (-7L);
        uint64_t l_779 = 18446744073709551615UL;
        union U2 l_795 = {0xB4C0L};
        uint16_t l_797[5][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
        int8_t l_851 = 0xE5L;
        union U3 l_858 = {1L};
        int32_t l_870 = 1L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_507[i] = &g_25[3];
        for (i = 0; i < 3; i++)
            l_512[i] = &g_104[0];
        if (((safe_mul_func_uint8_t_u_u(((*l_489) |= (l_488 != (void*)0)), (((*p_76) | (g_104[0] = (safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((*l_509) &= ((0xFBL <= l_494) , (safe_sub_func_int32_t_s_s((*g_29), (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_214 = 0x1475L), 10)), l_508)) <= (-2L)) < l_494), p_74)) & (*g_477)) > l_494), 10)))))))), l_494)) != g_180), l_494)))) < p_74))) || 4UL))
        { 
            uint8_t l_515 = 0x2EL;
            int32_t l_516 = 0x407A79DDL;
            int32_t l_517[3];
            union U2 *l_593[5][5] = {{(void*)0,(void*)0,&g_87,&l_483,&l_483},{(void*)0,&l_483,&l_483,(void*)0,(void*)0},{(void*)0,&l_483,&l_483,&l_483,&l_483},{(void*)0,&l_483,&l_483,&g_87,&g_87},{&l_483,&l_483,&l_483,&g_87,(void*)0}};
            struct S0 l_606 = {0x130A9C3ABB189D0BLL};
            int8_t l_632 = 0xC3L;
            union U3 l_674[7] = {{-3L},{-3L},{-3L},{-3L},{-3L},{-3L},{-3L}};
            uint8_t l_676 = 7UL;
            union U1 **l_686 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_517[i] = 0xC25CABDDL;
            for (g_19 = 0; (g_19 >= 6); g_19++)
            { 
                l_515 = (g_262 = p_74);
                g_335 &= (l_516 &= p_74);
            }
            g_518--;
        }
        else
        { 
            union U1 ***l_691 = &l_677;
            int32_t l_692 = 0xDF379B21L;
            int32_t l_710 = (-9L);
            struct S0 * const *l_719 = &g_613;
            uint64_t *l_722 = &g_115;
            l_692 ^= (safe_lshift_func_uint8_t_u_u((&g_683 == &g_683), (&g_684 != ((*l_691) = &l_678))));
            for (g_262 = 9; (g_262 != (-5)); g_262--)
            { 
                int32_t l_706 = (-9L);
                int32_t l_707 = (-1L);
                const union U2 *l_711[4][7] = {{&l_483,&l_483,&g_87,&g_87,&l_483,&l_483,&l_483},{(void*)0,&g_87,&l_483,&l_483,&g_87,&l_483,&l_483},{&l_483,&g_87,&l_483,&g_87,&l_483,&g_87,(void*)0},{(void*)0,&g_87,&l_483,&l_483,&l_483,(void*)0,&l_483}};
                int32_t *l_730 = (void*)0;
                int i, j;
                if (((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(g_236, 0x1ED7L)))) && (g_206 , ((safe_add_func_uint32_t_u_u((l_707 = l_706), (((l_692 ^= (p_74 >= (safe_mod_func_int8_t_s_s(((&l_678 == (void*)0) ^ p_74), l_706)))) == l_710) <= g_238))) ^ l_706))), 12)), p_74)), 1)) , l_692))
                { 
                    int32_t *l_712 = &g_125;
                    l_711[0][1] = l_711[0][1];
                    l_710 |= 2L;
                    l_712 = &l_707;
                    if ((*g_29))
                        break;
                }
                else
                { 
                    int32_t l_727 = 0L;
                    struct S0 *l_728 = &g_385;
                    int32_t l_729 = 0L;
                    l_710 ^= (safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((((l_707 = (((((***g_386) &= (((safe_add_func_int64_t_s_s((&g_613 != l_719), ((p_74 <= (safe_rshift_func_int16_t_s_s((l_692 = ((-1L) && (l_722 != &g_207))), ((l_727 = (safe_sub_func_uint64_t_u_u(((*l_722) = ((g_725 = (void*)0) != (void*)0)), p_74))) <= 1UL)))) & p_74))) , l_728) == (*l_719))) != 0xCC69C56EL) || g_181) > p_74)) == g_416) < 1UL) | 0xC7D70910284DAB6CLL) > l_729), (*g_477))), 0x6254L));
                    l_729 ^= (g_87 , (l_488 == (void*)0));
                }
                if ((**g_396))
                    continue;
                l_494 = ((*g_477) >= 0x14284E976A629B83LL);
                l_730 = &l_710;
            }
        }
        for (g_415 = 0; (g_415 != 3); g_415++)
        { 
            struct S0 l_733 = {-1L};
            struct S0 l_734 = {0x7B24E157E18C40CCLL};
            int32_t l_753 = 0L;
            int32_t l_757 = 0x5493CCC0L;
            int32_t l_759[6] = {0x52A37C68L,0x52A37C68L,0x5B0CB342L,0x52A37C68L,0x52A37C68L,0x5B0CB342L};
            int64_t l_777[6][1][6] = {{{0x02A60CCD379E736CLL,1L,0xD1763702444EA047LL,0xD1763702444EA047LL,1L,0x02A60CCD379E736CLL}},{{1L,0x02A60CCD379E736CLL,(-1L),1L,(-1L),0x02A60CCD379E736CLL}},{{(-1L),1L,0xD1763702444EA047LL,1L,1L,0xD1763702444EA047LL}},{{(-1L),(-1L),1L,1L,0x979B5E47AA785162LL,1L}},{{1L,(-1L),1L,0xD1763702444EA047LL,1L,1L}},{{0x02A60CCD379E736CLL,1L,1L,0x02A60CCD379E736CLL,(-1L),1L}}};
            int16_t l_810 = 0x5192L;
            int8_t l_819 = 0x03L;
            int32_t **l_831 = &g_726[0][0];
            int32_t l_832 = (-3L);
            int i, j, k;
            l_734 = l_733;
            for (l_733.f0 = 0; (l_733.f0 <= 2); l_733.f0 += 1)
            { 
                uint64_t l_736 = 0xD867EC41834DFB85LL;
                uint64_t **l_740[7][6][5] = {{{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,(void*)0,&g_477,&g_477,&g_477},{&g_477,&g_477,(void*)0,&g_477,&g_477},{(void*)0,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477}},{{&g_477,(void*)0,&g_477,&g_477,(void*)0},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,(void*)0,(void*)0,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,(void*)0,&g_477,(void*)0}},{{&g_477,&g_477,&g_477,&g_477,(void*)0},{(void*)0,&g_477,&g_477,&g_477,&g_477},{&g_477,(void*)0,&g_477,(void*)0,(void*)0},{&g_477,&g_477,&g_477,(void*)0,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{(void*)0,&g_477,&g_477,&g_477,&g_477}},{{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{(void*)0,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477}},{{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,(void*)0,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477}},{{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,(void*)0,&g_477,(void*)0},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,(void*)0,(void*)0,(void*)0},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477}},{{&g_477,(void*)0,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,&g_477,&g_477,&g_477,&g_477},{&g_477,(void*)0,&g_477,&g_477,(void*)0},{&g_477,&g_477,&g_477,(void*)0,&g_477},{&g_477,&g_477,(void*)0,&g_477,(void*)0}}};
                uint64_t *l_741 = &g_252;
                int64_t *l_743 = &g_258;
                int32_t l_744 = (-8L);
                union U3 *l_745 = (void*)0;
                int8_t l_758 = 1L;
                int32_t l_760 = 0xAA3C4149L;
                int32_t l_761 = 0x341F904DL;
                int32_t l_762 = 0x6FF13A21L;
                int32_t l_765 = 0xE8C129DBL;
                int32_t l_768 = 0L;
                int32_t l_769[4];
                uint32_t l_774[6][5][2] = {{{4294967295UL,1UL},{4294967295UL,0x129F16DEL},{0x36DD5CCDL,1UL},{0x129F16DEL,6UL},{2UL,0x27DE9547L}},{{4294967295UL,0x4B5D476EL},{0x4B5D476EL,2UL},{0x3E52510AL,0x3A53BD91L},{0xF16FD5FBL,0xC8B9BD0FL},{6UL,0x5FAFE6BAL}},{{0x0808D874L,0xE4119F90L},{4UL,1UL},{0xC216CB86L,0x764D7361L},{0xC8B9BD0FL,4294967295UL},{4294967288UL,0xF16FD5FBL}},{{1UL,0xF16FD5FBL},{4294967288UL,4294967295UL},{0xC8B9BD0FL,0x764D7361L},{0xC216CB86L,1UL},{4UL,0xE4119F90L}},{{0x0808D874L,0x5FAFE6BAL},{6UL,0xC8B9BD0FL},{0xF16FD5FBL,0x3A53BD91L},{0x3E52510AL,2UL},{0x4B5D476EL,0x4B5D476EL}},{{4294967295UL,0x27DE9547L},{2UL,6UL},{0x129F16DEL,1UL},{0x36DD5CCDL,0x129F16DEL},{4294967295UL,1UL}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_769[i] = 0x5D46E628L;
                (*g_613) = l_735;
                l_736 = (((*g_477) != p_74) | 65530UL);
                l_744 |= ((safe_lshift_func_int8_t_s_u(((0x6CA2L && (l_734 , l_734.f0)) || ((((l_739 != (l_741 = &g_625)) < ((*l_743) = (0xBBC70278133EAD6FLL >= (l_742 , g_586)))) | 0x98E1L) , (***g_409))), p_74)) & p_74);
                (**g_612) = l_735;
                (*l_610) = l_745;
                for (l_483.f4 = 0; (l_483.f4 <= 0); l_483.f4 += 1)
                { 
                    int32_t l_752 = 0x50CF6F54L;
                    int32_t l_754 = (-1L);
                    int32_t l_756[6][4][5] = {{{7L,(-6L),0xC59A21C6L,0x5CD10F03L,0x9DA892AEL},{(-5L),1L,0xCBAF8CFAL,2L,0xA74414D0L},{0x9DA892AEL,4L,7L,0x8828B030L,0xFC62B6C6L},{0L,6L,6L,0L,(-6L)}},{{(-8L),0x0E4292E7L,0xF1A60B2FL,(-1L),(-6L)},{0x3178A991L,(-10L),0xA3EC10ACL,3L,0xE3C1A91FL},{0xC3845CFEL,0xAD6211FBL,(-7L),4L,0L},{0x1E3A937AL,3L,0xA74414D0L,(-5L),0x0EAF7F57L}},{{0x0E4292E7L,0L,6L,0xC3845CFEL,0xC3845CFEL},{1L,0xE3C1A91FL,1L,0xC225A72EL,(-1L)},{0x8828B030L,0x0E4292E7L,0xC59A21C6L,0L,0xFC62B6C6L},{0x63E6A97BL,(-4L),(-1L),(-10L),(-5L)}},{{0xF1A60B2FL,6L,0xC59A21C6L,0xFC62B6C6L,0xAEA89DF6L},{0x42FE0712L,(-1L),1L,0L,0xCBAF8CFAL},{0x208EBED7L,0x5CD10F03L,6L,0L,6L},{0xC225A72EL,0xC225A72EL,0xA74414D0L,0L,1L}},{{4L,7L,(-7L),0x8828B030L,0xA49ED4F4L},{0x52D66F23L,2L,0L,(-1L),(-3L)},{0L,7L,(-8L),(-7L),0xEDB568CEL},{(-5L),0xC225A72EL,0x1E3A937AL,(-9L),0x63E6A97BL}},{{(-8L),0x5CD10F03L,4L,4L,0x5CD10F03L},{(-5L),(-1L),2L,0x0D319CD8L,0L},{0L,6L,0x208EBED7L,0xEDB568CEL,4L},{1L,(-4L),(-6L),0x1E3A937AL,0x3178A991L}}};
                    int i, j, k;
                    l_744 &= ((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((g_207 || (0x1478L >= (safe_div_func_uint16_t_u_u((**g_410), ((***g_386) ^ p_74))))) <= l_736), l_752)) , 0xE590033C970ED06ALL), (*g_477))) & 0UL);
                    l_771--;
                    l_744 = (-9L);
                    l_774[2][0][1]++;
                }
            }
            l_779--;
            (*g_612) = (*g_612);
            if ((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((~((safe_add_func_int8_t_s_s((((**g_612) , l_524) , (p_74 || (g_258 ^= g_206))), ((((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*p_76) = (&l_569 != (((l_757 = (((((*l_687) = (*g_683)) == (l_795 , &p_75)) < 0xBEL) > 1L)) < (*p_76)) , &l_757))), p_74)), 0)) , l_796) | 0L), p_74)) && p_74) ^ 0L) || l_797[1][3]))) | 0UL)) < 1UL) > g_416), 0L)), l_777[0][0][1])))
            { 
                union U3 l_800 = {0L};
                int32_t l_811 = 0x780842BEL;
                l_811 |= (((0x65CF745D5183AFAFLL == 0xC7F45F90B3201774LL) == (safe_div_func_uint8_t_u_u(((l_800 , (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(0xEBL, 4)), (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((p_74 < l_800.f0), (l_809[1][0] = l_764))) > (-1L)), 3))))) == l_810), p_74))) > 0UL);
                return g_812;
            }
            else
            { 
                uint32_t l_821 = 0x8C263417L;
                int32_t l_834 = (-1L);
                l_834 |= (l_833 = ((**l_831) = (((**g_387) = 0x06812749L) == ((safe_rshift_func_int16_t_s_s(p_74, (l_494 = (~(safe_lshift_func_int8_t_s_s(l_819, (((*p_76) = l_820) ^ (l_822 = l_821)))))))) ^ (safe_div_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((void*)0 == l_831), 6)), 2)) , p_74), p_74)) == l_821) , l_832), l_821))))));
                (*l_831) = &l_562;
            }
        }
        if (((*l_678) , (*g_29)))
        { 
            int32_t *l_835 = &l_764;
            (**g_612) = l_735;
            l_835 = (*g_396);
        }
        else
        { 
            uint16_t ***l_839 = &g_812;
            uint16_t ****l_838[7][2][3];
            int32_t l_847 = 1L;
            struct S0 **l_859 = &g_613;
            int32_t l_873 = (-1L);
            int32_t l_875 = 0xA05DFF68L;
            int32_t l_876[3];
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_838[i][j][k] = &l_839;
                }
            }
            for (i = 0; i < 3; i++)
                l_876[i] = (-3L);
            if (((safe_div_func_uint64_t_u_u(((*g_477) ^= (p_74 | ((g_840 = &g_812) == (void*)0))), (safe_div_func_uint16_t_u_u((**g_410), (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((l_847 , (*p_76)) && (&l_771 != (void*)0)), p_74)), p_74)))))) , 2L))
            { 
                uint16_t l_848[4][1][7] = {{{0x0C89L,0x01F0L,0x1846L,0x01F0L,0x0C89L,0x1846L,1UL}},{{1UL,65535UL,1UL,1UL,1UL,65535UL,1UL}},{{1UL,1UL,65535UL,1UL,1UL,1UL,65535UL}},{{1UL,1UL,0x1846L,0x0C89L,0x01F0L,0x1846L,0x01F0L}}};
                int i, j, k;
                ++l_848[3][0][4];
                l_851 = 0x32775DBAL;
            }
            else
            { 
                struct S0 ***l_860[5][6] = {{&l_859,&l_859,&l_859,&l_859,&l_859,&l_859},{&l_859,&l_859,&l_859,&l_859,&l_859,&l_859},{&l_859,&l_859,&l_859,&l_859,&l_859,&l_859},{&l_859,&l_859,&l_859,&l_859,&l_859,&l_859},{&l_859,&l_859,&l_859,&l_859,&l_859,&l_859}};
                union U3 l_863 = {-9L};
                int32_t l_868 = 0x2F1D5252L;
                int32_t l_871 = (-1L);
                int32_t l_872 = 0xECEF4D6CL;
                int32_t l_874[2][7] = {{0x6CBB7392L,(-5L),(-5L),0x6CBB7392L,(-5L),(-5L),0x6CBB7392L},{(-5L),0x6CBB7392L,(-5L),(-5L),0x6CBB7392L,(-5L),(-5L)}};
                uint16_t l_877 = 9UL;
                int i, j;
                l_847 ^= (!(safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((~(g_104[0] = (((l_858 , (g_252 >= ((((g_861 = l_859) != (l_862 = &g_613)) | ((l_863 , ((p_74 && (safe_sub_func_uint64_t_u_u(p_74, (*g_477)))) > (*p_76))) , 0xAABBCB6501D28C1FLL)) > 0UL))) >= 0xCAFC7DEBL) != p_74))), 5)) < 0x2F041A4CL), 0x57A0L)));
                for (g_190.f0 = (-29); (g_190.f0 >= 2); ++g_190.f0)
                { 
                    l_868 = p_74;
                    if (g_258)
                        goto lbl_869;
                    (**l_862) = (**l_614);
                    return (*g_840);
                }
lbl_869:
                (**l_614) = (**l_614);
                l_877++;
            }
        }
        (*g_613) = (**g_861);
        for (l_771 = 24; (l_771 != 52); l_771 = safe_add_func_int32_t_s_s(l_771, 2))
        { 
            return (*g_840);
        }
    }
    else
    { 
        uint8_t *l_888[4][7][6] = {{{&g_19,&l_654,&l_654,&g_19,&g_19,&l_654},{&g_19,&g_19,&g_19,&g_19,&l_654,&l_654},{&g_19,&g_19,&l_654,&l_654,&l_654,&g_19},{&g_19,&g_19,&l_654,(void*)0,&g_19,&l_654},{&l_654,(void*)0,&g_19,&g_19,(void*)0,&g_19},{&g_19,&g_19,&g_19,&l_654,&l_654,&l_654},{&l_654,&g_19,(void*)0,&g_19,&l_654,&g_19}},{{&l_654,&g_19,&g_19,&l_654,&l_654,&l_654},{&g_19,&l_654,&l_654,&g_19,(void*)0,&l_654},{&g_19,&l_654,&g_19,&g_19,&l_654,&g_19},{(void*)0,&g_19,(void*)0,&g_19,&l_654,&l_654},{&g_19,&l_654,&g_19,(void*)0,(void*)0,&g_19},{&l_654,&l_654,&g_19,(void*)0,&l_654,&g_19},{&g_19,&g_19,&l_654,&g_19,&l_654,&g_19}},{{(void*)0,&g_19,&l_654,&g_19,&l_654,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&l_654,&l_654,&l_654},{&l_654,&g_19,(void*)0,&g_19,&l_654,&g_19},{&l_654,&g_19,&g_19,&l_654,&l_654,&l_654},{&g_19,&l_654,&l_654,&g_19,(void*)0,&l_654},{&g_19,&l_654,&g_19,&g_19,&l_654,&g_19}},{{(void*)0,&g_19,(void*)0,&g_19,&l_654,&l_654},{&g_19,&l_654,&g_19,(void*)0,(void*)0,&g_19},{&l_654,&l_654,&g_19,(void*)0,&l_654,&g_19},{&g_19,&g_19,&l_654,&g_19,&l_654,&g_19},{(void*)0,&g_19,&l_654,&g_19,&l_654,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&l_654,&l_654,&l_654}}};
        uint8_t **l_887 = &l_888[0][2][2];
        uint8_t *l_890 = &g_19;
        uint8_t **l_889 = &l_890;
        uint16_t l_893[5][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
        int32_t **l_897[5][5][5] = {{{(void*)0,&g_29,(void*)0,&g_29,(void*)0},{(void*)0,(void*)0,&g_726[0][0],(void*)0,&g_29},{&g_29,&g_726[1][0],&g_29,&g_726[1][0],&g_726[1][0]},{&g_726[1][0],&g_29,&g_29,&g_726[1][0],&g_29},{&g_29,&g_29,&g_726[1][0],&g_726[1][0],&g_29}},{{&g_726[1][0],&g_726[1][0],&g_726[1][0],&g_726[1][0],&g_726[1][0]},{(void*)0,(void*)0,&g_29,&g_29,&g_726[1][0]},{&g_726[1][0],&g_726[1][0],&g_29,(void*)0,&g_726[0][0]},{&g_726[0][0],&g_29,&g_726[1][0],&g_726[1][0],&g_29},{&g_29,&g_726[1][0],&g_29,&g_726[0][0],&g_726[0][0]}},{{&g_29,(void*)0,&g_29,&g_726[1][0],&g_29},{&g_726[1][0],&g_726[1][0],&g_29,(void*)0,&g_29},{&g_726[0][0],&g_29,&g_726[0][0],&g_726[1][0],&g_726[1][0]},{&g_726[1][0],&g_726[1][0],&g_726[0][0],&g_726[1][0],&g_29},{&g_29,&g_726[1][0],&g_726[0][0],(void*)0,&g_29}},{{(void*)0,&g_726[1][0],&g_29,&g_726[1][0],(void*)0},{&g_29,(void*)0,&g_29,&g_726[0][0],&g_29},{&g_726[1][0],&g_726[1][0],(void*)0,&g_726[1][0],&g_726[1][0]},{(void*)0,&g_726[1][0],&g_29,(void*)0,&g_29},{&g_726[1][0],&g_726[1][0],&g_29,&g_29,(void*)0}},{{&g_29,(void*)0,&g_726[1][0],&g_726[1][0],&g_29},{&g_726[0][0],&g_726[1][0],&g_29,&g_29,&g_29},{&g_726[0][0],&g_726[1][0],&g_29,&g_29,&g_726[1][0]},{&g_726[0][0],(void*)0,&g_726[1][0],&g_29,&g_29},{&g_726[0][0],&g_726[0][0],&g_29,&g_29,&g_29}}};
        uint16_t **l_913 = &g_813;
        int i, j, k;
        l_898[1][0] ^= (safe_sub_func_int8_t_s_s(6L, ((((((((safe_add_func_uint64_t_u_u(((l_886 = &g_19) == (l_891[3][0][1] = ((*l_889) = ((*l_887) = &l_654)))), (safe_unary_minus_func_int8_t_s(((l_893[1][1] <= (!((g_571 > g_104[0]) < (safe_rshift_func_int16_t_s_s(((*g_477) && (*g_477)), 6))))) && 2L))))) > l_893[2][3]) <= 0xA6L) < 0x72E53961L) , l_897[4][2][3]) == l_897[4][2][3]) || g_385.f0) == p_74)));
        (*g_725) = (*g_396);
        for (l_508 = 0; (l_508 >= 28); l_508 = safe_add_func_uint64_t_u_u(l_508, 5))
        { 
            int8_t l_903 = 0L;
            int32_t l_905 = 0xE58D5861L;
            int32_t l_906[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_906[i][j] = 0x5D81A278L;
            }
            for (g_242 = 0; (g_242 <= 0); g_242 += 1)
            { 
                int32_t l_902 = 0x9A4590C5L;
                int32_t l_904 = (-1L);
                int32_t l_907 = 1L;
                int32_t l_908 = (-8L);
                int32_t l_912 = 0xE89B410FL;
                g_909[0][1]++;
                if (l_912)
                    break;
                l_912 |= 0x6EBB59CAL;
                for (g_252 = 0; (g_252 <= 0); g_252 += 1)
                { 
                    return l_913;
                }
            }
        }
    }
    l_917 = ((((((l_914 != (void*)0) | (safe_mod_func_int64_t_s_s(((void*)0 == &l_809[1][0]), ((((*l_484) , ((void*)0 != (**g_840))) == p_74) | p_74)))) & 9UL) && 0xB1BCL) > p_74) && (*g_477));
lbl_920:
    l_919[6] = l_918[5][1][1];
    g_726[1][0] = (*g_396);
    if (g_571)
        goto lbl_920;
    return l_921;
}



static int8_t  func_81(struct S0  p_82, union U3  p_83, const int32_t  p_84)
{ 
    const union U2 l_95 = {0UL};
    int16_t *l_103 = &g_104[0];
    const int32_t l_105 = 0L;
    int32_t *l_106 = &g_87.f3;
    int32_t *l_107 = &g_87.f3;
    int32_t *l_108 = &g_87.f3;
    int32_t *l_109 = &g_87.f3;
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = &g_87.f3;
    int32_t *l_112 = &g_87.f3;
    int32_t *l_113[7][3][4] = {{{&g_30[1],&g_30[1],&g_30[1],&g_30[1]},{&g_30[2],&g_30[2],&g_30[0],(void*)0},{&g_30[2],&g_30[2],&g_30[2],&g_30[1]}},{{&g_30[2],(void*)0,(void*)0,&g_30[1]},{(void*)0,&g_30[2],&g_30[1],(void*)0},{(void*)0,&g_30[2],&g_30[2],&g_30[1]}},{{(void*)0,&g_30[1],(void*)0,&g_30[1]},{&g_30[2],&g_30[2],&g_30[1],&g_30[0]},{&g_30[0],(void*)0,&g_30[2],&g_30[2]}},{{&g_30[0],&g_87.f3,&g_30[1],(void*)0},{&g_30[0],(void*)0,&g_30[2],&g_30[1]},{&g_30[0],(void*)0,&g_30[1],&g_30[2]}},{{&g_30[2],&g_30[0],(void*)0,(void*)0},{(void*)0,(void*)0,&g_30[2],&g_30[1]},{(void*)0,&g_30[1],&g_30[1],&g_30[2]}},{{(void*)0,&g_30[2],(void*)0,&g_30[1]},{&g_30[2],&g_30[2],&g_30[2],&g_30[2]},{&g_30[2],&g_30[1],&g_30[0],&g_30[1]}},{{&g_30[2],(void*)0,&g_30[1],(void*)0},{&g_30[1],&g_30[0],&g_30[1],&g_30[2]},{&g_30[2],(void*)0,(void*)0,&g_30[1]}}};
    uint16_t *l_116[4][7][4] = {{{&g_25[2],&g_25[2],&g_10[1],&g_87.f0},{&g_25[2],&g_10[0],&g_10[1],&g_10[1]},{&g_25[2],&g_25[2],&g_10[1],(void*)0},{(void*)0,&g_25[2],&g_87.f0,(void*)0},{&g_87.f0,(void*)0,(void*)0,&g_87.f0},{&g_25[2],(void*)0,&g_10[0],(void*)0},{(void*)0,&g_25[2],(void*)0,(void*)0}},{{&g_10[1],&g_25[2],(void*)0,(void*)0},{&g_10[1],&g_25[2],(void*)0,(void*)0},{&g_10[1],(void*)0,(void*)0,&g_10[1]},{&g_10[1],(void*)0,(void*)0,(void*)0},{(void*)0,&g_25[2],&g_10[0],(void*)0},{&g_25[2],&g_10[1],(void*)0,(void*)0},{&g_87.f0,&g_25[2],&g_87.f0,(void*)0}},{{&g_10[1],(void*)0,(void*)0,&g_10[1]},{&g_25[2],(void*)0,(void*)0,(void*)0},{(void*)0,&g_25[2],(void*)0,(void*)0},{&g_25[2],&g_25[2],(void*)0,(void*)0},{&g_10[1],&g_25[2],&g_87.f0,(void*)0},{&g_87.f0,(void*)0,(void*)0,&g_87.f0},{&g_25[2],(void*)0,&g_10[0],(void*)0}},{{(void*)0,&g_25[2],(void*)0,(void*)0},{&g_10[1],&g_25[2],(void*)0,(void*)0},{&g_10[1],&g_25[2],(void*)0,(void*)0},{&g_10[1],(void*)0,(void*)0,&g_10[1]},{&g_10[1],(void*)0,(void*)0,(void*)0},{(void*)0,&g_25[2],&g_10[0],(void*)0},{&g_25[2],&g_10[1],(void*)0,(void*)0}}};
    uint8_t l_117[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
    int8_t *l_127 = &g_128;
    const union U1 *l_185 = &g_35;
    uint16_t l_198 = 0xCCD2L;
    uint32_t *l_205[7] = {&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206};
    uint16_t * const l_270 = &g_10[2];
    uint8_t l_288[7][2][7] = {{{0x90L,0x06L,0x33L,0x06L,0x90L,0x33L,0UL},{0UL,255UL,1UL,0UL,1UL,255UL,0UL}},{{0UL,0UL,255UL,1UL,0UL,1UL,255UL},{0UL,0UL,0x33L,0x90L,0x06L,0x33L,0x06L}},{{0x90L,255UL,255UL,0x90L,1UL,0UL,0x90L},{0UL,0x06L,1UL,1UL,0x06L,0UL,255UL}},{{0x06L,0x90L,0x33L,0UL,0UL,0x33L,0x90L},{0x06L,255UL,0UL,0x06L,1UL,1UL,0x06L}},{{0UL,0x90L,0UL,1UL,0x90L,255UL,255UL},{0x90L,0x06L,0x33L,0x06L,0x90L,0x33L,0UL}},{{0UL,255UL,1UL,0UL,1UL,255UL,0UL},{0UL,0UL,0x33L,255UL,0UL,255UL,0x33L}},{{0UL,0UL,0UL,255UL,1UL,0UL,1UL},{255UL,0x33L,0x33L,255UL,255UL,0x71L,255UL}}};
    int32_t l_355 = 0x63C96B18L;
    struct S0 l_367[4][2] = {{{0xD24994364CBF2352LL},{0xD24994364CBF2352LL}},{{0xD24994364CBF2352LL},{0xD24994364CBF2352LL}},{{0xD24994364CBF2352LL},{0xD24994364CBF2352LL}},{{0xD24994364CBF2352LL},{0xD24994364CBF2352LL}}};
    int16_t l_434[2];
    int32_t l_445 = (-9L);
    uint64_t l_447 = 0xBC971E435FC13F74LL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_434[i] = 0x3CD8L;
    if (((((safe_sub_func_int16_t_s_s(((p_84 < (*g_29)) || ((((l_95 , ((g_25[2] | (safe_rshift_func_uint8_t_u_u(0x38L, 1))) | (l_117[5] &= (safe_add_func_int32_t_s_s((g_114 ^= (((*l_103) |= (~(((safe_mul_func_uint16_t_u_u((g_10[1] < (g_10[2] || 0x16E1L)), p_83.f0)) , p_83.f2) || l_95.f0))) && l_105)), g_115))))) == 0xD5L) <= g_19) != 0L)), p_82.f0)) > p_82.f0) > p_84) && 1UL))
    { 
        int64_t l_122[6] = {1L,5L,5L,1L,5L,5L};
        int32_t l_126 = 0L;
        uint16_t **l_148 = &l_116[1][1][3];
        uint16_t ***l_147 = &l_148;
        uint8_t l_152[6][6][6] = {{{255UL,0UL,0x67L,247UL,0xBFL,4UL},{0x80L,0x65L,0xA9L,0x1FL,0xBFL,3UL},{0xB3L,0UL,0x81L,247UL,0UL,0xA9L},{0x45L,0xA9L,9UL,247UL,0xBCL,0xBCL},{0x32L,0xA9L,0xA9L,0x32L,0UL,0x67L},{0x1CL,0UL,4UL,0xB3L,0xBFL,255UL}},{{0x45L,0x65L,0x18L,7UL,0xBFL,0xBCL},{0x9FL,0UL,1UL,0x1FL,0UL,0x18L},{0x52L,0xA9L,0x81L,0xB3L,0xBCL,0x65L},{255UL,0xA9L,0x18L,255UL,0UL,4UL},{0x32L,0UL,255UL,0x9FL,0xBFL,0x67L},{0x52L,0x65L,0xBFL,247UL,0xBFL,0x65L}},{{247UL,0UL,9UL,7UL,0UL,0xBFL},{0x80L,0xA9L,1UL,0x9FL,0xBCL,3UL},{0x1CL,0xA9L,0xBFL,0x1CL,0UL,255UL},{255UL,0UL,0x67L,247UL,0xBFL,4UL},{0x80L,0x65L,0xA9L,0x1FL,0xBFL,3UL},{0xB3L,0UL,0x81L,247UL,0UL,0xA9L}},{{0x45L,0xA9L,9UL,247UL,0xBCL,0xBCL},{0x32L,0xA9L,0xA9L,0x32L,0UL,0x67L},{0x1CL,0UL,4UL,0xB3L,0xBFL,255UL},{0x45L,0x65L,0x18L,7UL,0xBFL,0xBCL},{0x9FL,0UL,1UL,0x1FL,0UL,0x18L},{0x52L,0xA9L,0x81L,0xB3L,0xBCL,0x65L}},{{255UL,0xA9L,0x18L,255UL,0UL,4UL},{0x32L,0UL,255UL,0x9FL,0xBFL,0x67L},{0x52L,0x65L,0x0BL,0x8BL,0x0BL,0xAAL},{4UL,0xCCL,0x02L,0UL,0xBBL,0x0BL},{0xA9L,0xCDL,255UL,255UL,247UL,1UL},{9UL,0xCDL,0x0BL,9UL,0xBBL,0xF7L}},{{0x81L,0xCCL,0xE4L,4UL,0x0BL,0xB9L},{0xA9L,0xAAL,0xCDL,0UL,0x0BL,1UL},{0x67L,0xCCL,0UL,0x8BL,0xBBL,0xCDL},{0xBFL,0xCDL,0x02L,4UL,247UL,247UL},{1UL,0xCDL,0xCDL,1UL,0xBBL,0xE4L},{9UL,0xCCL,0xB9L,0x67L,0x0BL,0xF7L}}};
        int i, j, k;
        for (g_87.f3 = 0; (g_87.f3 <= 18); g_87.f3 = safe_add_func_uint16_t_u_u(g_87.f3, 6))
        { 
            int8_t *l_129 = (void*)0;
            int32_t l_136[1][1][7] = {{{0x17761125L,0xE89D45B8L,0xE89D45B8L,0x17761125L,0xE89D45B8L,0xE89D45B8L,0x17761125L}}};
            uint16_t * const **l_141 = (void*)0;
            uint16_t * const ***l_140 = &l_141;
            int i, j, k;
            if ((*g_29))
            { 
                uint64_t l_124[6][2] = {{0x917B7F45CD968612LL,0x917B7F45CD968612LL},{0x917B7F45CD968612LL,0x917B7F45CD968612LL},{0x917B7F45CD968612LL,0x917B7F45CD968612LL},{0x917B7F45CD968612LL,0x917B7F45CD968612LL},{0x917B7F45CD968612LL,0x917B7F45CD968612LL},{0x917B7F45CD968612LL,0x917B7F45CD968612LL}};
                int i, j;
                for (g_85.f0 = 29; (g_85.f0 < 29); g_85.f0 = safe_add_func_int32_t_s_s(g_85.f0, 3))
                { 
                    int32_t l_123 = (-10L);
                    l_123 = l_122[1];
                }
                l_124[1][0] |= 0x3796DFD0L;
            }
            else
            { 
                g_125 = 0x621BF3EAL;
                if ((*g_29))
                    break;
            }
            g_125 ^= p_83.f0;
            l_126 = 0L;
            if (((((l_127 == l_129) != 0x79L) , (safe_sub_func_uint32_t_u_u(g_115, 1UL))) | (((l_122[1] | ((safe_add_func_int16_t_s_s((g_19 , g_19), l_122[1])) != (-6L))) ^ p_84) >= l_136[0][0][0])))
            { 
                uint16_t **l_139 = &l_116[1][3][1];
                uint16_t ***l_138 = &l_139;
                uint16_t ****l_137 = &l_138;
                (*l_137) = (void*)0;
            }
            else
            { 
                int16_t l_142 = (-4L);
                uint8_t *l_149 = &l_117[5];
                int32_t l_169 = (-1L);
                l_126 |= (l_142 ^= ((void*)0 == l_140));
                if ((safe_add_func_int64_t_s_s(l_142, ((safe_mul_func_uint8_t_u_u(((*l_149) ^= ((void*)0 == l_147)), (safe_mul_func_int8_t_s_s((p_83.f2 , ((l_152[1][0][2] & ((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((safe_add_func_uint32_t_u_u(((((((l_136[0][0][1] = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_84, 2)), 6)), (((+(l_169 ^= (safe_mod_func_int32_t_s_s(5L, l_136[0][0][0])))) > g_114) ^ 0x1FL))), p_82.f0)) != g_104[0])) < p_82.f0) || (*g_29)) & 1L) && l_122[1]) < g_104[0]), (*g_29))))), p_84)) || 0x6E52BDFDB656643BLL)) > g_30[0])), l_142)))) >= l_142))))
                { 
                    uint64_t *l_173 = &g_115;
                    int32_t l_176 = (-1L);
                    l_136[0][0][1] = (safe_lshift_func_uint8_t_u_s(1UL, ((*l_127) |= (l_176 = (~(++(*l_173)))))));
                }
                else
                { 
                    uint32_t l_177[3];
                    const int32_t *l_179[4][2][6] = {{{&l_136[0][0][4],&l_136[0][0][4],&l_169,(void*)0,(void*)0,&l_169},{&g_30[1],&g_30[1],&l_136[0][0][4],(void*)0,&l_136[0][0][4],&g_30[2]}},{{&l_136[0][0][4],&l_136[0][0][4],(void*)0,&g_30[2],(void*)0,&l_136[0][0][4]},{(void*)0,&l_136[0][0][4],(void*)0,(void*)0,&g_30[1],&g_30[2]}},{{&l_169,(void*)0,&l_136[0][0][4],&l_136[0][0][4],(void*)0,&l_169},{&l_136[0][0][4],(void*)0,&l_169,&g_30[0],&g_30[1],(void*)0}},{{(void*)0,&l_136[0][0][4],(void*)0,&l_136[0][0][4],(void*)0,(void*)0},{(void*)0,&l_136[0][0][4],&l_136[0][0][4],&g_30[0],&l_136[0][0][4],&l_136[0][0][4]}}};
                    const int32_t **l_178 = &l_179[0][1][0];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_177[i] = 0x3C6B0B57L;
                    g_125 &= (l_177[0] |= 0x2E36782FL);
                    if ((*g_29))
                        continue;
                    (*l_178) = &p_84;
                }
            }
            ++g_182;
        }
    }
    else
    { 
        const union U1 **l_186 = (void*)0;
        const union U1 **l_187 = (void*)0;
        const union U1 **l_188 = &l_185;
        union U3 *l_189 = &g_190;
        union U3 **l_191[3];
        int i;
        for (i = 0; i < 3; i++)
            l_191[i] = &l_189;
        (*l_188) = l_185;
        g_192 = l_189;
    }
    return g_125;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);

    }
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_25[i], "g_25[i]", print_hash_value);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_30[i], "g_30[i]", print_hash_value);

    }
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f4, "g_87.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);

    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_275[i][j][k], "g_275[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_339[i], "g_339[i]", print_hash_value);

    }
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_585[i][j][k], "g_585[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_909[i][j], "g_909[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1120[i][j], "g_1120[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1291[i], "g_1291[i]", print_hash_value);

    }
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1532, "g_1532", print_hash_value);
    transparent_crc(g_1599, "g_1599", print_hash_value);
    transparent_crc(g_1603, "g_1603", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1747[i], "g_1747[i]", print_hash_value);

    }
    transparent_crc(g_1775, "g_1775", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    transparent_crc(g_1842, "g_1842", print_hash_value);
    transparent_crc(g_1849, "g_1849", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1886[i], "g_1886[i]", print_hash_value);

    }
    transparent_crc(g_1949, "g_1949", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
