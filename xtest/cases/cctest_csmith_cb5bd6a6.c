// SPDX-License-Identifier: MIT
// cctest_csmith_cb5bd6a6.c --- cctest case csmith_cb5bd6a6 (csmith seed 3411793574)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd82fa3ee */

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

// Options:   -s 3411793574 -o /tmp/csmith_gen_3pdjfk5d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
};

union U1 {
   int8_t  f0;
   uint32_t  f1;
   int32_t  f2;
};


static struct S0 g_2 = {1L,1UL};
static struct S0 g_3 = {0xAC196A16L,0xC9CCL};
static uint8_t g_98 = 250UL;
static const struct S0 g_100 = {0xF0D2369EL,0xCF7FL};
static uint64_t g_115 = 0xE17DD59E7100029DLL;
static int32_t g_147 = 0xC02EF1F5L;
static int16_t g_182 = 0xBD94L;
static const uint32_t g_183 = 0xC7A9A96AL;
static int64_t g_212 = 5L;
static uint16_t g_305 = 65535UL;



static uint64_t  func_1(void);
static uint64_t  func_6(int32_t  p_7, const uint64_t  p_8, uint64_t  p_9, int8_t  p_10);
static int32_t  func_18(int32_t  p_19, uint8_t  p_20, uint8_t  p_21, const struct S0  p_22);
static struct S0  func_27(uint32_t  p_28, int64_t  p_29);




static uint64_t  func_1(void)
{ 
    int8_t l_4 = 6L;
    int32_t l_5 = 0xA50B5F0BL;
    uint8_t l_15[5][1][1];
    uint32_t l_277 = 9UL;
    int32_t l_302 = 0L;
    int32_t l_303 = 2L;
    int32_t l_311 = 0x0FD16B3FL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_15[i][j][k] = 0xB0L;
        }
    }
    g_3 = (g_2 = g_2);
    if (((l_5 = l_4) >= (l_4 <= func_6(g_3.f1, (safe_div_func_uint32_t_u_u((l_15[2][0][0] = (((safe_sub_func_uint16_t_u_u(g_3.f0, 65527UL)) != g_3.f1) != g_3.f1)), l_4)), g_3.f1, l_4))))
    { 
        struct S0 l_268 = {7L,0UL};
        l_268 = (g_3 = g_2);
        l_5 |= (((((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-2L), l_277)), 7)) ^ ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_unary_minus_func_uint16_t_u(l_15[1][0][0])) == 0L) > 9L), g_2.f0)), g_147)) , 1UL), 3)) && g_212)), 8)) ^ l_4), l_277)) || l_15[1][0][0]) > g_147) <= g_98) != g_2.f1);
    }
    else
    { 
        int64_t l_296 = 4L;
        int32_t l_304 = 0x98B6F583L;
        l_303 = (safe_lshift_func_int16_t_s_s((!(safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u(((l_5 = ((l_302 ^= (safe_mul_func_uint8_t_u_u((l_296 , (safe_lshift_func_uint8_t_u_s(2UL, g_183))), (safe_unary_minus_func_int64_t_s((((safe_rshift_func_int8_t_s_u(g_147, 2)) == l_5) == g_183)))))) != g_147)) & g_2.f0), g_98)) <= g_115) < l_296) == 0xD70EA170L), 1L)) != g_212), g_2.f1))), 3));
        g_305++;
        return g_182;
    }
    for (g_98 = (-3); (g_98 >= 56); ++g_98)
    { 
        uint64_t l_310 = 0x03632AA098A50625LL;
        l_310 &= (-10L);
    }
    return l_311;
}



static uint64_t  func_6(int32_t  p_7, const uint64_t  p_8, uint64_t  p_9, int8_t  p_10)
{ 
    int64_t l_23 = 0x2DDB74A71A6E483BLL;
    uint16_t l_252 = 1UL;
    int32_t l_253 = (-2L);
    int32_t l_254 = 0xD182E770L;
    int32_t l_255[3];
    uint32_t l_256 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 3; i++)
        l_255[i] = (-10L);
    l_253 |= ((safe_sub_func_int32_t_s_s(func_18(l_23, (!(safe_lshift_func_uint8_t_u_s((func_27((((0x9731L == (safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(0x4BL, (g_3.f0 & g_2.f1))) ^ g_2.f0), l_23))) > 0x0EL) , l_23), g_3.f0) , l_23), g_2.f1))), p_9, g_100), l_252)) >= g_2.f1);
    if (g_2.f0)
        goto lbl_259;
lbl_259:
    l_256++;
    g_2.f0 = (safe_div_func_uint8_t_u_u((g_183 , (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((((p_7 < g_2.f0) && (safe_lshift_func_int8_t_s_u(g_115, 0))) != l_255[0]), 0xF99A31C92298D2E8LL)), g_2.f1))), p_7));
    return g_183;
}



static int32_t  func_18(int32_t  p_19, uint8_t  p_20, uint8_t  p_21, const struct S0  p_22)
{ 
    uint64_t l_101 = 18446744073709551608UL;
    int32_t l_106[3];
    int32_t l_107 = 0L;
    uint32_t l_119 = 0x9148970CL;
    union U1 l_139 = {0xA9L};
    int32_t l_166 = 0xC4D80B7EL;
    struct S0 l_176[4][3] = {{{-6L,65535UL},{0L,65535UL},{-6L,65535UL}},{{-6L,65535UL},{0L,65535UL},{-6L,65535UL}},{{-6L,65535UL},{0L,65535UL},{-6L,65535UL}},{{-6L,65535UL},{0L,65535UL},{-6L,65535UL}}};
    const int16_t l_244 = (-1L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_106[i] = 0x25DEAEDAL;
    if ((l_101 & ((l_107 = (safe_add_func_uint16_t_u_u((l_106[0] = (safe_div_func_uint16_t_u_u(65535UL, g_100.f1))), (1UL | 0xFABCL)))) < p_22.f0)))
    { 
        for (g_2.f0 = 2; (g_2.f0 >= 0); g_2.f0 -= 1)
        { 
            uint8_t l_114 = 0UL;
            int i;
            g_3.f0 = ((-7L) == (safe_lshift_func_int8_t_s_s((l_106[0] = (((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s(l_106[0], p_22.f0)) || ((((p_19 && 0UL) , p_19) != 0x3BBEL) != g_3.f1)), l_114)) > p_21) > 0xCB3A5686L)), 6)));
            g_115--;
        }
    }
    else
    { 
        struct S0 l_118[4][4][4] = {{{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}},{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}}},{{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}},{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}}},{{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}},{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}}},{{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}},{{-7L,65527UL},{0x43F78960L,65535UL},{0x43F78960L,65535UL},{-7L,65527UL}},{{0x8546E32DL,1UL},{0x43F78960L,65535UL},{0x47B41CF2L,0x3CDCL},{-7L,65527UL}}}};
        uint64_t l_167 = 18446744073709551615UL;
        int i, j, k;
        for (l_101 = 0; (l_101 <= 2); l_101 += 1)
        { 
            int i;
            for (g_98 = 0; (g_98 <= 2); g_98 += 1)
            { 
                l_118[0][0][2] = g_100;
            }
            if (l_106[l_101])
            { 
                int i;
                --l_119;
            }
            else
            { 
                l_106[0] = p_19;
                l_106[l_101] = p_20;
            }
        }
        if (((~(l_118[0][0][2].f0 = ((safe_mul_func_uint8_t_u_u(((((((safe_sub_func_int8_t_s_s(l_119, ((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(p_20, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(p_19, ((l_118[0][0][2].f1 > 0x47L) , g_2.f0))), g_98)), g_100.f1)))) < p_22.f1), 1UL)) ^ 0x4D6026B9L) , g_2.f1) & g_98))) < g_2.f0) < 0UL) > g_115) != p_21) || l_118[0][0][2].f0), p_21)) , g_3.f1))) || 1L))
        { 
            union U1 l_140 = {0x31L};
            int32_t l_143 = 0xA4CD60ACL;
            l_118[0][0][2] = l_118[1][0][3];
            for (g_3.f0 = 0; (g_3.f0 > (-5)); g_3.f0--)
            { 
                if (p_21)
                    break;
                l_143 = ((l_140 = l_139) , (safe_sub_func_uint16_t_u_u((((((p_19 , g_3.f1) && (g_115 & g_3.f0)) , (-4L)) | 0UL) < l_106[0]), p_22.f1)));
            }
        }
        else
        { 
            uint8_t l_146 = 0x6BL;
            g_2.f0 ^= (safe_mul_func_int8_t_s_s((l_146 , (((((g_147 ^= (p_19 = g_3.f0)) , 8L) > (l_139 , g_3.f1)) ^ g_115) & 1L)), l_118[0][0][2].f0));
        }
        if ((safe_lshift_func_uint8_t_u_u((((p_22.f1 <= ((g_100.f1 < ((safe_add_func_uint8_t_u_u(g_3.f0, (+((safe_mul_func_uint16_t_u_u((((l_106[1] = g_147) || l_118[0][0][2].f0) , 65535UL), p_20)) == 1UL)))) & l_118[0][0][2].f1)) & p_21)) > l_118[0][0][2].f1) && p_22.f0), 3)))
        { 
            int16_t l_168[2][1][3] = {{{(-7L),(-7L),3L}},{{(-7L),(-7L),3L}}};
            int i, j, k;
            for (g_3.f0 = (-16); (g_3.f0 != (-25)); g_3.f0 = safe_sub_func_uint8_t_u_u(g_3.f0, 1))
            { 
                int8_t l_161 = 0x8FL;
                l_168[1][0][1] ^= (g_2.f0 = ((safe_mod_func_uint64_t_u_u(((l_118[0][0][2].f0 ^= g_147) < ((((g_100 , ((safe_lshift_func_int16_t_s_s(l_161, (safe_sub_func_uint8_t_u_u((p_21--), 0UL)))) >= 0x0EL)) && l_166) > 0L) || 0xDDL)), p_22.f1)) | l_167));
            }
        }
        else
        { 
            uint32_t l_171 = 0UL;
            for (g_3.f0 = 2; (g_3.f0 >= 15); g_3.f0 = safe_add_func_int64_t_s_s(g_3.f0, 2))
            { 
                if (p_20)
                    break;
            }
            --l_171;
        }
    }
    l_176[3][2].f0 = (safe_add_func_int8_t_s_s(((l_176[3][2] , (safe_mod_func_int64_t_s_s(((!((g_182 = (-1L)) < l_139.f0)) != (g_183 <= g_98)), l_139.f0))) < g_115), p_22.f1));
    for (p_21 = 19; (p_21 == 37); p_21++)
    { 
        int64_t l_199 = 0x3F8241A347C53A19LL;
        int32_t l_200 = 0xE0499F85L;
        struct S0 l_201 = {-10L,0x8DF1L};
        uint8_t l_240 = 0xCCL;
        for (l_139.f2 = (-23); (l_139.f2 > 15); l_139.f2 = safe_add_func_int16_t_s_s(l_139.f2, 6))
        { 
            int8_t l_198 = 1L;
            int32_t l_213 = 0x3C7F1B25L;
            uint8_t l_243 = 0x26L;
            const struct S0 l_250[4] = {{0xDDBD3AB8L,0xDC19L},{0xDDBD3AB8L,0xDC19L},{0xDDBD3AB8L,0xDC19L},{0xDDBD3AB8L,0xDC19L}};
            struct S0 l_251 = {0L,0x2FC5L};
            int i;
            if ((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((func_27(g_147, (l_200 = (safe_sub_func_int8_t_s_s((-3L), ((safe_lshift_func_uint16_t_u_u(((g_3.f1 , (safe_mod_func_int8_t_s_s(l_198, 0xCBL))) , g_182), 11)) != l_199))))) , l_101), l_106[0])), 7)))
            { 
                const uint16_t l_241 = 0UL;
                int32_t l_242 = (-1L);
                uint16_t l_245 = 0xAB07L;
                l_201 = func_27(g_100.f0, l_200);
                g_2.f0 = ((l_213 = (safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((l_201.f1 | ((g_212 = ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(l_176[3][2].f0, 7)), 0UL)) < p_19)) , p_22.f1)) , 0x1BE6A337L) >= 0xC4890B74L), (-6L))) != 0x75437D32L) < 6UL), 0))) > 0UL);
                g_2.f0 = (((((safe_rshift_func_uint8_t_u_s(g_3.f1, (((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((((((safe_mul_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((((((safe_mul_func_uint16_t_u_u((l_242 &= (g_147 , (safe_mul_func_int16_t_s_s((g_183 && ((((l_201.f0 = (safe_unary_minus_func_uint8_t_u((((safe_add_func_uint64_t_u_u((g_115 = (+(g_182 = (l_139 , p_21)))), l_240)) == l_241) >= l_201.f1)))) , g_2.f0) <= 0x80L) && g_115)), g_2.f1)))), p_20)) , g_2.f1) , l_243) ^ 0x93L) | 0x84L) < 0L), 0x85A11B48L)) != l_166) & l_241), g_2.f1)) >= (-9L)) || (-8L)) == 0x84L) , l_244) < 0x32750AFBL), g_183)), g_100.f0)) & g_100.f1), p_22.f0)), l_241)) != 0x68E6L) | p_22.f0) <= g_100.f0), l_243)) >= 0x7CL), p_22.f0)) < l_245) != p_22.f0))) ^ g_3.f1) || p_22.f0) || p_22.f0) > g_100.f0);
            }
            else
            { 
                l_201.f0 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_213, g_2.f1)) || (1UL < p_22.f0)), p_19));
                l_213 = l_198;
            }
            l_251 = l_250[1];
            l_201.f0 &= (0xDCL < 0x19L);
        }
    }
    return p_21;
}



static struct S0  func_27(uint32_t  p_28, int64_t  p_29)
{ 
    int32_t l_34 = 0L;
    int32_t l_37 = 0x758A8CE9L;
    int16_t l_42 = (-8L);
    uint8_t l_97[3];
    struct S0 l_99 = {8L,0xDC05L};
    int i;
    for (i = 0; i < 3; i++)
        l_97[i] = 247UL;
    g_2.f0 |= p_29;
    if ((((((l_34 , (safe_mod_func_int64_t_s_s(l_37, l_37))) , ((((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_29, g_3.f0)), l_37)) > (-1L)) != l_42) || g_2.f0)) | p_28) | 0xC0L) ^ l_34))
    { 
        uint64_t l_63[4][4] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
        int32_t l_84 = (-3L);
        int i, j;
        if ((0UL == (safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((9UL >= (((p_28--) >= l_42) <= g_3.f1)), l_37)), 15)))), p_29))))))
        { 
            uint8_t l_64 = 0x70L;
            int32_t l_65 = 0x68D11A6CL;
            l_65 |= (((safe_add_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_3 , (safe_add_func_int64_t_s_s((g_3.f0 | l_42), (safe_lshift_func_uint16_t_u_u(0xC7BCL, 7))))), g_3.f1)), l_63[0][1])) | g_2.f1) | l_64) && p_29) | p_29), 65533UL)) , g_3.f0) , p_29);
            return g_2;
        }
        else
        { 
            int32_t l_80 = 0xD26F3610L;
            int32_t l_81 = 0x1FA0179EL;
            for (p_28 = 0; (p_28 <= 16); ++p_28)
            { 
                int32_t l_77 = (-1L);
                l_81 = (g_3.f0 |= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((!(safe_rshift_func_uint8_t_u_u(g_3.f1, 6))), l_37)) & (l_77 <= (safe_sub_func_uint32_t_u_u(p_28, p_29)))), l_80)), p_28)));
            }
            l_34 = (g_3.f0 = ((safe_rshift_func_uint16_t_u_s(1UL, (l_84 |= p_28))) != (safe_unary_minus_func_uint16_t_u(1UL))));
            g_2.f0 = (-10L);
        }
    }
    else
    { 
        int32_t l_96 = (-8L);
        g_2.f0 = ((l_34 = (safe_sub_func_uint64_t_u_u((g_98 = (safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((l_96 = (((0UL && (safe_div_func_int64_t_s_s(p_28, 0xC5FA607100194922LL))) > (safe_mul_func_int16_t_s_s(((((g_3.f0 , g_2.f1) < g_2.f0) < g_3.f0) | g_2.f0), l_96))) <= 0x785F4F6EL)) != 0xDEL), 0x365B034E2D8D86F2LL)), l_97[0]))), 0x07407285EBC95BC5LL))) >= l_97[0]);
    }
    g_3.f0 = (g_2.f0 , ((l_34 = (p_28 == ((-1L) != p_28))) == p_28));
    return l_99;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
