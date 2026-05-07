// SPDX-License-Identifier: MIT
// cctest_csmith_49d16dbb.c --- cctest case csmith_49d16dbb (csmith seed 1238461883)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb65edd83 */

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

// Options:   -s 1238461883 -o /tmp/csmith_gen_irmuf934/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 28;
   signed f1 : 3;
   unsigned f2 : 26;
};

union U1 {
   uint32_t  f0;
   uint8_t  f1;
   const uint32_t  f2;
   const uint64_t  f3;
};


static int32_t g_3 = 1L;
static int32_t g_5 = 0xD035C573L;
static uint64_t g_40 = 18446744073709551615UL;
static union U1 g_47 = {0xEC6F9132L};
static int32_t g_71 = (-1L);
static int16_t g_75[1] = {0x3631L};
static int16_t g_77 = 0x770CL;
static int32_t g_78[1][1] = {{1L}};
static uint64_t g_79 = 0xC07A8B521F313C85LL;
static union U1 g_83[4][7][6] = {{{{4294967289UL},{5UL},{1UL},{8UL},{0xCCA49BD5L},{0xCCA49BD5L}},{{4UL},{0x5B45A7EAL},{0x5B45A7EAL},{4UL},{0xCCA49BD5L},{1UL}},{{4294967290UL},{5UL},{0x4E34DAAEL},{0x893BA86AL},{0xCCA49BD5L},{5UL}},{{4294967289UL},{0x5B45A7EAL},{1UL},{4294967289UL},{0xCCA49BD5L},{0x4E34DAAEL}},{{4UL},{5UL},{0x5B45A7EAL},{0x86DF8401L},{0xCCA49BD5L},{1UL}},{{4294967290UL},{0x5B45A7EAL},{0x4E34DAAEL},{4294967290UL},{0xCCA49BD5L},{0x5B45A7EAL}},{{4294967289UL},{5UL},{1UL},{8UL},{0xCCA49BD5L},{0xCCA49BD5L}}},{{{4UL},{0x5B45A7EAL},{0x89D7571DL},{5UL},{0x9B78C740L},{4294967286UL}},{{1UL},{0x3F07CA43L},{1UL},{1UL},{0x9B78C740L},{0x3F07CA43L}},{{0xCCA49BD5L},{0x89D7571DL},{4294967286UL},{0xCCA49BD5L},{0x9B78C740L},{1UL}},{{5UL},{0x3F07CA43L},{0x89D7571DL},{0x5B45A7EAL},{0x9B78C740L},{0UL}},{{1UL},{0x89D7571DL},{1UL},{1UL},{0x9B78C740L},{0x89D7571DL}},{{0xCCA49BD5L},{0x3F07CA43L},{4294967286UL},{0x4E34DAAEL},{0x9B78C740L},{0x9B78C740L}},{{5UL},{0x89D7571DL},{0x89D7571DL},{5UL},{0x9B78C740L},{4294967286UL}}},{{{1UL},{0x3F07CA43L},{1UL},{1UL},{0x9B78C740L},{0x3F07CA43L}},{{0xCCA49BD5L},{0x89D7571DL},{4294967286UL},{0xCCA49BD5L},{0x9B78C740L},{1UL}},{{5UL},{0x3F07CA43L},{0x89D7571DL},{0x5B45A7EAL},{0x9B78C740L},{0UL}},{{1UL},{0x89D7571DL},{1UL},{1UL},{0x9B78C740L},{0x89D7571DL}},{{0xCCA49BD5L},{0x3F07CA43L},{4294967286UL},{0x4E34DAAEL},{0x9B78C740L},{0x9B78C740L}},{{5UL},{0x89D7571DL},{0x89D7571DL},{5UL},{0x9B78C740L},{4294967286UL}},{{1UL},{0x3F07CA43L},{1UL},{1UL},{0x9B78C740L},{0x3F07CA43L}}},{{{0xCCA49BD5L},{0x89D7571DL},{4294967286UL},{0xCCA49BD5L},{0x9B78C740L},{1UL}},{{5UL},{0x3F07CA43L},{0x89D7571DL},{0x5B45A7EAL},{0x9B78C740L},{0UL}},{{1UL},{0x89D7571DL},{1UL},{1UL},{0x9B78C740L},{0x89D7571DL}},{{0xCCA49BD5L},{0x3F07CA43L},{4294967286UL},{0x4E34DAAEL},{0x9B78C740L},{0x9B78C740L}},{{5UL},{0x89D7571DL},{0x89D7571DL},{5UL},{0x9B78C740L},{4294967286UL}},{{1UL},{0x3F07CA43L},{1UL},{1UL},{0x9B78C740L},{0x3F07CA43L}},{{0xCCA49BD5L},{0x89D7571DL},{4294967286UL},{0xCCA49BD5L},{0x9B78C740L},{1UL}}}};
static union U1 *g_82 = &g_83[0][0][3];
static struct S0 g_84 = {-13589,1,7969};
static uint64_t *g_92 = &g_40;
static uint64_t **g_91 = &g_92;
static union U1 * const *g_100 = &g_82;
static uint8_t *g_109 = &g_47.f1;
static uint16_t g_111[5][3] = {{0UL,1UL,4UL},{0x86CCL,1UL,0x86CCL},{1UL,0UL,4UL},{1UL,1UL,0UL},{0x86CCL,0UL,0UL}};
static uint32_t g_125[5][1] = {{0x57DD5A8AL},{0UL},{0x57DD5A8AL},{0UL},{0x57DD5A8AL}};
static int64_t g_158 = (-1L);
static int64_t g_161 = 5L;
static struct S0 g_174 = {15116,1,3979};
static uint8_t g_177 = 0x92L;
static union U1 *g_216 = (void*)0;
static int32_t *g_227 = &g_78[0][0];
static int32_t g_273 = 7L;
static int64_t **g_283 = (void*)0;
static const uint32_t g_326 = 4294967291UL;
static uint32_t **g_412 = (void*)0;
static int32_t g_432 = 0xFB94BD43L;
static int8_t g_452 = 1L;
static int32_t g_490 = 0xA9DB889EL;
static int64_t g_492 = 0xF97BBEDA5BD2089DLL;
static int16_t * const g_509 = (void*)0;
static int16_t * const *g_508 = &g_509;
static int16_t *g_547 = &g_77;
static int16_t **g_546[1][3][7] = {{{&g_547,&g_547,(void*)0,&g_547,&g_547,(void*)0,&g_547},{&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547},{&g_547,&g_547,&g_547,&g_547,&g_547,&g_547,&g_547}}};
static struct S0 *g_552 = &g_174;
static struct S0 **g_551 = &g_552;
static uint32_t g_614 = 1UL;
static const union U1 **g_630 = (void*)0;
static const union U1 ***g_629 = &g_630;
static int16_t g_692[3] = {6L,6L,6L};
static uint32_t g_704[5][4][2] = {{{0x0E77ADAFL,0x0E77ADAFL},{0x0E77ADAFL,4294967295UL},{4294967295UL,0xADFA66AAL},{4294967295UL,0xADFA66AAL}},{{4294967295UL,4294967295UL},{0x0E77ADAFL,0x0E77ADAFL},{0x0E77ADAFL,4294967295UL},{4294967295UL,0xADFA66AAL}},{{4294967295UL,0xADFA66AAL},{4294967295UL,4294967295UL},{0x0E77ADAFL,0x0E77ADAFL},{0x0E77ADAFL,4294967295UL}},{{0UL,0x0E77ADAFL},{4294967295UL,0x0E77ADAFL},{0UL,4294967295UL},{4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL},{0UL,0x0E77ADAFL},{4294967295UL,0x0E77ADAFL},{0UL,4294967295UL}}};
static uint32_t ***g_821 = &g_412;
static uint32_t ****g_820 = &g_821;
static uint32_t g_902 = 0x1750E376L;
static uint64_t g_1004 = 18446744073709551611UL;
static int16_t g_1021 = (-10L);
static struct S0 ***g_1039[6] = {&g_551,&g_551,&g_551,&g_551,&g_551,&g_551};
static uint64_t g_1067 = 0xEB16165C24677A63LL;
static uint32_t g_1112[1][1][2] = {{{0x6DF8A21EL,0x6DF8A21EL}}};
static uint8_t g_1176 = 0xD2L;
static uint8_t **g_1208 = &g_109;
static uint64_t * const *g_1222 = (void*)0;
static uint64_t * const * const *g_1221 = &g_1222;
static uint64_t * const * const **g_1220 = &g_1221;
static int64_t g_1231 = 0x30EC0E4FBBF4F3FELL;
static uint32_t g_1233 = 18446744073709551606UL;
static int32_t *g_1278 = &g_3;
static int32_t g_1358 = 0x5F2A2790L;
static uint8_t g_1455 = 0xEDL;
static uint8_t * const g_1658 = (void*)0;
static uint8_t * const *g_1657 = &g_1658;
static uint32_t g_1663[4][7][2] = {{{7UL,0UL},{0x12828B75L,0x198C2D25L},{0x198C2D25L,1UL},{7UL,7UL},{1UL,7UL},{7UL,1UL},{0x198C2D25L,0x198C2D25L}},{{0x12828B75L,0UL},{7UL,0x5E4F87CDL},{0UL,7UL},{0x35D85C87L,0UL},{0x198C2D25L,0x12828B75L},{0x198C2D25L,0UL},{0x35D85C87L,7UL}},{{0UL,0x5E4F87CDL},{7UL,0UL},{0x12828B75L,0x198C2D25L},{0x198C2D25L,1UL},{7UL,7UL},{1UL,7UL},{7UL,1UL}},{{0x198C2D25L,0x198C2D25L},{0x12828B75L,0UL},{7UL,0x5E4F87CDL},{0UL,7UL},{0x35D85C87L,0UL},{0x198C2D25L,0x12828B75L},{0x198C2D25L,0UL}}};
static struct S0 ****g_1714 = &g_1039[0];
static int16_t g_1752 = 0L;
static uint8_t ***g_1759 = &g_1208;
static uint16_t g_1827 = 0x2BB2L;
static union U1 g_1870 = {0x5E80EDDAL};
static uint64_t ***g_1955 = &g_91;
static int8_t g_2037 = 0L;



static const int16_t  func_1(void);
static struct S0  func_6(union U1  p_7, const int16_t  p_8);
static union U1  func_9(int64_t  p_10, uint8_t  p_11, uint32_t  p_12);
static int64_t  func_13(uint8_t  p_14, uint32_t  p_15, uint8_t  p_16);
static int16_t  func_19(int32_t * p_20);
static int32_t * func_21(int8_t  p_22, int8_t  p_23, int32_t  p_24);
static const int32_t  func_29(int32_t * p_30, int32_t * p_31, int32_t * p_32, uint64_t  p_33);
static int32_t * func_34(uint64_t  p_35, union U1  p_36);




static const int16_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = (void*)0;
    uint64_t *l_39[4][5][2] = {{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}},{{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40},{&g_40,&g_40}}};
    union U1 l_41 = {4294967295UL};
    uint32_t l_223 = 0xF3DC88A8L;
    uint32_t l_240 = 18446744073709551615UL;
    struct S0 *l_2039 = &g_174;
    int i, j, k;
    g_5 &= ((*l_2) &= 0x9F3690F1L);
    (*l_2039) = func_6(func_9(func_13(((((safe_mod_func_int16_t_s_s(func_19(func_21(((safe_div_func_uint32_t_u_u(((*l_2) && (((func_29(&g_5, func_34((safe_mul_func_int8_t_s_s(((g_5 , ((((((g_40 = (((void*)0 != &g_3) & (((g_3 > g_3) | 6UL) != 0xD2L))) , &g_3) == (void*)0) < (-5L)) || g_5) < 0x40F8278B7212908CLL)) >= 0xC369029EFEC1A2C9LL), (*l_2))), l_41), &g_3, g_83[0][0][3].f1) , l_223) , 247UL) >= 0UL)), g_3)) && 1UL), (*l_2), g_161)), 7UL)) <= 254UL) , 4294967294UL) , (*g_109)), l_240, g_161), g_1112[0][0][0], g_1455), l_223);
    return (*l_2);
}



static struct S0  func_6(union U1  p_7, const int16_t  p_8)
{ 
    struct S0 l_2038 = {-7028,1,5822};
    (*g_1278) = 0x30C13F5EL;
    return l_2038;
}



static union U1  func_9(int64_t  p_10, uint8_t  p_11, uint32_t  p_12)
{ 
    struct S0 l_1456 = {4028,-0,7497};
    union U1 l_1458 = {4294967295UL};
    int16_t ***l_1492 = &g_546[0][2][6];
    int16_t ****l_1491[5][2] = {{&l_1492,&l_1492},{&l_1492,&l_1492},{&l_1492,&l_1492},{&l_1492,&l_1492},{&l_1492,&l_1492}};
    uint8_t * const *l_1503 = (void*)0;
    int32_t l_1574 = 0x4BD98DBBL;
    int32_t l_1575[4][4][4] = {{{(-7L),0xBA100390L,0x4831B436L,0L},{0L,0x07C2060EL,1L,0x4831B436L},{0x2FDBC138L,0x07C2060EL,0L,0L},{0x07C2060EL,0xBA100390L,0xB805AB14L,(-10L)}},{{2L,0x761475FFL,2L,0x4680F916L},{0x4831B436L,5L,0x4831B436L,0x07C2060EL},{0xCAF1F152L,1L,0xB50375F3L,0x4831B436L},{0L,0xB50375F3L,1L,1L}},{{0x07C2060EL,1L,1L,0L},{0L,0x761475FFL,0xB50375F3L,0xB805AB14L},{0xCAF1F152L,0x7A3F12F8L,0x4831B436L,2L},{0x4831B436L,2L,2L,0x4831B436L}},{{2L,0L,0xB805AB14L,0xB50375F3L},{0x07C2060EL,0x9F18D6DFL,0L,1L},{0x2FDBC138L,0x761475FFL,1L,0x7A3F12F8L},{0x4680F916L,0L,1L,0L}}};
    uint32_t l_1596 = 4294967295UL;
    int32_t l_1598 = (-2L);
    int32_t *l_1600[5][2][2] = {{{&g_78[0][0],&l_1575[2][1][3]},{&g_78[0][0],&g_1358}},{{&l_1598,&l_1598},{&g_1358,&g_78[0][0]}},{{&l_1575[2][1][3],&g_78[0][0]},{&g_1358,&l_1598}},{{&l_1598,&g_1358},{&g_78[0][0],&l_1575[2][1][3]}},{{&g_78[0][0],&g_1358},{&l_1598,&l_1598}}};
    struct S0 **l_1617 = &g_552;
    const uint64_t *l_1636 = (void*)0;
    const uint64_t **l_1635[3][2][3] = {{{&l_1636,(void*)0,&l_1636},{(void*)0,&l_1636,&l_1636}},{{&l_1636,&l_1636,(void*)0},{(void*)0,(void*)0,&l_1636}},{{&l_1636,&l_1636,&l_1636},{(void*)0,(void*)0,(void*)0}}};
    const uint64_t ***l_1634 = &l_1635[1][1][1];
    const uint64_t *** const *l_1633 = &l_1634;
    uint32_t l_1672 = 0UL;
    uint32_t ****l_1681 = &g_821;
    int64_t ***l_1685[7][1];
    int16_t l_1690 = (-1L);
    const uint16_t l_1784[6] = {0xF4A3L,0xF4A3L,0xF4A3L,0xF4A3L,0xF4A3L,0xF4A3L};
    int64_t l_1799 = (-1L);
    int8_t l_1805 = 0xCEL;
    int32_t l_1808 = 9L;
    struct S0 l_1813 = {-10931,0,1856};
    uint32_t l_1826 = 0xB5E49FFEL;
    int32_t **l_1828[4][5][6] = {{{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227}},{{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227}},{{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227}},{{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,(void*)0,&g_227,&g_227}}};
    int8_t *l_1984 = &l_1805;
    int8_t **l_1983 = &l_1984;
    int8_t ***l_1982 = &l_1983;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_1685[i][j] = &g_283;
    }
lbl_1816:
    for (g_161 = 0; (g_161 <= 1); g_161 += 1)
    { 
        int32_t l_1473 = 0xB0DABDC9L;
        int32_t l_1475 = 0x172BD35CL;
        int32_t l_1476 = (-6L);
        union U1 l_1477 = {4294967295UL};
        union U1 **l_1522 = &g_82;
        union U1 ***l_1521[7];
        int64_t *l_1560 = &g_492;
        int64_t **l_1559 = &l_1560;
        uint64_t l_1563[5] = {0xD254010BCEBEDBA5LL,0xD254010BCEBEDBA5LL,0xD254010BCEBEDBA5LL,0xD254010BCEBEDBA5LL,0xD254010BCEBEDBA5LL};
        int32_t l_1573 = (-6L);
        int32_t l_1577 = 0x88F9456BL;
        int32_t l_1578 = 0x65B5C5EEL;
        int32_t l_1579 = 0xB166510DL;
        int32_t l_1580[3];
        uint16_t l_1581 = 0xDA1AL;
        const uint32_t l_1616 = 4UL;
        struct S0 ** const l_1619 = &g_552;
        uint64_t *** const l_1632 = &g_91;
        uint64_t *** const *l_1631[7][6] = {{(void*)0,&l_1632,&l_1632,&l_1632,(void*)0,(void*)0},{&l_1632,(void*)0,(void*)0,&l_1632,(void*)0,&l_1632},{&l_1632,&l_1632,&l_1632,(void*)0,&l_1632,&l_1632},{&l_1632,(void*)0,&l_1632,&l_1632,&l_1632,&l_1632},{&l_1632,&l_1632,&l_1632,&l_1632,&l_1632,&l_1632},{(void*)0,&l_1632,(void*)0,&l_1632,&l_1632,&l_1632},{&l_1632,(void*)0,(void*)0,&l_1632,&l_1632,&l_1632}};
        uint32_t l_1647 = 1UL;
        int32_t l_1668 = (-2L);
        int8_t l_1671 = 6L;
        int32_t l_1700 = 0L;
        struct S0 *** const *l_1711 = &g_1039[0];
        uint8_t ***l_1761 = &g_1208;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1521[i] = &l_1522;
        for (i = 0; i < 3; i++)
            l_1580[i] = (-3L);
        (*g_552) = l_1456;
        for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
        { 
            int8_t l_1479[7];
            int16_t ****l_1494[1];
            int32_t l_1512[5][4][6] = {{{0x1A244967L,0L,0x9815C2F7L,0x4F4D37BFL,0x4CB2068BL,0x3DA5ADDEL},{0xD71A0E1AL,0x1A244967L,0x9815C2F7L,(-7L),1L,0L},{0x646CD972L,(-7L),0x3DA5ADDEL,(-1L),0x14B176B7L,0x4CB2068BL},{(-1L),0x14B176B7L,0x4CB2068BL,0x3853C5B1L,0L,0x8B0B45A9L}},{{0x98497969L,0L,0xB0513FE9L,0L,0xBFBD6849L,(-5L)},{0xBFBD6849L,1L,(-7L),0x7964F7CAL,0L,0x7964F7CAL},{1L,(-5L),1L,0xB227EDA3L,1L,0x14B176B7L},{0x7964F7CAL,0xCDF211CBL,0x98497969L,1L,0x9C964DFBL,(-1L)}},{{0x1D4E40F6L,0xF0306503L,(-4L),1L,0x20AD3DFFL,0xB227EDA3L},{0x7964F7CAL,0xAADA1E8BL,0xF0306503L,0xB227EDA3L,0x3853C5B1L,1L},{1L,(-7L),0x1A244967L,0x7964F7CAL,0L,0xAADA1E8BL},{0xBFBD6849L,(-1L),0x9C964DFBL,0L,0xB227EDA3L,1L}},{{0x98497969L,0xD71A0E1AL,0L,0x3853C5B1L,0x471F5DD8L,0x471F5DD8L},{(-1L),0x7964F7CAL,0x7964F7CAL,(-1L),(-4L),0x98497969L},{0x646CD972L,0x9C964DFBL,0x20AD3DFFL,(-7L),0x8B0B45A9L,0x1D4E40F6L},{0xD71A0E1AL,0xB227EDA3L,0x14B176B7L,0x4F4D37BFL,0x8B0B45A9L,0xB0513FE9L}},{{0x1A244967L,0x9C964DFBL,0x32A936EEL,0x1AECA737L,(-4L),0x9815C2F7L},{1L,0x7964F7CAL,0L,0x32A936EEL,0x471F5DD8L,0L},{1L,0xD71A0E1AL,(-7L),0x3DA5ADDEL,0xB227EDA3L,0x32A936EEL},{(-5L),(-1L),0x3853C5B1L,0x9C964DFBL,0L,0x646CD972L}}};
            union U1 ***l_1520 = (void*)0;
            union U1 l_1529 = {0x03B62D1DL};
            uint64_t * const **l_1568 = &g_1222;
            uint64_t * const ***l_1567 = &l_1568;
            int32_t l_1569 = 1L;
            int32_t *l_1570 = &l_1476;
            int32_t *l_1571 = &g_78[0][0];
            int32_t *l_1572[7][5] = {{&g_78[0][0],&l_1512[1][2][2],&g_78[0][0],&l_1512[1][2][2],&g_78[0][0]},{(void*)0,&g_78[0][0],&g_78[0][0],(void*)0,(void*)0},{&l_1476,&l_1512[1][2][2],&l_1476,&l_1512[1][2][2],&l_1476},{(void*)0,(void*)0,&g_78[0][0],&g_78[0][0],(void*)0},{&g_78[0][0],&l_1512[1][2][2],&g_78[0][0],&l_1512[1][2][2],&g_78[0][0]},{(void*)0,&g_78[0][0],&g_78[0][0],(void*)0,(void*)0},{&l_1476,&l_1512[1][2][2],&l_1476,&l_1512[1][2][2],&l_1476}};
            int32_t l_1576 = 0x7E7A9942L;
            uint8_t * const * const * const l_1595 = &l_1503;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1479[i] = 0xB0L;
            for (i = 0; i < 1; i++)
                l_1494[i] = &l_1492;
            for (g_1004 = 0; (g_1004 <= 2); g_1004 += 1)
            { 
                int32_t *l_1457 = &g_71;
                int i, j, k;
                (*l_1457) = g_704[g_1004][g_161][g_161];
                return l_1458;
            }
            for (g_273 = 1; (g_273 >= 0); g_273 -= 1)
            { 
                int8_t *l_1474[1];
                int16_t l_1478 = 0x4551L;
                union U1 l_1493 = {4294967295UL};
                int32_t l_1495 = (-1L);
                union U1 ****l_1523 = &l_1521[4];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1474[i] = &g_452;
                if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_1476 |= (safe_lshift_func_uint8_t_u_u(((((*g_109) &= ((0x4828302768430CDFLL && g_704[g_161][(g_161 + 1)][g_5]) <= (((safe_sub_func_uint8_t_u_u(g_704[g_5][g_161][g_273], ((18446744073709551615UL >= 18446744073709551615UL) , (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0x8BL, (l_1475 ^= (((((l_1473 &= g_704[g_161][g_5][g_161]) | g_692[(g_273 + 1)]) || 0xE1L) & 65534UL) <= p_10)))), 0x1E7B62E3L))))) | g_704[g_161][g_5][g_161]) , 0x19CFC13C3F5DA671LL))) <= g_111[1][2]) | 0xFA159AA645DB328BLL), 3))), p_11)), p_10)), g_490)))
                { 
                    (*g_552) = (*g_552);
                    return l_1477;
                }
                else
                { 
                    l_1479[6] = l_1478;
                }
                if (g_704[g_161][(g_161 + 1)][g_5])
                    continue;
                for (l_1478 = 0; (l_1478 >= 0); l_1478 -= 1)
                { 
                    union U1 l_1488 = {0xBF3F7F03L};
                    int32_t **l_1496 = (void*)0;
                    int32_t **l_1497 = (void*)0;
                    int32_t **l_1498[4] = {&g_1278,&g_1278,&g_1278,&g_1278};
                    uint32_t l_1513 = 6UL;
                    int i, j, k;
                    g_78[l_1478][l_1478] = ((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(g_1112[l_1478][l_1478][g_161], (safe_lshift_func_uint16_t_u_s(0xC60BL, 5)))), 15)) && (((g_704[g_161][(g_161 + 2)][(l_1478 + 1)] ^= ((safe_div_func_uint16_t_u_u(((g_111[(g_273 + 3)][(l_1478 + 1)] = 1UL) & (l_1488 , g_78[l_1478][l_1478])), (safe_sub_func_uint64_t_u_u((l_1495 = (((l_1491[1][0] = (void*)0) == ((l_1493 , 0x37093063L) , l_1494[0])) , p_11)), 0x9FBA127179C9B68FLL)))) ^ 0x05CA1DF4741EC844LL)) , 0L) | p_11)) , 0x7CC8C0B366DAA75FLL) < p_12);
                    g_227 = (void*)0;
                    g_84.f0 ^= (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((l_1503 == (((safe_mul_func_uint8_t_u_u((*g_109), (safe_mul_func_uint16_t_u_u(l_1476, ((*g_547) &= (0x6A74L > l_1479[6])))))) < ((1L > (safe_mod_func_int16_t_s_s((l_1512[2][0][4] = (safe_rshift_func_int8_t_s_s((0x4508F908L ^ l_1479[6]), 4))), 1L))) || g_902)) , (void*)0)), g_174.f2)) == l_1513), p_10));
                    g_227 = func_21((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((l_1456.f2 , (((0x745DL || p_12) || (safe_sub_func_uint32_t_u_u((g_704[(l_1478 + 1)][(g_5 + 1)][g_161] |= (g_75[0] || ((-5L) | 0xF00BL))), (*g_1278)))) ^ (*g_109))), l_1458.f2)) ^ 0x3DBCL), (-7L))), p_10, (*g_1278));
                }
                if (((l_1477.f1 != (l_1520 != ((*l_1523) = l_1521[4]))) & (((p_10 < (safe_unary_minus_func_int64_t_s((p_10 & (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_1529 , ((safe_rshift_func_int8_t_s_s((1UL <= l_1458.f2), l_1493.f1)) >= p_12)), 12)), l_1477.f0)))))) , p_10) | p_11)))
                { 
                    int64_t l_1534 = 0x84E0B3351D1B66C9LL;
                    int64_t *l_1536 = &g_492;
                    int32_t *l_1539 = &g_1358;
                    (*l_1539) |= (safe_lshift_func_uint8_t_u_u((4294967295UL | (l_1534 , ((~(((*l_1536) = (p_12 >= p_12)) == (safe_add_func_int8_t_s_s(0x7BL, l_1534)))) , p_11))), (*g_109)));
                }
                else
                { 
                    int32_t *l_1540 = (void*)0;
                    int32_t *l_1541 = &g_71;
                    (*l_1541) &= 0x56F5F398L;
                }
            }
            l_1456.f0 |= ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((g_692[(g_161 + 1)] && ((((&l_1458 != (*g_100)) <= (safe_lshift_func_uint8_t_u_s(g_692[(g_5 + 1)], ((((+(safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_1529.f2, 4294967293UL)), (safe_div_func_int8_t_s_s((l_1559 != (void*)0), 0x82L)))) <= p_11), p_11)), (-2L)))) || 252UL) || p_12) ^ p_11)))) > l_1476) & 0x3193L)), 0xDEL)), 0)) || g_1112[0][0][0]);
            (*l_1571) = ((*l_1570) ^= ((((safe_rshift_func_int8_t_s_u(((((((g_490 || ((((l_1477.f2 ^ (((*g_547) = l_1563[0]) <= 0x4454L)) && (0x9D661F28L < ((safe_mod_func_int32_t_s_s((l_1512[0][0][5] = (+((void*)0 != l_1567))), l_1529.f0)) || l_1529.f1))) < l_1456.f2) && 0x389BL)) & l_1477.f2) >= 4294967287UL) == (**g_1208)) != 18446744073709551613UL) > l_1569), (**g_1208))) == p_10) , (void*)0) != &g_820));
            --l_1581;
            for (g_492 = 0; (g_492 <= 1); g_492 += 1)
            { 
                int8_t *l_1594 = &g_452;
                const int16_t l_1597 = (-1L);
                int32_t l_1601[4] = {7L,7L,7L,7L};
                int i, j, k;
                if (((g_704[g_5][g_492][g_492] , p_10) < (safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((65535UL < (safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((((*l_1570) |= ((safe_add_func_int8_t_s_s(((*l_1594) &= (l_1529 , p_12)), l_1458.f0)) > (&g_1208 == l_1595))) , p_12), g_83[0][0][3].f1)) == l_1596) || l_1597), l_1598))), 1L)) != l_1458.f0), (**g_1208)))))
                { 
                    int32_t **l_1599 = &l_1572[3][0];
                    l_1600[2][1][0] = (p_10 , ((*l_1599) = &l_1598));
                }
                else
                { 
                    uint16_t l_1602 = 1UL;
                    --l_1602;
                    if ((*g_1278))
                        break;
                }
                for (g_47.f0 = 0; (g_47.f0 <= 2); g_47.f0 += 1)
                { 
                    uint16_t l_1605 = 0x4DFAL;
                    l_1605--;
                    (*l_1522) = (((*g_552) , (safe_rshift_func_int16_t_s_u(p_12, p_10))) , (void*)0);
                    (*l_1571) ^= 3L;
                    (*l_1570) &= p_10;
                }
            }
        }
        if (l_1477.f0)
            break;
        for (l_1573 = 0; (l_1573 <= 1); l_1573 += 1)
        { 
            struct S0 l_1615 = {1048,-1,5101};
            uint64_t * const * const ***l_1638 = &g_1220;
            union U1 l_1653 = {4UL};
            int32_t *l_1674 = &l_1577;
            uint8_t l_1688 = 0x52L;
            int32_t l_1723 = (-1L);
            uint16_t l_1725 = 0x55B4L;
        }
    }
    for (g_1231 = 23; (g_1231 == (-5)); --g_1231)
    { 
        int16_t l_1800 = 0x2539L;
        int32_t l_1801 = (-10L);
        int32_t l_1802 = 0x55AD0574L;
        int32_t l_1803 = 0x6370E9BDL;
        int32_t l_1804 = 0L;
        int32_t l_1806 = 0L;
        int32_t l_1807 = 0x8615A164L;
        int32_t l_1809[1][6] = {{0x1F46766EL,1L,1L,1L,(-1L),(-1L)}};
        uint16_t l_1810 = 65532UL;
        struct S0 l_1814 = {-15455,-0,2985};
        int i, j;
        l_1810++;
        if ((l_1801 = ((((**g_551) = (l_1814 = l_1813)) , p_12) | ((*g_92) && (((void*)0 == &l_1784[4]) == (0x800CL > 0UL))))))
        { 
            union U1 l_1815 = {1UL};
            (*g_1278) = (*g_1278);
            return l_1815;
        }
        else
        { 
            if (g_84.f0)
                goto lbl_1816;
        }
        if (l_1804)
            continue;
    }
    g_1827 = (((g_492 = (g_1231 ^= (((*g_1278) = ((void*)0 == &l_1600[2][1][0])) < ((0x34L & ((safe_add_func_uint16_t_u_u(p_11, p_10)) || (l_1826 ^= ((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0x764F22B6C4649AA8LL, (safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s(g_111[1][2], p_10)))))), p_12)) & p_10)))) && p_11)))) && 18446744073709551615UL) , (-1L));
    g_1278 = (p_10 , &g_78[0][0]);
    for (g_1233 = 0; (g_1233 <= 0); g_1233 += 1)
    { 
        uint32_t *l_1831 = &l_1596;
        int32_t l_1842 = 1L;
        int8_t *l_1885 = &g_452;
        int8_t **l_1884 = &l_1885;
        uint32_t l_1889[6] = {0x7805DA57L,0x7805DA57L,0x7805DA57L,0x7805DA57L,0x7805DA57L,0x7805DA57L};
        struct S0 ****l_1910 = &g_1039[0];
        union U1 l_1913 = {0x5EB2A4CDL};
        uint64_t l_2011 = 1UL;
        const uint32_t l_2035 = 4294967295UL;
        int i;
    }
    return l_1458;
}



static int64_t  func_13(uint8_t  p_14, uint32_t  p_15, uint8_t  p_16)
{ 
    uint32_t l_241 = 0xE1F845FBL;
    int32_t l_243 = 0L;
    int32_t l_245[7][5] = {{(-10L),1L,0xD057D9B5L,1L,(-10L)},{0x5709750CL,1L,0xED315BEFL,(-1L),0xED315BEFL},{0x80B581A6L,0x80B581A6L,0xD057D9B5L,(-10L),0x50D6AFF9L},{1L,0x5709750CL,0x5709750CL,1L,0xED315BEFL},{1L,(-10L),0x092D7B6EL,0x092D7B6EL,(-10L)},{0xED315BEFL,0x5709750CL,0x9143F0A4L,1L,1L},{0x0C892A60L,0x80B581A6L,0x0C892A60L,0x092D7B6EL,0xD057D9B5L}};
    uint32_t l_246 = 0x8184EF31L;
    union U1 **l_249 = &g_82;
    int64_t *l_292 = &g_161;
    int64_t **l_291[2][2][5] = {{{&l_292,(void*)0,&l_292,&l_292,&l_292},{&l_292,(void*)0,&l_292,&l_292,&l_292}},{{&l_292,(void*)0,&l_292,&l_292,&l_292},{&l_292,(void*)0,&l_292,&l_292,&l_292}}};
    struct S0 l_313 = {8097,0,7084};
    int32_t l_363[7][3][4] = {{{0xCBA161EBL,0L,1L,0L},{0L,0xF5B5C36CL,0xF4A1A8C0L,1L},{0L,0xF5B5C36CL,0L,0L}},{{0xF5B5C36CL,0L,(-1L),0L},{(-4L),0xF4A1A8C0L,0xCB3D1823L,0xB6EEE2D5L},{(-1L),0xA7744608L,0x316A125EL,0x09721E61L}},{{0xB6EEE2D5L,0x316A125EL,0xF5B5C36CL,0xCB3D1823L},{0xB6EEE2D5L,0xCBA161EBL,0x316A125EL,0xFF1E00B8L},{(-1L),0xCB3D1823L,0xCB3D1823L,(-1L)}},{{(-4L),0L,(-1L),5L},{0xF5B5C36CL,0xFF1E00B8L,0L,0L},{0L,0x09721E61L,0xF4A1A8C0L,0L}},{{0L,0xFF1E00B8L,1L,5L},{0xCBA161EBL,0L,0xCBA161EBL,(-1L)},{0xF4A1A8C0L,0xCB3D1823L,0xB6EEE2D5L,0xFF1E00B8L}},{{0L,0xCBA161EBL,5L,0xCB3D1823L},{0L,0x316A125EL,5L,0x09721E61L},{0L,0xA7744608L,0xB6EEE2D5L,0xB6EEE2D5L}},{{0xF4A1A8C0L,0xF4A1A8C0L,0xCBA161EBL,0L},{0xCBA161EBL,0L,1L,0L},{0L,0xF5B5C36CL,0xF4A1A8C0L,1L}}};
    int8_t l_374[7] = {0x69L,0xE7L,0x69L,0x69L,0xE7L,0x69L,0x69L};
    int64_t l_393 = 0L;
    int32_t *l_395 = &l_363[5][0][1];
    uint64_t **l_400 = &g_92;
    struct S0 l_414 = {14650,-1,7858};
    uint32_t l_494 = 9UL;
    uint32_t l_522 = 0xD632855AL;
    int32_t l_540[6] = {0xE34DAC4AL,0xE34DAC4AL,(-7L),0xE34DAC4AL,0xE34DAC4AL,(-7L)};
    struct S0 **l_553 = &g_552;
    uint16_t l_558 = 65533UL;
    int8_t l_580[2];
    uint8_t l_583 = 0UL;
    int64_t l_588 = 0L;
    int16_t *l_650 = (void*)0;
    uint8_t l_730 = 0x82L;
    uint8_t l_764[7];
    uint64_t l_803 = 18446744073709551615UL;
    uint64_t * const *l_811 = (void*)0;
    uint64_t * const **l_810[4][7][4] = {{{&l_811,(void*)0,&l_811,(void*)0},{(void*)0,&l_811,&l_811,(void*)0},{&l_811,&l_811,&l_811,&l_811},{(void*)0,(void*)0,&l_811,&l_811},{&l_811,(void*)0,&l_811,(void*)0},{&l_811,(void*)0,&l_811,(void*)0},{&l_811,(void*)0,&l_811,&l_811}},{{(void*)0,(void*)0,&l_811,&l_811},{(void*)0,&l_811,&l_811,&l_811},{(void*)0,(void*)0,&l_811,(void*)0},{&l_811,&l_811,(void*)0,(void*)0},{&l_811,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_811,&l_811,(void*)0}},{{(void*)0,(void*)0,&l_811,&l_811},{&l_811,&l_811,&l_811,&l_811},{(void*)0,(void*)0,&l_811,(void*)0},{(void*)0,&l_811,(void*)0,&l_811},{(void*)0,&l_811,(void*)0,&l_811},{&l_811,&l_811,(void*)0,(void*)0},{&l_811,(void*)0,&l_811,&l_811}},{{(void*)0,&l_811,&l_811,&l_811},{(void*)0,(void*)0,&l_811,(void*)0},{&l_811,&l_811,(void*)0,(void*)0},{&l_811,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_811,&l_811,(void*)0},{(void*)0,(void*)0,&l_811,&l_811}}};
    const int32_t l_818 = (-10L);
    int32_t **l_828 = &g_227;
    uint32_t l_841 = 1UL;
    union U1 ***l_851[3];
    int32_t l_870 = 0x5F02C9DDL;
    int64_t l_981 = 0x827D6E2177E49AD0LL;
    int8_t l_983 = (-1L);
    uint8_t **l_993[5];
    uint8_t ***l_992 = &l_993[0];
    uint8_t **** const l_991[1] = {&l_992};
    int8_t l_1023 = (-3L);
    uint32_t ****l_1028[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    struct S0 ***l_1037 = &g_551;
    uint32_t ****l_1092[4][1][5] = {{{&g_821,&g_821,&g_821,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821}}};
    int16_t l_1230 = (-9L);
    uint16_t l_1367 = 65535UL;
    int32_t l_1425 = (-5L);
    int16_t l_1445 = (-7L);
    int32_t *l_1446 = (void*)0;
    int32_t *l_1447 = &g_71;
    int32_t *l_1448 = &g_71;
    int32_t *l_1449 = &g_5;
    int32_t *l_1450 = &g_1358;
    int32_t *l_1451[3][3] = {{&g_78[0][0],&g_78[0][0],&g_78[0][0]},{&g_1358,&g_1358,&g_1358},{&g_78[0][0],&g_78[0][0],&g_78[0][0]}};
    uint64_t l_1452 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_580[i] = 0x4DL;
    for (i = 0; i < 7; i++)
        l_764[i] = 0xE8L;
    for (i = 0; i < 3; i++)
        l_851[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_993[i] = &g_109;
lbl_497:
    for (g_47.f1 = 0; (g_47.f1 <= 0); g_47.f1 += 1)
    { 
        int32_t *l_242[4];
        int16_t l_244 = 0x8671L;
        union U1 **l_252 = &g_82;
        uint64_t l_257 = 5UL;
        int64_t **l_294[5];
        uint16_t *l_312[1];
        const uint64_t l_392 = 18446744073709551607UL;
        int i;
        for (i = 0; i < 4; i++)
            l_242[i] = &g_78[0][0];
        for (i = 0; i < 5; i++)
            l_294[i] = &l_292;
        for (i = 0; i < 1; i++)
            l_312[i] = &g_111[1][2];
        if (l_241)
            break;
        ++l_246;
        for (g_177 = 0; (g_177 <= 0); g_177 += 1)
        { 
            union U1 **l_250 = &g_216;
            uint8_t *l_251 = &g_83[0][0][3].f1;
            int16_t *l_256[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t **l_255 = &l_256[1];
            int32_t l_278 = 0L;
            uint16_t l_293 = 0x3479L;
            uint8_t l_323[3];
            int i;
            for (i = 0; i < 3; i++)
                l_323[i] = 0UL;
            if ((((*l_251) = (l_249 == l_250)) >= ((l_252 != &g_216) && 0xD7ED5845L)))
            { 
                int64_t *l_290 = (void*)0;
                int64_t **l_289 = &l_290;
                uint16_t *l_314 = &g_111[1][2];
                int i, j;
                for (l_244 = 0; (l_244 >= 0); l_244 -= 1)
                { 
                    int32_t **l_258 = &g_227;
                    int32_t *l_272 = &g_273;
                    int64_t ***l_284 = (void*)0;
                    int64_t ***l_285 = &g_283;
                    int64_t *l_288 = &g_158;
                    int64_t **l_287 = &l_288;
                    int64_t ***l_286[3];
                    uint32_t *l_310 = &g_83[0][0][3].f0;
                    uint32_t *l_311[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_286[i] = &l_287;
                    for (i = 0; i < 3; i++)
                        l_311[i] = &l_241;
                    g_78[g_177][g_47.f1] = (((((safe_mod_func_int64_t_s_s((l_257 = (((l_255 = l_255) == (void*)0) != g_111[(l_244 + 1)][g_47.f1])), ((g_125[(g_47.f1 + 1)][g_47.f1] >= g_78[g_177][l_244]) && ((-9L) > g_78[l_244][l_244])))) || g_78[l_244][g_177]) | g_78[l_244][g_177]) & g_78[g_177][l_244]) ^ 248UL);
                    (*l_258) = &l_245[(g_177 + 3)][(g_177 + 3)];
                    if (l_245[(g_177 + 6)][(g_47.f1 + 1)])
                        continue;
                    g_78[g_47.f1][l_244] = (!(safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(p_16, (((((((*l_272) = 0L) , ((+(+(l_245[0][4] > (**l_258)))) == (safe_lshift_func_int16_t_s_s((-2L), l_278)))) || (((safe_add_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(((((l_289 = ((*l_285) = g_283)) != l_291[1][0][0]) , 0xA7L) == l_246), g_125[0][0])) , p_16), g_158)) ^ 0x22AFL) == l_278)) <= l_293) | p_16) && (*g_227)))) , p_14), p_14)) <= 3L), (*g_109))), 2)) <= 0x1402L), p_16)), 0xAC487B60L)));
                    l_245[(g_47.f1 + 2)][(g_47.f1 + 4)] = (p_14 , (l_246 | (((void*)0 == l_294[1]) ^ (g_111[(g_47.f1 + 4)][(g_177 + 2)] = (safe_sub_func_int64_t_s_s((((safe_div_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s((p_15 < (safe_sub_func_int64_t_s_s((+(g_174.f2 ^= ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((**l_258), l_245[3][1])) != p_16), 0x0DL)), p_15)) || g_158))), 0x0B306FCED62CDCAFLL))), 1)) < g_125[0][0]) & 0x95L) <= 0x6D3321529816D34CLL), 0x3147L)) & p_14) , p_16), 18446744073709551613UL))))));
                }
                l_245[(g_47.f1 + 4)][(g_177 + 4)] = (l_312[0] != (l_313 , l_314));
            }
            else
            { 
                uint32_t l_319[3];
                const uint32_t *l_325 = &g_326;
                const uint32_t **l_324 = &l_325;
                int32_t l_335 = 0L;
                uint64_t **l_344 = &g_92;
                int32_t **l_345 = &l_242[1];
                int8_t l_370 = (-10L);
                int i;
                for (i = 0; i < 3; i++)
                    l_319[i] = 0x4DC05E0AL;
                for (l_293 = 1; (l_293 <= 4); l_293 += 1)
                { 
                    int32_t **l_320 = &l_242[1];
                    (*l_320) = ((safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((*l_292) = (l_243 = ((*g_109) == l_319[1]))), p_14)), p_15)) , &g_71);
                    l_278 = p_14;
                    (**l_320) |= l_293;
                    g_71 &= (l_319[1] | 0xCB30D84BL);
                    if (l_319[1])
                        break;
                }
                if ((safe_div_func_int64_t_s_s((((l_323[0] , (void*)0) == ((*l_324) = &p_15)) | (safe_lshift_func_int16_t_s_s((l_245[1][0] , (((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_78[0][0], (((l_335 ^= p_14) == (*g_109)) < l_319[1]))) >= l_319[0]), p_16)), p_15)) && l_278) | p_14)), p_15))), p_16)))
                { 
                    return p_14;
                }
                else
                { 
                    uint8_t l_338 = 0x22L;
                    uint32_t *l_339 = &g_83[0][0][3].f0;
                    uint32_t *l_340 = &l_241;
                    const uint32_t ***l_343 = &l_324;
                    g_71 = (safe_mod_func_uint64_t_u_u(((((*l_339) = ((*l_340) ^= l_338)) && (!0x9674188EB7DA8BCALL)) && (+(g_174 , p_15))), l_319[2]));
                    (*l_343) = &l_325;
                    g_3 ^= (&g_92 == l_344);
                    if (p_14)
                        continue;
                }
                (*l_345) = &g_71;
                for (l_243 = 0; (l_243 <= 0); l_243 += 1)
                { 
                    union U1 l_356 = {0UL};
                    int8_t *l_371 = &l_370;
                    uint32_t *l_372[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_372[i] = &l_241;
                    (*l_345) = (((p_15 ^ (safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_323[0] , p_14) >= (((((safe_div_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u((l_356 , (safe_mul_func_int8_t_s_s((0x809D7022L & (g_174.f2 |= (safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((*l_371) = ((l_363[5][0][1] , (((safe_mul_func_int16_t_s_s((((*l_251) = (safe_add_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(((((((void*)0 == &g_78[0][0]) == 4294967295UL) <= g_273) > l_370) < p_15), (-1L))) != 0xC8L), p_14))) != p_15), p_14)) | l_356.f0) | 0x5244983DL)) < g_75[0])), g_125[0][0])) ^ (-10L)), l_293)))), 0xFFL))), 0xF58CL)) < g_161) <= 0xEAL) == l_323[0]), g_125[0][0])) == (**g_91)) , p_16) != g_174.f0) <= g_84.f1)), (-1L))), g_273)) <= (*g_92)) == 0xD6CEA0210FF5B612LL) == (**l_345)), p_14))) > l_293) , l_372[1]);
                    if (p_15)
                        break;
                    (**l_345) ^= (&g_227 == &g_227);
                }
            }
        }
        for (g_71 = 0; (g_71 >= 0); g_71 -= 1)
        { 
            int32_t l_373[2][2][5] = {{{0xD41BAC36L,0L,0L,0xD41BAC36L,0L},{0xD41BAC36L,0xD41BAC36L,1L,0xD41BAC36L,0xD41BAC36L}},{{0L,0xD41BAC36L,0L,0L,0xD41BAC36L},{0xD41BAC36L,0L,0L,0xD41BAC36L,0L}}};
            int32_t l_403[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_403[i] = 0x36D4D769L;
            if (g_111[(g_47.f1 + 4)][g_71])
                break;
            for (l_243 = 0; (l_243 <= 0); l_243 += 1)
            { 
                int32_t l_375 = 0x8C925E92L;
                uint32_t l_376 = 9UL;
                uint8_t *l_386[3];
                int32_t *l_396 = &l_363[0][1][1];
                uint32_t *l_411 = &l_246;
                uint32_t **l_410 = &l_411;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_386[i] = &g_83[0][0][3].f1;
                --l_376;
                if (((safe_add_func_int64_t_s_s((-7L), 0x98FD9AC0C528C32FLL)) ^ (safe_mul_func_uint16_t_u_u((g_111[(l_243 + 2)][(g_71 + 2)] = g_75[g_47.f1]), (+(safe_rshift_func_int8_t_s_u((((p_14 = (*g_109)) & ((safe_lshift_func_uint16_t_u_u(p_15, ((safe_lshift_func_uint16_t_u_u((0x035D1E97L || (~(-8L))), 1)) < l_392))) ^ 65532UL)) < l_313.f1), l_393)))))))
                { 
                    int32_t **l_394[6][7] = {{&l_242[0],&l_242[0],&g_227,&l_242[0],&l_242[0],&g_227,&l_242[0]},{&l_242[1],(void*)0,(void*)0,&l_242[1],(void*)0,(void*)0,&l_242[1]},{&g_227,&l_242[0],&g_227,&g_227,&l_242[0],&g_227,&g_227},{&l_242[1],&l_242[1],&l_242[1],&l_242[1],&l_242[1],&l_242[1],&l_242[1]},{&l_242[0],&g_227,&g_227,&l_242[0],&g_227,&g_227,&l_242[0]},{(void*)0,&l_242[1],(void*)0,(void*)0,&l_242[1],(void*)0,(void*)0}};
                    int i, j;
                    l_396 = (l_395 = &l_363[(g_47.f1 + 4)][g_71][(g_47.f1 + 2)]);
                }
                else
                { 
                    int32_t l_413 = 0L;
                    struct S0 *l_415 = &g_174;
                    l_403[1] |= (((**g_91) = ((0x64EBL | (((((*l_396) ^ (!(l_400 != &g_92))) | (safe_sub_func_int16_t_s_s(l_373[0][0][3], ((g_83[0][0][3].f1--) <= (p_16 = (+(((p_16 ^ ((~((safe_sub_func_uint8_t_u_u((l_410 != g_412), p_15)) && (**g_91))) <= p_16)) > l_413) , (*g_109)))))))) != (*l_396)) & l_373[1][1][2])) > p_15)) || 0xB9004F46456F0451LL);
                    (*l_415) = l_414;
                    if ((*l_396))
                        break;
                }
                (*l_396) = (&g_174 == ((*l_396) , &g_84));
                for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                { 
                    int i;
                    (*l_249) = (void*)0;
                    (*l_395) = (+(safe_sub_func_int8_t_s_s(((-1L) & (4294967295UL || l_403[(g_47.f1 + 1)])), ((*l_395) ^ (*l_396)))));
                    (*l_395) &= p_14;
                }
                for (g_79 = 0; g_79 < 2; g_79 += 1)
                {
                    for (g_273 = 0; g_273 < 2; g_273 += 1)
                    {
                        for (p_16 = 0; p_16 < 5; p_16 += 1)
                        {
                            l_291[g_79][g_273][p_16] = &l_292;
                        }
                    }
                }
            }
        }
        for (l_244 = 0; (l_244 <= 0); l_244 += 1)
        { 
            uint64_t l_422[7];
            union U1 l_423[6] = {{4294967295UL},{4294967295UL},{4294967286UL},{4294967295UL},{0x6CA63A24L},{4294967295UL}};
            uint32_t l_434 = 0x9DA1BF90L;
            union U1 *l_437 = (void*)0;
            int i;
            for (i = 0; i < 7; i++)
                l_422[i] = 0xABB8F6287ED04467LL;
            (*l_395) |= 9L;
            if (p_16)
                break;
            if (g_47.f1)
                goto lbl_827;
        }
    }
    if (((*l_395) = 1L))
    { 
        uint64_t l_442 = 0UL;
        struct S0 *l_443[3][2] = {{&l_313,&l_313},{&l_313,&l_313},{&l_313,&l_313}};
        int32_t l_474 = 0x86002D92L;
        int32_t l_475 = (-1L);
        int32_t l_476 = 0xD6CE07A3L;
        int32_t l_478 = 0x9AACC7ECL;
        int32_t l_479 = (-4L);
        int32_t l_480 = 0xD656D7FFL;
        int32_t l_481 = 0x4D4F22A7L;
        int32_t l_483 = (-5L);
        union U1 *l_488[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_489 = 0L;
        int32_t l_491 = (-4L);
        int32_t l_493 = 0x467F332CL;
        int64_t *l_502[7];
        uint32_t ***l_544 = (void*)0;
        const union U1 *l_624 = &g_83[0][0][3];
        const union U1 **l_623 = &l_624;
        int16_t *l_652[2];
        uint8_t l_662 = 0x26L;
        uint32_t l_735 = 0x23648963L;
        uint32_t l_750[4] = {7UL,7UL,7UL,7UL};
        const int16_t ** const * const l_780 = (void*)0;
        int8_t l_791[3];
        int64_t l_794 = 0L;
        uint64_t ***l_799[2];
        int16_t ***l_825 = &g_546[0][0][4];
        int32_t *l_826[4];
        int i, j;
        for (i = 0; i < 7; i++)
            l_502[i] = &l_393;
        for (i = 0; i < 2; i++)
            l_652[i] = &g_75[0];
        for (i = 0; i < 3; i++)
            l_791[i] = 0x3AL;
        for (i = 0; i < 2; i++)
            l_799[i] = &g_91;
        for (i = 0; i < 4; i++)
            l_826[i] = &g_3;
        for (g_71 = 1; (g_71 >= 0); g_71 -= 1)
        { 
            uint32_t l_451[7][2];
            int32_t l_477[1][7] = {{0x08881C93L,0xB93F2658L,0xB93F2658L,0x08881C93L,0xB93F2658L,0xB93F2658L,0x08881C93L}};
            int8_t l_482 = 1L;
            uint64_t l_484 = 4UL;
            union U1 *l_487[4] = {&g_47,&g_47,&g_47,&g_47};
            uint64_t l_500[4] = {0x57ED3CB57BB43DA3LL,0x57ED3CB57BB43DA3LL,0x57ED3CB57BB43DA3LL,0x57ED3CB57BB43DA3LL};
            uint64_t **l_536 = &g_92;
            uint32_t l_562[1];
            int32_t *l_567 = &g_490;
            uint8_t l_605 = 0xAEL;
            uint32_t * const l_613 = &g_614;
            uint32_t * const *l_612 = &l_613;
            uint32_t * const **l_611 = &l_612;
            uint32_t * const ***l_610 = &l_611;
            struct S0 l_625 = {13064,1,6866};
            int32_t l_626 = 8L;
            int16_t *l_653 = &g_75[0];
            int16_t l_693 = 0x22BCL;
            int16_t **l_697 = (void*)0;
            int32_t l_698 = 1L;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_451[i][j] = 18446744073709551609UL;
            }
            for (i = 0; i < 1; i++)
                l_562[i] = 4UL;
        }
        for (l_662 = (-19); (l_662 == 9); l_662 = safe_add_func_uint32_t_u_u(l_662, 3))
        { 
            union U1 *l_701 = &g_83[0][0][3];
            const int32_t l_709 = (-6L);
            union U1 ***l_721 = &l_249;
            int32_t l_731 = 0xF4363007L;
            int32_t l_749[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
            int16_t l_793 = (-1L);
            uint32_t ****l_795 = &l_544;
            uint64_t ***l_809 = &g_91;
            uint64_t * const **l_813 = &l_811;
            uint8_t l_819 = 255UL;
            int i;
            (**l_553) = (*g_552);
            (*l_623) = l_701;
            if (((safe_div_func_int8_t_s_s((g_704[0][3][0] >= l_479), (safe_sub_func_uint64_t_u_u((**g_91), (l_662 , ((*g_551) == l_443[1][0])))))) ^ p_14))
            { 
                struct S0 l_707 = {-4146,1,1324};
                union U1 ***l_719 = &l_249;
                union U1 ****l_720[3][4][6] = {{{&l_719,&l_719,&l_719,&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719,(void*)0,&l_719,&l_719},{&l_719,&l_719,&l_719,&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719,&l_719,(void*)0,(void*)0}},{{&l_719,&l_719,&l_719,&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719,&l_719,&l_719,(void*)0},{&l_719,(void*)0,&l_719,&l_719,&l_719,&l_719},{&l_719,(void*)0,&l_719,(void*)0,&l_719,&l_719}},{{&l_719,&l_719,&l_719,&l_719,&l_719,(void*)0},{&l_719,&l_719,&l_719,&l_719,&l_719,&l_719},{&l_719,&l_719,&l_719,(void*)0,&l_719,(void*)0},{&l_719,&l_719,&l_719,&l_719,&l_719,&l_719}}};
                uint64_t *l_724 = &g_40;
                uint64_t *l_725[6] = {&g_79,&g_79,&g_40,&g_79,&g_79,&g_40};
                int32_t *l_732 = &g_490;
                int32_t *l_733 = &l_243;
                int32_t *l_734 = &l_363[6][1][0];
                int i, j, k;
                if (((*l_624) , p_14))
                { 
                    int32_t *l_710 = &g_3;
                    int32_t *l_711[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_711[i] = &l_478;
                    l_707.f1 = ((*l_710) = ((*l_395) = (l_707 , (~(p_14 , l_709)))));
                    if (g_174.f0)
                        goto lbl_497;
                }
                else
                { 
                    const int32_t *l_713 = &l_480;
                    const int32_t **l_712 = &l_713;
                    uint16_t *l_716 = &g_111[4][2];
                    uint32_t *l_717 = &g_704[0][3][0];
                    int32_t l_718[6][3] = {{(-1L),(-1L),(-1L)},{7L,0xB1ECE3B3L,7L},{(-1L),(-1L),(-1L)},{7L,0xB1ECE3B3L,7L},{(-1L),(-1L),(-1L)},{7L,0xB1ECE3B3L,7L}};
                    int i, j;
                    (*l_712) = &l_709;
                    l_718[3][2] = ((safe_add_func_int64_t_s_s((g_158 = 3L), (0xBA32L > 0x2D4CL))) || (((*l_395) |= ((*l_717) = ((((p_15 != p_16) > ((*l_716) |= ((*g_109) == (18446744073709551615UL <= p_15)))) == l_707.f0) >= l_474))) | l_709));
                    (*l_712) = &g_71;
                    (*l_712) = &g_432;
                    if ((*l_713))
                        break;
                }
                (*l_395) = ((l_721 = l_719) == (void*)0);
                for (p_14 = 0; (p_14 <= 0); p_14 += 1)
                { 
                    int32_t *l_729 = &l_493;
                    l_731 = ((safe_div_func_int64_t_s_s((p_15 < ((*g_547) = ((l_724 = &l_442) != l_725[5]))), ((l_474 &= p_16) | ((*g_92) ^= ((safe_div_func_int64_t_s_s((safe_unary_minus_func_int64_t_s(((*l_395) <= ((g_125[1][0] < ((*l_729) |= l_707.f0)) != p_16)))), l_730)) | 0xF8L))))) <= 0xF7B8L);
                    if (g_77)
                        break;
                }
                --l_735;
            }
            else
            { 
                int32_t *l_738 = (void*)0;
                int32_t *l_739 = (void*)0;
                int32_t *l_740 = (void*)0;
                int32_t *l_741 = (void*)0;
                int32_t *l_742 = &l_491;
                int32_t *l_743 = &l_480;
                int32_t *l_744 = &l_480;
                int32_t *l_745 = &l_479;
                int32_t *l_746 = &g_78[0][0];
                int32_t *l_747 = &l_478;
                int32_t *l_748[6][1][6] = {{{&l_489,(void*)0,(void*)0,&l_489,&l_489,(void*)0}},{{&l_489,&l_489,(void*)0,(void*)0,&l_489,&l_489}},{{&l_489,(void*)0,(void*)0,&l_489,&l_489,(void*)0}},{{&l_489,&l_489,(void*)0,(void*)0,&l_489,&l_489}},{{&l_489,(void*)0,(void*)0,&l_489,&l_489,(void*)0}},{{&l_489,&l_489,(void*)0,(void*)0,&l_489,&l_489}}};
                int32_t l_755 = 0x80995AA5L;
                uint32_t ****l_796 = &l_544;
                int i, j, k;
                l_750[0]--;
                for (g_161 = 0; (g_161 <= 17); g_161++)
                { 
                    uint64_t l_756 = 18446744073709551612UL;
                    struct S0 * const *l_761[1];
                    uint16_t *l_777 = (void*)0;
                    uint16_t *l_778 = &l_558;
                    uint16_t *l_779 = (void*)0;
                    int32_t **l_792 = &l_745;
                    int32_t *l_797 = &g_273;
                    uint16_t l_798 = 65530UL;
                    uint64_t ****l_800 = &l_799[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_761[i] = (void*)0;
                    ++l_756;
                    g_227 = func_21((safe_lshift_func_uint16_t_u_u((l_761[0] == &g_552), p_16)), (g_158 || p_14), (((((l_764[0] = ((safe_add_func_uint8_t_u_u(0x71L, (1UL >= (*l_747)))) | 0x62L)) | l_476) & (*l_744)) , (**g_551)) , p_15));
                    (*l_743) &= (((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(1UL, (safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(((l_731 |= ((*l_778) = p_14)) && (&g_546[0][0][4] == l_780)), (((*l_797) &= ((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((((((*l_792) = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0x90B91B4326D363BBLL, (safe_sub_func_uint64_t_u_u(((p_15 != (l_750[0] , l_709)) , l_791[1]), (**g_91))))), p_16)) , &l_363[5][0][3])) == (void*)0) >= l_793) | 0x6ADFL) >= (*l_746)), l_794)), (*l_747))) , l_795) == l_796) , 8L)) , p_16))), p_14)) , 0L) <= g_174.f1) > g_77), p_14)))), (*l_395))), 0xA9L)) , l_798) , (*g_227));
                    (*l_800) = l_799[0];
                }
                if (p_16)
                    break;
                for (g_432 = (-25); (g_432 >= (-29)); g_432--)
                { 
                    uint64_t * const ***l_812[1];
                    int8_t *l_816[1];
                    union U1 l_817 = {0xD0A2122CL};
                    uint32_t *****l_822 = &l_795;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_812[i] = &l_810[2][0][0];
                    for (i = 0; i < 1; i++)
                        l_816[i] = &l_791[1];
                    l_803--;
                    g_227 = (void*)0;
                    l_819 &= (safe_rshift_func_int16_t_s_u(((((p_15 <= ((+l_478) == ((l_809 == (l_813 = l_810[2][0][0])) ^ (((p_16 > ((*l_742) = ((l_493 = 0xA3L) ^ ((void*)0 == &l_794)))) , l_817) , 0xE5L)))) || (*g_109)) , l_818) == g_158), 13));
                    (*l_822) = g_820;
                    if (p_14)
                        break;
                }
            }
        }
        g_5 |= ((*l_395) | ((g_47 , ((*l_825) = (void*)0)) == &g_509));
    }
    else
    { 
lbl_827:
        (*l_395) = p_14;
        (*l_828) = &g_5;
    }
    if (p_15)
    { 
        int32_t l_834 = (-1L);
        uint64_t l_835[6][4][6] = {{{18446744073709551615UL,1UL,0x2363F3E3D1B49B72LL,0x54CD68D0958A8433LL,18446744073709551615UL,0xEB06CF70D577CC75LL},{1UL,0x1E7AD95CBCA1F082LL,18446744073709551615UL,1UL,0x54CD68D0958A8433LL,18446744073709551610UL},{18446744073709551612UL,5UL,0x217E51946DE587ADLL,0x2363F3E3D1B49B72LL,18446744073709551613UL,0xF42CC9C0FA8FC437LL},{0x09FDE8915D6E470ELL,18446744073709551615UL,0xFED4F92C039A8E47LL,0xF42CC9C0FA8FC437LL,0xACDD2570C3C6718ALL,18446744073709551615UL}},{{0x717848DBED5FB0ACLL,18446744073709551615UL,0xDC600F43FD69DD15LL,0x155AB645935C056ALL,0UL,0x155AB645935C056ALL},{0xE7C1CF52EEE5FA7ELL,0x54A83A3D6C01C4D4LL,0xE7C1CF52EEE5FA7ELL,18446744073709551614UL,0x1E7AD95CBCA1F082LL,1UL},{0xF7AA96EF2FC1E55FLL,4UL,0xB175C19DC59E5074LL,18446744073709551615UL,0xFED4F92C039A8E47LL,0xEB06CF70D577CC75LL},{18446744073709551610UL,1UL,0x54A83A3D6C01C4D4LL,18446744073709551615UL,0xDC600F43FD69DD15LL,18446744073709551614UL}},{{0xF7AA96EF2FC1E55FLL,0x5E8461F85DD8EA46LL,18446744073709551612UL,18446744073709551614UL,0x41D8D159974CB247LL,5UL},{0xE7C1CF52EEE5FA7ELL,18446744073709551612UL,1UL,0x155AB645935C056ALL,0x5E8461F85DD8EA46LL,0x9E0C5D738E26D368LL},{0x717848DBED5FB0ACLL,0xFED4F92C039A8E47LL,18446744073709551614UL,0xF42CC9C0FA8FC437LL,18446744073709551615UL,0xB998DB279450445ALL},{0x155AB645935C056ALL,1UL,18446744073709551613UL,4UL,0x54CD68D0958A8433LL,0xACDD2570C3C6718ALL}},{{0x09FDE8915D6E470ELL,0x717848DBED5FB0ACLL,0x54CD68D0958A8433LL,0x2234A6E2982875E5LL,0x2234A6E2982875E5LL,0x54CD68D0958A8433LL},{0UL,0UL,18446744073709551615UL,18446744073709551615UL,0xADEDB1C86FE6427ALL,18446744073709551615UL},{1UL,0xFF85E37D9A928E38LL,0xFED4F92C039A8E47LL,0xACDD2570C3C6718ALL,0xE7C1CF52EEE5FA7ELL,18446744073709551615UL},{0x54A83A3D6C01C4D4LL,1UL,0xFED4F92C039A8E47LL,0x9E0C5D738E26D368LL,0UL,18446744073709551615UL}},{{18446744073709551612UL,0x9E0C5D738E26D368LL,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,0x54CD68D0958A8433LL},{18446744073709551615UL,18446744073709551607UL,0x54CD68D0958A8433LL,0xB998DB279450445ALL,18446744073709551614UL,0xACDD2570C3C6718ALL},{0xEB06CF70D577CC75LL,0UL,18446744073709551613UL,0xF7AA96EF2FC1E55FLL,18446744073709551612UL,0xB998DB279450445ALL},{18446744073709551612UL,18446744073709551615UL,18446744073709551614UL,0x09FDE8915D6E470ELL,0x805DBE80AB60424DLL,0x9E0C5D738E26D368LL}},{{18446744073709551614UL,5UL,1UL,0xE7C1CF52EEE5FA7ELL,1UL,5UL},{0xFED4F92C039A8E47LL,0x41D8D159974CB247LL,18446744073709551612UL,0x217E51946DE587ADLL,0x9E0C5D738E26D368LL,18446744073709551614UL},{18446744073709551615UL,0x2234A6E2982875E5LL,0x54A83A3D6C01C4D4LL,0x5E8461F85DD8EA46LL,18446744073709551612UL,0xEB06CF70D577CC75LL},{0xADEDB1C86FE6427ALL,0x2234A6E2982875E5LL,0xB175C19DC59E5074LL,18446744073709551610UL,0x9E0C5D738E26D368LL,1UL}}};
        int64_t l_857 = 9L;
        int64_t l_859 = (-1L);
        int32_t l_864[6];
        uint8_t l_871 = 0UL;
        uint32_t *l_882 = &l_241;
        union U1 *l_924 = &g_83[0][3][3];
        struct S0 l_943 = {-4627,1,7250};
        const union U1 *l_974[5][7] = {{(void*)0,(void*)0,&g_83[0][0][3],(void*)0,(void*)0,&g_83[0][0][3],(void*)0},{&g_83[3][6][0],&g_83[0][0][3],&g_83[0][0][3],&g_47,&g_83[0][0][3],&g_83[0][0][3],&g_83[3][6][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_83[3][6][0],&g_47,&g_83[0][0][3],&g_47,&g_83[3][6][0],&g_83[2][3][1],&g_83[3][6][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_980 = 0xD99650AEL;
        uint32_t *****l_1029 = &l_1028[1][0];
        uint16_t *l_1034[7][6] = {{&l_558,&l_558,&g_111[1][1],&l_558,&g_111[1][1],&l_558},{&g_111[1][1],&g_111[1][2],(void*)0,&l_558,&g_111[4][1],&g_111[2][0]},{&l_558,&g_111[2][0],(void*)0,&g_111[2][0],&l_558,&l_558},{&l_558,&g_111[2][0],&g_111[1][1],&g_111[1][2],&g_111[4][1],&g_111[1][2]},{&l_558,&g_111[1][2],&l_558,&g_111[2][0],&g_111[1][1],&g_111[1][2]},{&l_558,&l_558,&g_111[1][1],&g_111[1][2],&l_558,&g_111[2][0]},{&l_558,&l_558,&g_111[4][1],&g_111[1][2],&l_558,&g_111[1][2]}};
        struct S0 ****l_1038[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_1040 = 0xE1AE614EL;
        union U1 l_1041 = {0x06DBEA1AL};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_864[i] = 1L;
        for (l_522 = 0; (l_522 <= 0); l_522 += 1)
        { 
            int32_t l_833 = 0x3944F0B2L;
            int32_t l_839 = 0L;
            int32_t l_867[6] = {0xF15D66CCL,0xF15D66CCL,0xF15D66CCL,0xF15D66CCL,0xF15D66CCL,0xF15D66CCL};
            union U1 l_881[6] = {{3UL},{3UL},{0xFB146150L},{3UL},{3UL},{0xFB146150L}};
            int64_t **l_914 = &l_292;
            struct S0 l_918[6] = {{2216,0,3103},{2216,0,3103},{2216,0,3103},{2216,0,3103},{2216,0,3103},{2216,0,3103}};
            int32_t **l_919 = &l_395;
            uint32_t *l_920 = &l_841;
            int8_t *l_936 = &l_580[1];
            uint8_t l_945[3][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL}};
            const int8_t l_946 = (-1L);
            int64_t l_956[5][5] = {{0x3DFD015FAA5E9517LL,0x3DFD015FAA5E9517LL,0x366B550E78CA66E1LL,1L,0x0DCBD8F70B7130FDLL},{(-1L),0L,0L,(-1L),0x3DFD015FAA5E9517LL},{(-1L),1L,0xED2D7C885857B82DLL,0xED2D7C885857B82DLL,1L},{0x3DFD015FAA5E9517LL,0L,0xED2D7C885857B82DLL,0x366B550E78CA66E1LL,0x366B550E78CA66E1LL},{0L,0x3DFD015FAA5E9517LL,0L,0xED2D7C885857B82DLL,0x366B550E78CA66E1LL}};
            int32_t l_982 = 3L;
            union U1 ***l_988[6][2] = {{&l_249,&l_249},{&l_249,&l_249},{&l_249,&l_249},{&l_249,&l_249},{&l_249,&l_249},{&l_249,&l_249}};
            union U1 ***l_990 = &l_249;
            int i, j;
            for (g_158 = 4; (g_158 >= 0); g_158 -= 1)
            { 
                int8_t l_829 = 0xBFL;
                int32_t *l_830 = &l_540[0];
                int32_t *l_831 = (void*)0;
                int32_t *l_832[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_832[i] = &g_490;
                for (l_583 = 0; (l_583 <= 3); l_583 += 1)
                { 
                    int i, j;
                    return l_245[(l_522 + 3)][l_583];
                }
                if (l_245[(l_522 + 2)][g_158])
                    break;
                l_835[0][2][0]--;
                if (l_818)
                    goto lbl_827;
                for (p_14 = 1; (p_14 <= 4); p_14 += 1)
                { 
                    int i, j;
                    return l_245[(l_522 + 3)][(l_522 + 1)];
                }
            }
        }
        (*l_395) = (p_15 || (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*l_395) >= ((((((((*l_882) = (((((((&g_821 == ((*l_1029) = l_1028[2][0])) ^ (safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((g_111[1][2]++), p_14)) || (((**g_551) , (((g_1039[0] = l_1037) != (void*)0) & 7L)) && l_943.f0)) | p_15) & p_16), p_15))) <= 1L) && 0x7B6DL) & 0L) < (*l_395)) <= (-1L))) > l_1040) < l_859) & g_704[4][2][0]) , l_1041) , &l_1041) != (*l_249))), (*l_395))), 0xD544ABAFL)));
    }
    else
    { 
        int32_t l_1049 = 0x0C2BC5FDL;
        int32_t l_1051 = 0x536AD825L;
        int32_t l_1055 = (-1L);
        int32_t l_1056[4][7] = {{(-1L),0x09C48B34L,0xBAD1461AL,0xEBFF84F6L,0xBAD1461AL,0x09C48B34L,(-1L)},{0L,0xDFA37CA7L,1L,0xACE7AF4CL,1L,0xDFA37CA7L,0L},{(-1L),0x09C48B34L,0xBAD1461AL,0xEBFF84F6L,0xBAD1461AL,0x09C48B34L,(-1L)},{0L,0xDFA37CA7L,1L,0xACE7AF4CL,1L,0xDFA37CA7L,0L}};
        uint8_t **l_1075 = &g_109;
        uint32_t *****l_1091[3];
        uint16_t l_1111 = 65535UL;
        uint32_t l_1131[5][3] = {{4294967295UL,4294967286UL,4294967295UL},{4294967286UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0xAA84E29FL},{2UL,4294967286UL,0xDBA04B9AL},{4294967295UL,4294967295UL,0xDBA04B9AL}};
        uint8_t l_1153[3][6][1] = {{{6UL},{0xA8L},{6UL},{0xA8L},{6UL},{0xA8L}},{{6UL},{0xA8L},{6UL},{0xA8L},{6UL},{0xA8L}},{{6UL},{0xA8L},{6UL},{0xA8L},{6UL},{0xA8L}}};
        int64_t l_1154 = 0L;
        int8_t l_1155 = 0x49L;
        uint64_t l_1156 = 0x8076D92C47423F9ALL;
        uint8_t ****l_1251 = &l_992;
        struct S0 ***l_1279 = &l_553;
        struct S0 ***l_1280[2];
        uint16_t l_1412 = 65532UL;
        union U1 l_1420 = {3UL};
        uint32_t l_1433 = 0x48555166L;
        int64_t ***l_1444[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1091[i] = &g_820;
        for (i = 0; i < 2; i++)
            l_1280[i] = &g_551;
        for (i = 0; i < 3; i++)
            l_1444[i] = &l_291[1][0][4];
        for (g_3 = (-8); (g_3 != (-28)); g_3 = safe_sub_func_uint64_t_u_u(g_3, 5))
        { 
            if (p_15)
                break;
        }
        for (l_243 = 8; (l_243 <= 4); --l_243)
        { 
            union U1 *l_1046 = &g_83[1][0][5];
            int32_t l_1050 = 0xA0B13D71L;
            int32_t l_1052[3][1][5] = {{{0L,0L,0L,0L,0L}},{{7L,7L,7L,7L,7L}},{{0L,0L,0L,0L,0L}}};
            uint32_t *l_1090 = &g_902;
            int i, j, k;
            for (g_1021 = 0; (g_1021 >= 0); g_1021 -= 1)
            { 
                int8_t l_1048 = 7L;
                int32_t l_1053 = 0x70ADFC9FL;
                int32_t l_1054 = (-3L);
                int32_t l_1057 = 1L;
                int32_t l_1058 = 0x138C84BEL;
                int32_t l_1059 = 0x88F8B5FBL;
                int32_t l_1060 = (-1L);
                int32_t l_1061 = (-2L);
                int32_t l_1062 = (-1L);
                int32_t l_1063 = 0x87604A0FL;
                int32_t l_1065 = 0xC64B481CL;
                int32_t l_1066 = 0x8BE9D37DL;
                struct S0 *l_1070 = &g_174;
                (*l_828) = &g_3;
                (*l_249) = l_1046;
                for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
                { 
                    int32_t *l_1047[4][1] = {{&l_540[5]},{(void*)0},{&l_540[5]},{(void*)0}};
                    int64_t l_1064[5] = {0xC1389C9A294C9AB4LL,0xC1389C9A294C9AB4LL,0xC1389C9A294C9AB4LL,0xC1389C9A294C9AB4LL,0xC1389C9A294C9AB4LL};
                    int i, j, k;
                    g_1067--;
                    (**l_1037) = l_1070;
                    return g_704[g_5][g_5][g_5];
                }
                for (l_1061 = 0; (l_1061 <= 1); l_1061 += 1)
                { 
                    int i, j, k;
                    return g_704[(l_1061 + 2)][(l_1061 + 1)][g_1021];
                }
            }
            (*l_395) ^= (safe_add_func_uint32_t_u_u(0x805C072EL, 0x61FFA07CL));
            (*l_395) &= (safe_div_func_uint32_t_u_u(((((void*)0 != l_1075) , ((*l_1090) = ((safe_rshift_func_uint8_t_u_s((((*g_547) = (((safe_div_func_uint16_t_u_u(4UL, (safe_add_func_uint8_t_u_u(255UL, (((((p_15++) || ((p_16 || (0UL == ((safe_mod_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(0x90L, 0x00L)) , (*g_552)) , l_1050) , p_16), 1L)) ^ g_490))) && p_14)) == 3UL) ^ 1UL) , p_15))))) && 0UL) < p_16)) == g_84.f1), 4)) != (-1L)))) , p_14), l_1056[0][6]));
            if (p_15)
                break;
        }
        if (((((p_14 , l_1028[2][0]) != (l_1092[0][0][1] = l_1028[2][0])) != ((((((*l_395) = (*l_395)) , (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((((((p_15 = (!p_14)) < ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((+(safe_lshift_func_int8_t_s_u((!(((safe_unary_minus_func_int16_t_s(p_14)) , (safe_rshift_func_int16_t_s_u((*g_547), 0))) , g_3)), (*g_109)))) != (-5L)), 0x30L)), l_1056[1][0])), p_16)) | (*g_109))) != l_1056[0][6]) , p_14) == 8UL), 9)) & 247UL) < l_1056[0][6]), (*l_395)))) & l_1111) | g_1112[0][0][0]) ^ 0UL)) , l_1055))
        { 
            int16_t l_1125 = 0x5E2DL;
            int32_t l_1127 = 9L;
            int32_t l_1139 = 0x306A3B13L;
            int32_t l_1141 = 0xC17482EAL;
            int32_t l_1142[3];
            uint8_t l_1143 = 0xDBL;
            int8_t l_1223 = 0xD7L;
            const struct S0 l_1244[6] = {{-1938,-1,5693},{-1938,-1,5693},{-1938,-1,5693},{-1938,-1,5693},{-1938,-1,5693},{-1938,-1,5693}};
            uint16_t l_1289 = 1UL;
            uint16_t l_1292 = 0xF38FL;
            int32_t *l_1293[1][1][2];
            int16_t l_1294 = 0x13D1L;
            uint32_t l_1295 = 0x9633FDCDL;
            uint16_t *l_1311 = &l_558;
            struct S0 **l_1317 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1142[i] = 2L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1293[i][j][k] = &l_540[5];
                }
            }
            for (l_241 = (-18); (l_241 == 38); ++l_241)
            { 
                int8_t l_1126[6][7] = {{0x02L,(-1L),0x77L,0L,0x77L,(-1L),0x02L},{4L,0xC1L,(-3L),0x15L,(-3L),0xC1L,4L},{0x02L,(-1L),0x77L,0L,0x77L,(-1L),0x02L},{4L,4L,1L,(-1L),1L,4L,0x15L},{0L,0x02L,0xC6L,1L,0xC6L,0x02L,0L},{0x15L,4L,1L,(-1L),1L,4L,0x15L}};
                int32_t l_1128 = 0L;
                int16_t l_1129 = 1L;
                int32_t l_1130[4];
                int32_t *l_1134 = &g_71;
                int32_t *l_1135 = &l_1127;
                int32_t *l_1136 = &l_1056[0][6];
                int32_t *l_1137 = &g_78[0][0];
                int32_t *l_1138[5] = {&l_1056[0][6],&l_1056[0][6],&l_1056[0][6],&l_1056[0][6],&l_1056[0][6]};
                int8_t l_1140[7] = {0L,1L,1L,0L,1L,1L,0L};
                uint8_t **l_1150[7] = {&g_109,(void*)0,&g_109,&g_109,(void*)0,&g_109,&g_109};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1130[i] = 4L;
                for (g_492 = 0; (g_492 >= 19); g_492 = safe_add_func_int8_t_s_s(g_492, 6))
                { 
                    uint8_t l_1117 = 0x6BL;
                    int32_t *l_1118 = &l_243;
                    int32_t *l_1119 = &l_243;
                    int32_t *l_1120 = &g_432;
                    int32_t *l_1121 = (void*)0;
                    int32_t *l_1122 = &l_363[2][1][1];
                    int32_t *l_1123 = &l_1055;
                    int32_t *l_1124[3][2] = {{&l_245[0][4],&l_245[0][4]},{&l_245[0][4],&l_245[0][4]},{&l_245[0][4],&l_245[0][4]}};
                    int i, j;
                    (*l_395) ^= l_1117;
                    --l_1131[4][1];
                    return l_1128;
                }
                l_1143++;
                (*l_1134) &= (safe_mul_func_int16_t_s_s(((((((safe_rshift_func_int8_t_s_s(((l_1150[0] == ((*l_992) = &g_109)) ^ (((l_1139 = p_14) | (((*g_547) ^= ((((p_16 && p_14) > ((*g_552) , ((safe_mod_func_int8_t_s_s((0xBD5A1B2234167877LL | p_15), p_15)) >= p_14))) && l_1131[2][2]) & 0x546BCA7D704CF250LL)) || 1UL)) , 0x4B6E9A17L)), l_1153[0][0][0])) != 1L) || p_16) < p_15) && p_14) & p_15), l_1055));
                ++l_1156;
                for (l_1139 = 1; (l_1139 > 17); ++l_1139)
                { 
                    int32_t *l_1174 = &l_870;
                    int8_t *l_1175 = (void*)0;
                    int32_t l_1177 = 0x4D8E9653L;
                    (*l_1136) = ((*l_1134) |= ((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((*g_92), ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_84.f2, ((g_1176 |= (p_14 == (((safe_mul_func_int8_t_s_s((g_452 = (safe_sub_func_int64_t_s_s((~(*g_547)), (6UL != (l_1174 != l_1138[4]))))), (-1L))) && (-1L)) < p_15))) > 9UL))) != l_1051), p_15)) | 0L))), l_1177)) == g_84.f0));
                    g_227 = &g_3;
                }
            }
            (**g_551) = (***l_1037);
            if (p_15)
            { 
                uint16_t *l_1183 = &l_558;
                uint16_t *l_1186 = &l_1111;
                int8_t *l_1189[5][2][1];
                uint64_t ***l_1219 = &g_91;
                uint64_t ****l_1218[1];
                int32_t l_1228[5][6][6] = {{{0x7D242C93L,0L,0xB4FC5AF4L,0x7D242C93L,1L,0L},{0x7D242C93L,1L,0L,0L,0L,0L},{(-1L),(-1L),0xB4FC5AF4L,0x37546468L,0L,(-7L)},{0L,1L,(-4L),0x37546468L,1L,0xB4FC5AF4L},{(-1L),0L,(-4L),0L,(-1L),(-7L)},{0x7D242C93L,0L,0xB4FC5AF4L,0x7D242C93L,1L,0L}},{{0x7D242C93L,1L,0L,0L,0L,0L},{(-1L),(-1L),0xB4FC5AF4L,0x37546468L,0L,(-7L)},{0L,1L,(-4L),0x37546468L,1L,0xB4FC5AF4L},{(-1L),0L,(-4L),0L,(-1L),(-7L)},{0x7D242C93L,0L,0xB4FC5AF4L,0x7D242C93L,1L,0L},{0x7D242C93L,1L,0L,0L,0L,0L}},{{(-1L),(-1L),0xB4FC5AF4L,0x37546468L,0L,(-7L)},{0L,1L,(-4L),0x37546468L,1L,0xB4FC5AF4L},{(-1L),0L,(-4L),0L,(-1L),(-7L)},{0x7D242C93L,0L,0xB4FC5AF4L,0x7D242C93L,1L,0L},{0x7D242C93L,1L,0L,0L,0L,0L},{(-1L),(-1L),0xB4FC5AF4L,0x37546468L,0L,(-7L)}},{{0L,1L,(-4L),0x37546468L,1L,0xB4FC5AF4L},{(-1L),0L,(-4L),0L,(-1L),(-7L)},{0x7D242C93L,0L,0xB4FC5AF4L,0x7D242C93L,1L,0L},{0x7D242C93L,1L,0L,0L,0L,0L},{(-1L),(-1L),0xB4FC5AF4L,0x37546468L,0L,(-7L)},{0L,1L,(-4L),0x37546468L,1L,0xB4FC5AF4L}},{{(-1L),0L,1L,0x8CFF0C3CL,0x0619C570L,0L},{0xB80B5EB2L,0x8CFF0C3CL,0x7D242C93L,0xB80B5EB2L,0xE0E27C0DL,0x37546468L},{0xB80B5EB2L,0xE0E27C0DL,0x37546468L,0x8CFF0C3CL,0x8CFF0C3CL,0x37546468L},{0x0619C570L,0x0619C570L,0x7D242C93L,0xBF719A16L,0x8CFF0C3CL,0L},{0x8CFF0C3CL,0xE0E27C0DL,1L,0xBF719A16L,0xE0E27C0DL,0x7D242C93L},{0x0619C570L,0x8CFF0C3CL,1L,0x8CFF0C3CL,0x0619C570L,0L}}};
                int64_t l_1229[4][4][6] = {{{(-4L),0x045E2408DB0B3557LL,2L,0x045E2408DB0B3557LL,(-4L),6L},{0x045E2408DB0B3557LL,(-4L),6L,7L,(-4L),2L},{0x437EF56476D586E8LL,0x045E2408DB0B3557LL,0x7E47EDCB0426EA88LL,(-4L),0x19A1C3874A9D99D5LL,2L},{0x19A1C3874A9D99D5LL,0x437EF56476D586E8LL,6L,0xF605FB6E528F9F13LL,0xF605FB6E528F9F13LL,6L}},{{0x19A1C3874A9D99D5LL,0x19A1C3874A9D99D5LL,2L,(-4L),(-6L),0x7EDC58DA39A4EC5DLL},{0x437EF56476D586E8LL,0x19A1C3874A9D99D5LL,4L,7L,0xF605FB6E528F9F13LL,2L},{0x045E2408DB0B3557LL,0x437EF56476D586E8LL,4L,0x045E2408DB0B3557LL,0x19A1C3874A9D99D5LL,0x7EDC58DA39A4EC5DLL},{(-4L),0x045E2408DB0B3557LL,2L,0x045E2408DB0B3557LL,(-4L),6L}},{{0x045E2408DB0B3557LL,(-4L),6L,7L,(-4L),2L},{0x437EF56476D586E8LL,0x045E2408DB0B3557LL,0x7E47EDCB0426EA88LL,(-4L),0x19A1C3874A9D99D5LL,2L},{0x19A1C3874A9D99D5LL,0x437EF56476D586E8LL,6L,0xF605FB6E528F9F13LL,0xF605FB6E528F9F13LL,6L},{0x19A1C3874A9D99D5LL,0x19A1C3874A9D99D5LL,2L,(-4L),(-6L),0x7EDC58DA39A4EC5DLL}},{{0x437EF56476D586E8LL,0x19A1C3874A9D99D5LL,4L,7L,0xF605FB6E528F9F13LL,2L},{0x045E2408DB0B3557LL,0x437EF56476D586E8LL,4L,0x045E2408DB0B3557LL,0x19A1C3874A9D99D5LL,0x7EDC58DA39A4EC5DLL},{(-4L),0x045E2408DB0B3557LL,2L,0x045E2408DB0B3557LL,(-4L),6L},{0x045E2408DB0B3557LL,(-4L),6L,7L,(-4L),2L}}};
                int16_t l_1232 = 0x865CL;
                struct S0 l_1236 = {-59,0,2755};
                uint16_t l_1241 = 0x14E7L;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1189[i][j][k] = &l_374[2];
                    }
                }
                for (i = 0; i < 1; i++)
                    l_1218[i] = &l_1219;
                if ((((*g_547) = (+(safe_div_func_uint16_t_u_u(0UL, ((*l_1183) ^= 0x7D11L))))) >= (((0xECL | 0x87L) || (safe_add_func_uint16_t_u_u(((*l_1186) = 65535UL), (safe_mod_func_uint8_t_u_u(((l_1055 = (g_452 = 1L)) && ((safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((l_1051 &= (~((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_1125, (*l_395))), 8)) , (*l_395)))), g_3)), 0L)) , (-4L)), (*g_92))) | (*l_395))), l_1142[2]))))) != 0x2DL)))
                { 
                    int32_t l_1215 = 0xEB157D17L;
                    int16_t *l_1216 = &g_75[0];
                    int16_t *l_1217 = &g_692[1];
                    int32_t *l_1224 = &g_5;
                    int32_t *l_1225 = &g_78[0][0];
                    int32_t *l_1226 = &l_363[4][1][2];
                    int32_t *l_1227[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1227[i] = &l_1056[3][0];
                    (*l_828) = func_21(((((*l_1186) = (!((safe_mod_func_uint16_t_u_u((((0xCF72B4DAL && (((*l_992) = l_1075) == (g_1208 = &g_109))) , p_15) | ((((((*l_1217) ^= ((*l_1216) = (safe_mul_func_uint16_t_u_u((*l_395), (safe_add_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(l_1049, ((*g_547) &= p_16))) || l_1215) >= (*l_395)) <= (*l_395)) || p_15), p_15)))))) | 0xF0E7L) && l_1215) , l_1218[0]) != g_1220)), l_1142[1])) || (-5L)))) ^ l_1223) < p_14), g_71, p_14);
                    ++g_1233;
                    (*l_828) = &g_5;
                    (*l_395) = p_15;
                }
                else
                { 
                    const uint64_t l_1239 = 0x60C194412DB4717FLL;
                    int32_t l_1240 = 9L;
                    l_1236 = (***l_1037);
                    (*l_828) = func_21(p_15, g_71, ((((0L == (safe_mul_func_int8_t_s_s((l_1240 ^= (l_1239 & ((p_15 , (&l_1127 != (g_614 , (void*)0))) == 0xAF40C928L))), p_16))) < l_1241) , l_1223) ^ 0xCCL));
                    return p_16;
                }
            }
            else
            { 
                int32_t l_1276 = 0x0370BFF9L;
                int32_t *l_1281 = &l_243;
                int32_t *l_1282 = &g_71;
                int32_t *l_1283 = &l_1055;
                int32_t *l_1284 = &l_1142[1];
                int32_t *l_1285 = &l_1139;
                int32_t *l_1286 = &l_1127;
                int32_t *l_1287 = &l_245[1][2];
                int32_t *l_1288 = &l_363[5][0][1];
                for (l_803 = 1; (l_803 <= 5); l_803 += 1)
                { 
                    int i;
                    (*l_395) = (((l_540[l_803] == p_16) , 0xE4E2CEC7L) , (((safe_mod_func_uint32_t_u_u((p_15 = (l_1244[4] , (p_16 != ((l_540[l_803] = (safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((l_1251 == (void*)0), (-9L))) && 0x6A28BEA7L) & 0L), 65526UL)) < p_14) == l_540[l_803]), 6))) , l_540[l_803])))), l_1244[4].f0)) , g_902) , 0L));
                    g_432 = (-9L);
                    if (p_16)
                        break;
                }
                for (l_1156 = 0; (l_1156 <= 2); l_1156 += 1)
                { 
                    int i;
                    return g_692[l_1156];
                }
                if (((((p_15 < (safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u(g_78[0][0], (*g_109))) & (((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((p_16 ^ (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_16, (l_1276 &= (safe_add_func_int16_t_s_s(((0x0EF1L == (*l_395)) | (*g_109)), (*g_547)))))), p_16)), p_16))), l_1131[4][1])), p_15)) < (*g_547)) < 0x58A2727FCF08B1B4LL)) >= (*g_547)), l_1131[3][1])), p_16)) | (*g_109)), 4)), 0xB8D7L)), p_14))) , (-2L)) , l_1244[4].f0) , 0x6D7183BFL))
                { 
                    union U1 l_1277 = {7UL};
                    g_1278 = ((*l_828) = func_34(l_1125, l_1277));
                    (*l_828) = &l_1276;
                }
                else
                { 
                    l_1276 = (l_1142[0] = (p_14 && 252UL));
                    (*l_395) &= (l_1276 ^= ((p_15 , l_1279) != (l_1280[0] = (g_1039[0] = (void*)0))));
                    return p_15;
                }
                --l_1289;
                l_1292 = p_15;
            }
            l_1295++;
            if ((safe_add_func_uint8_t_u_u((p_14 ^= (safe_lshift_func_uint8_t_u_u(1UL, (((safe_mod_func_uint8_t_u_u((*g_109), (((((p_16 | ((~((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((*l_1311)--) > (((+(safe_lshift_func_int16_t_s_u((l_1317 != (((*g_547) ^= (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_1056[0][6], (safe_rshift_func_uint8_t_u_s(l_1049, (safe_mul_func_uint8_t_u_u((*g_109), 0xCDL)))))), (*g_109))), 65535UL)), p_16))) , l_1317)), l_1051))) < p_15) <= 4294967291UL)) < g_692[1]), (*l_395))) , 0xF85EL), l_1153[1][3][0])), p_15)) == (**g_1208))) == p_15)) <= 0x5EE8A7670CA2DC97LL) & p_16) , 0x6827F597L) && (*g_1278)))) >= g_111[2][0]) && (-6L))))), l_1131[4][1])))
            { 
                uint32_t l_1330[5] = {0x0716C83CL,0x0716C83CL,0x0716C83CL,0x0716C83CL,0x0716C83CL};
                int i;
                l_1330[3] = p_16;
            }
            else
            { 
                int32_t l_1340 = (-1L);
                for (g_492 = 0; (g_492 >= 0); g_492 -= 1)
                { 
                    int32_t l_1339 = (-6L);
                    (*g_1278) |= ((((void*)0 != (*g_1208)) == (p_15 &= (g_704[0][3][0] = (safe_mul_func_int8_t_s_s((p_16 == 0xE27F86ECL), p_16))))) == ((safe_add_func_int32_t_s_s(2L, (safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(p_14, p_16)), l_1339)))) >= l_1340));
                    if (l_1339)
                        break;
                }
            }
        }
        else
        { 
            uint32_t l_1355 = 1UL;
            const int32_t l_1356 = (-7L);
            uint16_t l_1357 = 0xABBBL;
            int32_t l_1362 = 0x9DC75608L;
            int32_t l_1384 = 4L;
            uint8_t l_1385 = 0UL;
            struct S0 l_1390 = {-8532,0,5412};
            uint16_t *l_1417 = &l_1357;
            uint64_t **l_1428 = &g_92;
            struct S0 l_1429[3][1][3] = {{{{2005,0,5880},{-11431,-1,1474},{2005,0,5880}}},{{{2005,0,5880},{-11431,-1,1474},{2005,0,5880}}},{{{2005,0,5880},{-11431,-1,1474},{2005,0,5880}}}};
            int i, j, k;
            if (((safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((*l_292) = ((*l_395) = p_14)) | p_15), (l_1051 &= ((*g_547) = (safe_mod_func_int64_t_s_s(p_15, (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((l_1153[2][1][0] || g_1233) ^ (l_1355 = (**g_1208))), (((g_492 = (((((*g_1278) = (0L >= 0x03A3L)) ^ p_14) >= p_16) , 0L)) > l_1356) && l_1357))) <= g_78[0][0]) , g_1358), 2)), l_1131[4][1])))))))), 0x7E0205ACL)), l_1357)) && 0UL))
            { 
                int32_t *l_1361 = &g_5;
                int32_t *l_1363 = &g_78[0][0];
                int32_t *l_1364 = &g_78[0][0];
                int32_t *l_1365 = &l_540[5];
                int32_t *l_1366[5][2];
                struct S0 l_1370 = {-5851,-0,4084};
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1366[i][j] = &l_1056[0][6];
                }
                for (l_1055 = 7; (l_1055 > (-6)); --l_1055)
                { 
                    if ((*g_1278))
                        break;
                    if (g_84.f1)
                        goto lbl_827;
                }
                --l_1367;
                for (g_432 = 1; (g_432 >= 0); g_432 -= 1)
                { 
                    int16_t l_1372 = 0x3D5FL;
                    (*l_828) = (*l_828);
                    (*l_1364) = (((l_1370 , ((*l_1364) > (~((++(**l_400)) <= (1L <= ((*l_292) = ((g_111[1][2] = 0xF6DAL) < (((*g_547) = p_15) , l_1362)))))))) > (safe_add_func_int64_t_s_s((l_1055 = (safe_lshift_func_int8_t_s_u(7L, l_1372))), p_15))) != p_14);
                }
            }
            else
            { 
                int32_t *l_1379 = &l_245[5][1];
                int32_t *l_1380 = (void*)0;
                int32_t l_1381[5][3][4] = {{{0x3D855A2AL,0xE636750EL,0x3D855A2AL,0xB624BC1CL},{0xE636750EL,3L,0x4A5F93A1L,0x6C5DE627L},{0x6C5DE627L,0x8DA498C9L,(-1L),3L}},{{(-8L),(-1L),(-1L),(-8L)},{0x6C5DE627L,0xB624BC1CL,0x4A5F93A1L,0x3D855A2AL},{0xE636750EL,0x52852D6AL,0x3D855A2AL,0xAD9C01EEL}},{{0x3D855A2AL,0xAD9C01EEL,0xE02500EAL,0xAD9C01EEL},{(-1L),0x52852D6AL,0x8DA498C9L,0x3D855A2AL},{0xFA91BE06L,0xB624BC1CL,0xAD9C01EEL,(-8L)}},{{0x8DA498C9L,(-1L),3L,3L},{0x8DA498C9L,0x8DA498C9L,0xAD9C01EEL,0x6C5DE627L},{0xFA91BE06L,3L,0x8DA498C9L,0x52852D6AL}},{{(-8L),0x6C5DE627L,0xFA91BE06L,0xAD9C01EEL},{3L,0x6C5DE627L,3L,0x52852D6AL},{0x6C5DE627L,(-1L),0xE02500EAL,0xB624BC1CL}}};
                int32_t *l_1382 = (void*)0;
                int32_t *l_1383[1];
                int64_t **l_1403 = &l_292;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1383[i] = &g_1358;
                l_1385--;
                for (l_983 = 0; (l_983 <= (-4)); l_983--)
                { 
                    (**l_553) = (l_1390 = (***l_1037));
                }
                (*g_1278) &= 1L;
                if ((((((*g_547) = (safe_sub_func_uint16_t_u_u(0x0028L, (p_15 > ((((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0UL, ((safe_mul_func_int16_t_s_s(((l_1055 = l_1153[0][2][0]) || (l_1384 = 0xCC82ED44L)), l_1056[0][6])) & ((safe_lshift_func_uint8_t_u_u(((****l_1251)--), 3)) < (&g_111[1][2] == &l_1367))))), 0x3C13L)) != 0x78L) == p_16) >= (*g_1278)))))) ^ p_15) & g_75[0]) | 0xB6D7590DD89BAE25LL))
                { 
                    return l_1390.f0;
                }
                else
                { 
                    int64_t ***l_1404 = &l_1403;
                    struct S0 l_1405 = {-16179,0,2622};
                    (*l_1404) = l_1403;
                    l_1056[1][4] ^= ((***l_1279) , (-1L));
                    (**l_553) = l_1405;
                    (*l_828) = ((p_14 & ((l_1051 = ((((2UL || (p_15 , ((*l_395) ^ ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_1362 = p_14), p_14)), (((safe_sub_func_int16_t_s_s((((**g_91) = (*g_92)) | p_15), 65535UL)) | 0xD2EDC1DDL) < l_1111))) ^ p_16)))) || p_14) , l_1385) , 0x0D3169EC66C02C11LL)) , g_1231)) , &g_432);
                    l_1412--;
                }
            }
            if ((safe_mod_func_int16_t_s_s((((*l_1417) = 65533UL) , (safe_sub_func_int16_t_s_s(p_15, (((l_1420 , ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_1425, ((((((&l_1384 != ((l_1362 = ((*l_292) = ((((*g_92)++) & (l_1051 = ((*g_1221) != (g_91 = l_1428)))) , 0L))) , (void*)0)) != l_1420.f1) == l_1154) > p_14) | 0x17BF73A271B7CF3CLL) <= l_1420.f0))), l_1390.f1)) != (-2L))) , l_1420.f2) != 0xC36CL)))), 1UL)))
            { 
                uint16_t l_1430 = 0xE6CEL;
                (***l_1037) = l_1429[1][0][2];
                (*g_1278) = (((**g_1208) , p_16) || g_692[1]);
                return l_1430;
            }
            else
            { 
                return g_111[1][2];
            }
        }
        (*g_1278) ^= (safe_mul_func_uint16_t_u_u(65535UL, ((l_1433 >= (((((0x9C6C5337B75FF3C2LL || (safe_add_func_int64_t_s_s(((safe_mul_func_int64_t_s_s((((0x3C71E6EFC3217870LL <= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((l_1444[0] != l_1444[2]), 7)) , g_1067), 6))) ^ l_1412) >= p_15), 0UL)) == (*l_395)), 8L))) , 0x6E11C73A559943EDLL) <= (-1L)) != l_1445) > 0L)) > 0x5DL)));
    }
    l_1452--;
    return (*l_1449);
}



static int16_t  func_19(int32_t * p_20)
{ 
    int32_t *l_226 = (void*)0;
    int32_t *l_228 = &g_3;
    int32_t *l_229 = (void*)0;
    int32_t *l_230 = &g_71;
    int32_t *l_231 = &g_71;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = (void*)0;
    int32_t *l_234 = &g_71;
    int32_t l_235 = 2L;
    int32_t *l_236[4];
    uint32_t l_237 = 0UL;
    int i;
    for (i = 0; i < 4; i++)
        l_236[i] = &g_71;
    g_227 = l_226;
    --l_237;
    return (*l_230);
}



static int32_t * func_21(int8_t  p_22, int8_t  p_23, int32_t  p_24)
{ 
    struct S0 l_224 = {9973,-1,1111};
    int32_t *l_225 = &g_78[0][0];
    (*l_225) ^= ((l_224 = l_224) , ((l_224.f2 || p_24) <= l_224.f2));
    return &g_5;
}



static const int32_t  func_29(int32_t * p_30, int32_t * p_31, int32_t * p_32, uint64_t  p_33)
{ 
    struct S0 *l_85[4][7][2] = {{{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84}},{{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84}},{{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84}},{{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84},{&g_84,&g_84}}};
    uint32_t l_86 = 0xAD619F20L;
    uint64_t *l_90 = (void*)0;
    uint64_t **l_89 = &l_90;
    int16_t *l_97 = &g_75[0];
    int16_t **l_98 = &l_97;
    const uint8_t *l_108[2][4][7] = {{{&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1},{&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_83[0][0][3].f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1},{&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_83[0][0][3].f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1,&g_83[0][0][3].f1,&g_47.f1,&g_47.f1}}};
    int32_t l_118 = 0x618F1E01L;
    int32_t l_124[1];
    const int32_t l_149[7] = {1L,1L,1L,1L,1L,1L,1L};
    union U1 *l_215 = &g_83[3][6][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_124[i] = 0L;
    g_84 = g_84;
    (*p_30) = l_86;
    if ((safe_mod_func_int16_t_s_s(((l_89 == g_91) || (((l_86 ^ 0x3B7CC63AL) == ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_33, (((*l_98) = l_97) == &g_75[0]))), p_33)) , 1UL)) , g_75[0])), 0x15B7L)))
    { 
        union U1 * const *l_99 = &g_82;
        g_100 = l_99;
    }
    else
    { 
        uint16_t *l_110 = &g_111[1][2];
        uint32_t *l_119[4] = {&g_47.f0,&g_47.f0,&g_47.f0,&g_47.f0};
        int32_t l_120 = 5L;
        int32_t l_121[2];
        int64_t l_164 = 0xC45A456930D83E2ELL;
        struct S0 l_167[3][4][1] = {{{{8662,0,7217}},{{6499,0,6535}},{{6499,0,6535}},{{8662,0,7217}}},{{{6499,0,6535}},{{6499,0,6535}},{{8662,0,7217}},{{6499,0,6535}}},{{{6499,0,6535}},{{8662,0,7217}},{{6499,0,6535}},{{6499,0,6535}}}};
        struct S0 *l_180 = (void*)0;
        int16_t l_200 = 0xAC21L;
        int32_t l_222[4];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_121[i] = 0x8B728ABAL;
        for (i = 0; i < 4; i++)
            l_222[i] = 6L;
        if ((+(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_110) = (l_108[0][0][0] == g_109)), 8)), (l_86 & ((safe_mod_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(g_84.f2, g_47.f1)) && p_33) , (((safe_sub_func_uint8_t_u_u(((l_124[0] = ((g_83[0][0][3].f0--) & ((*p_30) = (((((g_125[0][0]--) < g_47.f1) < p_33) || 1UL) , 1L)))) != 0x75502811L), 253UL)) || l_121[1]) <= 0x7BBD1554CC1AE132LL)), 4UL)) , l_120)))), p_33)) >= g_78[0][0]) | l_120)))
        { 
            int8_t l_142[1][2][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_142[i][j][k] = 0L;
                }
            }
            if ((*p_31))
            { 
                uint32_t l_148 = 0UL;
                if ((g_71 & (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((((((((l_120 != ((((safe_div_func_int16_t_s_s(((l_142[0][0][0] == 0xF7CF008C425DF7E9LL) | (safe_unary_minus_func_int16_t_s(g_75[0]))), ((*l_110) = (safe_mul_func_uint16_t_u_u((g_5 <= (((safe_mul_func_uint8_t_u_u((((0x784BL ^ 0xF4FDL) || l_142[0][0][0]) && l_142[0][1][0]), 0x9AL)) == 0xCC59C1A49182D69DLL) <= l_124[0])), l_121[0]))))) != p_33) , l_121[1]) ^ g_83[0][0][3].f1)) <= l_148) ^ (*p_30)) , (void*)0) != &p_33) & p_33) < l_121[1]) | 0x95517ECD97897607LL) < g_77) > l_148), p_33)), 0x3E4CL)), 0xC1BD7C0A1D46D758LL)), g_47.f1)), g_71)), 65527UL))))
                { 
                    return l_149[2];
                }
                else
                { 
                    int64_t *l_157 = &g_158;
                    const int32_t l_168 = (-1L);
                    uint16_t l_169 = 0UL;
                    uint32_t *l_170 = &l_148;
                    int32_t **l_171 = (void*)0;
                    int32_t *l_173 = &l_121[1];
                    int32_t **l_172 = &l_173;
                    (*l_172) = (((*l_170) = (((~((((safe_add_func_int32_t_s_s(((--(*g_92)) >= (l_118 == (safe_mod_func_int64_t_s_s(((*l_157) = g_83[0][0][3].f1), (l_124[0] = (safe_rshift_func_uint8_t_u_u((--(*g_109)), l_164))))))), ((l_142[0][0][0] ^ (g_84.f2 = (safe_mod_func_uint64_t_u_u((l_167[1][0][0] , ((l_167[1][0][0].f2 <= (0x0423L > g_125[0][0])) , 0x0C72C318DF62529DLL)), 0x078B0A32F8BBF318LL)))) != l_168))) ^ l_142[0][0][0]) || g_83[0][0][3].f0) == g_79)) <= l_169) < 5UL)) , (void*)0);
                    g_84 = g_84;
                    return p_33;
                }
            }
            else
            { 
                g_174 = g_84;
            }
        }
        else
        { 
            int32_t *l_175 = &g_78[0][0];
            int32_t *l_176[4] = {&g_78[0][0],&g_78[0][0],&g_78[0][0],&g_78[0][0]};
            int8_t l_201 = 0x1CL;
            uint64_t **l_213 = &g_92;
            int i;
            (*p_31) |= 0xE0C13267L;
            g_177--;
            l_180 = &l_167[2][3][0];
            for (l_118 = 0; (l_118 <= 3); l_118 += 1)
            { 
                int8_t l_181[5];
                uint32_t l_182 = 0x1EBC7C74L;
                union U1 l_204[2] = {{0x21F6031BL},{0x21F6031BL}};
                uint64_t ** const l_214 = &g_92;
                int32_t **l_217 = &l_176[0];
                int i;
                for (i = 0; i < 5; i++)
                    l_181[i] = (-5L);
                if ((*p_32))
                { 
                    int i;
                    l_182--;
                }
                else
                { 
                    int64_t **l_193 = (void*)0;
                    int64_t **l_194 = (void*)0;
                    int64_t *l_196 = &g_158;
                    int64_t **l_195 = &l_196;
                    union U1 * const l_199 = (void*)0;
                    int32_t l_202 = 7L;
                    int32_t l_203 = (-1L);
                    int i;
                    (*p_31) |= (((safe_rshift_func_int16_t_s_s((-3L), 5)) < (g_71 < (safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((*l_195) = l_90) != (void*)0), ((0x017785D073137E4ELL <= (l_182 >= ((((safe_sub_func_uint32_t_u_u(((void*)0 != l_199), p_33)) >= l_200) ^ 0x263D413FB1A0FE73LL) <= 255UL))) <= g_78[0][0]))) & g_71), p_33)) & g_84.f1) || l_201), l_202)))) != l_164);
                    if (l_181[2])
                        continue;
                    if (l_203)
                        break;
                }
                (*l_217) = (((((l_204[1] , (safe_mod_func_int64_t_s_s(0xDF91AB292FDABE4BLL, (safe_add_func_int64_t_s_s(((safe_unary_minus_func_uint8_t_u(((**g_91) >= ((safe_mul_func_int16_t_s_s(0xB53FL, (+((p_33 > ((**l_98) = (((*g_100) != (g_216 = (((l_213 != l_214) & l_121[0]) , l_215))) >= 0x4539L))) ^ p_33)))) | 0x722BL)))) , 1L), l_149[2]))))) ^ (*g_92)) & (**g_91)) | (-1L)) , &g_3);
                for (l_86 = 0; (l_86 <= 3); l_86 += 1)
                { 
                    uint16_t l_221 = 0x3681L;
                    l_124[0] = (+(g_75[0] ^ (l_204[1] , ((((*g_92) = l_149[3]) , (((safe_div_func_int16_t_s_s(((0x0CCD4F399569C656LL <= ((((l_221 && ((*l_175) = ((g_75[0] != l_118) != 18446744073709551607UL))) != p_33) , (*p_31)) >= 0x0BBF0BD6L)) <= p_33), g_83[0][0][3].f0)) && l_118) && (-6L))) == (-5L)))));
                    (*l_217) = &l_121[1];
                    if (g_125[0][0])
                        break;
                }
            }
            l_222[3] |= (*p_30);
        }
    }
    (*p_30) = 0x357AB1EFL;
    return g_83[0][0][3].f1;
}



static int32_t * func_34(uint64_t  p_35, union U1  p_36)
{ 
    uint32_t l_69 = 0UL;
    int32_t l_72[4][7][7] = {{{8L,1L,1L,0xC6C064B5L,9L,1L,0x71EBB702L},{(-1L),(-1L),(-1L),0x4000348EL,0L,1L,(-1L)},{0xFB43B78CL,8L,0xC6C064B5L,1L,(-1L),0xE4E98E2CL,0x2105ADB5L},{0x5584D571L,0x014A1F69L,0x844C383CL,(-3L),(-1L),(-3L),0x844C383CL},{0x2105ADB5L,0x2105ADB5L,0x4FB361F3L,9L,1L,1L,0xDA3982AEL},{0x6680AE02L,0x628D16E9L,(-1L),(-1L),0x628D16E9L,1L,1L},{0xC6DEA280L,0xFA7F9CD9L,0L,(-8L),(-1L),3L,(-8L)}},{{(-3L),(-1L),0x4000348EL,0x844C383CL,1L,0x6680AE02L,1L},{0xF7C767D9L,0x10CE4AC0L,0xC6DEA280L,8L,0xC6DEA280L,0x10CE4AC0L,0xF7C767D9L},{(-1L),3L,1L,0x29EDD65EL,0x0466E1A5L,1L,1L},{0xFA7F9CD9L,0x2B4CD965L,0x046227A4L,0xFA7F9CD9L,0xE4E98E2CL,0xFB43B78CL,8L},{(-9L),(-1L),1L,(-3L),0xD67785DCL,1L,1L},{(-4L),0xF7C767D9L,0xC6DEA280L,0x4FB361F3L,0x2B4CD965L,(-1L),(-1L)},{0x5584D571L,(-9L),0x4000348EL,(-9L),0x5584D571L,9L,0x0466E1A5L}},{{0xC6C064B5L,3L,0L,2L,(-8L),0x4FB361F3L,0xF7C767D9L},{1L,0x0466E1A5L,(-1L),0xD67785DCL,1L,(-3L),1L},{0xC6C064B5L,2L,0x2105ADB5L,0xFA7F9CD9L,2L,9L,0x71EBB702L},{0x5584D571L,(-1L),0xACB588F4L,1L,(-1L),(-1L),1L},{(-4L),0x5CA20838L,(-4L),(-1L),0x71EBB702L,0xC6DEA280L,0x75048CB0L},{(-9L),(-1L),0x6680AE02L,0x844C383CL,0x5584D571L,0L,(-9L)},{0xFA7F9CD9L,0x4FB361F3L,0x75048CB0L,0x71EBB702L,1L,0xC6DEA280L,0x2B4CD965L}},{{(-1L),0x0466E1A5L,1L,(-1L),(-3L),(-1L),(-3L)},{0xF7C767D9L,(-1L),9L,0xE4E98E2CL,0xE4E98E2CL,9L,(-1L)},{(-3L),0xACB588F4L,1L,3L,1L,(-3L),0x844C383CL},{0xC6DEA280L,0xF7C767D9L,(-4L),0L,1L,0x4FB361F3L,1L},{1L,1L,0x66A49DF3L,3L,1L,9L,(-9L)},{0x2B4CD965L,1L,0x10CE4AC0L,0xE4E98E2CL,3L,(-1L),0xC6C064B5L},{1L,3L,(-1L),(-1L),3L,1L,0x29EDD65EL}}};
    int64_t l_80 = 1L;
    int i, j, k;
    for (p_35 = 0; (p_35 >= 18); p_35 = safe_add_func_int8_t_s_s(p_35, 4))
    { 
        int32_t *l_46 = &g_5;
        uint8_t *l_54 = (void*)0;
        uint8_t *l_55[7][2][4] = {{{(void*)0,(void*)0,&g_47.f1,&g_47.f1},{(void*)0,&g_47.f1,&g_47.f1,(void*)0}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_47.f1,&g_47.f1,(void*)0}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,(void*)0,&g_47.f1,&g_47.f1}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_47.f1,(void*)0,&g_47.f1}},{{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1}},{{&g_47.f1,&g_47.f1,(void*)0,&g_47.f1},{&g_47.f1,&g_47.f1,&g_47.f1,&g_47.f1}}};
        uint64_t **l_66 = (void*)0;
        uint64_t *l_68 = &g_40;
        uint64_t **l_67 = &l_68;
        int32_t *l_70 = &g_71;
        int16_t *l_73 = (void*)0;
        int16_t *l_74 = &g_75[0];
        int16_t *l_76 = &g_77;
        int32_t l_81 = 0x448041AEL;
        int i, j, k;
        l_81 ^= (((safe_mod_func_int32_t_s_s(((*l_46) |= g_40), (g_47 , ((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((g_79 |= (p_35 , ((--g_47.f1) > ((safe_lshift_func_uint16_t_u_u((&g_40 == (void*)0), p_36.f0)) , ((safe_mod_func_uint16_t_u_u((g_78[0][0] = (((((*l_76) |= ((*l_74) = (((safe_sub_func_int16_t_s_s((((((safe_div_func_int32_t_s_s(((*l_70) = (l_69 |= ((((*l_67) = &g_40) != &g_40) > 0x8A82D858L))), l_72[3][6][3])) <= 0L) , p_36.f1) == p_35) && l_72[3][6][3]), 0x3804L)) || (-1L)) <= 0x7FL))) || p_36.f2) || g_75[0]) < g_3)), p_35)) <= p_35))))) , (-5L)), p_36.f0)) == 3UL), 0x0931L)), 7L)) , l_80)))) && p_35) && (*l_70));
        g_78[0][0] ^= p_36.f0;
        g_82 = (void*)0;
    }
    return &g_5;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_78[i][j], "g_78[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_83[i][j][k].f1, "g_83[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_174.f1, "g_174.f1", print_hash_value);
    transparent_crc(g_174.f2, "g_174.f2", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_692[i], "g_692[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_704[i][j][k], "g_704[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1112[i][j][k], "g_1112[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1358, "g_1358", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1663[i][j][k], "g_1663[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1752, "g_1752", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1870.f0, "g_1870.f0", print_hash_value);
    transparent_crc(g_1870.f1, "g_1870.f1", print_hash_value);
    transparent_crc(g_1870.f2, "g_1870.f2", print_hash_value);
    transparent_crc(g_2037, "g_2037", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
