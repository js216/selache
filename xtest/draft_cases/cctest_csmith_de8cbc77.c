// SPDX-License-Identifier: MIT
// cctest_csmith_de8cbc77.c --- cctest case csmith_de8cbc77 (csmith seed 3733765239)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb61bf86b */

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

// Options:   -s 3733765239 -o /tmp/csmith_gen_lkzek_qd/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 26;
};

union U1 {
   int16_t  f0;
   int32_t  f1;
};

union U2 {
   uint64_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};


static int32_t g_2 = 1L;
static int32_t g_41 = 0xB885B3D9L;
static int32_t g_42[7] = {4L,4L,4L,4L,4L,4L,4L};
static int32_t g_43 = 0xDE0D6158L;
static struct S0 g_49 = {6744};
static uint32_t g_59 = 4294967288UL;
static uint32_t g_61 = 4294967293UL;
static int32_t g_62 = (-10L);
static uint8_t g_89[6][6] = {{0xE9L,251UL,0xFFL,253UL,0x32L,0xBFL},{0xFFL,2UL,3UL,0x83L,0x32L,0x83L},{4UL,251UL,4UL,1UL,0UL,2UL},{0x74L,252UL,0UL,0xBFL,0xE9L,0UL},{253UL,0x83L,1UL,0xBFL,0xBFL,1UL},{0x74L,0x74L,251UL,1UL,0UL,4UL}};
static int64_t g_141 = 0x576224DB28FCC98ALL;
static uint64_t g_158[3] = {0x58A7F69D754EFB19LL,0x58A7F69D754EFB19LL,0x58A7F69D754EFB19LL};
static int16_t g_166 = 0xE638L;
static uint16_t g_168 = 0UL;
static int8_t g_185 = 0xE1L;
static int8_t *g_184[1] = {&g_185};
static int32_t *g_254 = &g_62;
static uint64_t g_283[2][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
static int32_t **g_299 = (void*)0;
static int32_t ** const *g_298 = &g_299;
static union U2 g_332 = {2UL};
static struct S0 *g_359 = &g_49;
static struct S0 **g_358[5][4] = {{&g_359,(void*)0,&g_359,(void*)0},{(void*)0,&g_359,&g_359,&g_359},{&g_359,&g_359,(void*)0,&g_359},{&g_359,&g_359,&g_359,(void*)0},{&g_359,(void*)0,(void*)0,&g_359}};
static struct S0 ****g_400 = (void*)0;
static uint16_t *g_534 = &g_168;
static uint16_t **g_533[5][1] = {{&g_534},{&g_534},{&g_534},{&g_534},{&g_534}};
static uint16_t ***g_532 = &g_533[0][0];
static union U1 g_550 = {-1L};
static int8_t g_562 = 0x4DL;
static int32_t g_621[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static int16_t g_702 = 0x02FAL;
static const int64_t *g_751[2] = {&g_141,&g_141};
static const int64_t **g_750 = &g_751[1];
static const int64_t ***g_749[5][6] = {{&g_750,(void*)0,(void*)0,&g_750,(void*)0,&g_750},{&g_750,&g_750,&g_750,&g_750,&g_750,(void*)0},{&g_750,(void*)0,&g_750,&g_750,(void*)0,&g_750},{&g_750,(void*)0,(void*)0,&g_750,(void*)0,&g_750},{&g_750,&g_750,&g_750,&g_750,&g_750,(void*)0}};
static int64_t g_779 = 0x40FBAF6CA969D847LL;
static uint32_t *g_787[7] = {&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61};
static uint32_t **g_786 = &g_787[4];
static int64_t g_886[3][3] = {{0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL},{0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL},{0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL,0x9DC0EFDA91D6A6F4LL}};
static uint64_t g_915[6] = {0x1A2D760CCEB4EB79LL,0x1A2D760CCEB4EB79LL,8UL,0x1A2D760CCEB4EB79LL,0x1A2D760CCEB4EB79LL,8UL};
static uint8_t g_940 = 0xB0L;
static uint16_t ****g_955[1] = {(void*)0};
static uint16_t *****g_954[1][7] = {{&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0]}};
static const uint32_t **g_1050 = (void*)0;
static struct S0 * const *g_1059 = (void*)0;
static int32_t ***g_1165 = &g_299;
static int32_t ****g_1164 = &g_1165;
static int16_t g_1175 = 0x2A95L;
static uint8_t g_1194[5] = {252UL,252UL,252UL,252UL,252UL};
static int8_t g_1326[2] = {7L,7L};
static uint32_t g_1344 = 3UL;
static int64_t g_1361 = 0L;
static int32_t **g_1384 = (void*)0;
static int64_t ***g_1473 = (void*)0;
static int32_t *****g_1510 = &g_1164;
static int64_t *****g_1784[1] = {(void*)0};
static int64_t *****g_1787[2] = {(void*)0,(void*)0};
static uint64_t g_1897[1][1][5] = {{{9UL,9UL,9UL,9UL,9UL}}};
static uint16_t g_1902 = 65535UL;
static int64_t g_1919 = 1L;
static int64_t *g_1964 = &g_1361;
static int64_t **g_1963 = &g_1964;
static int64_t ***g_1962 = &g_1963;
static const uint32_t *g_1977 = (void*)0;
static const uint32_t **g_1976 = &g_1977;
static uint16_t **g_2073 = &g_534;
static uint16_t *** const g_2072 = &g_2073;
static uint16_t *** const *g_2071 = &g_2072;
static uint16_t *** const **g_2070[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 g_2105 = {0xA371L};
static union U2 *g_2142[1][3] = {{&g_332,&g_332,&g_332}};
static union U2 * const *g_2141[3][7] = {{&g_2142[0][1],&g_2142[0][1],&g_2142[0][2],&g_2142[0][2],&g_2142[0][2],&g_2142[0][1],&g_2142[0][1]},{&g_2142[0][1],&g_2142[0][1],(void*)0,&g_2142[0][1],&g_2142[0][1],&g_2142[0][1],&g_2142[0][1]},{&g_2142[0][1],&g_2142[0][2],&g_2142[0][1],&g_2142[0][2],&g_2142[0][2],&g_2142[0][1],&g_2142[0][2]}};
static union U1 *g_2162 = &g_550;
static union U1 **g_2161 = &g_2162;
static struct S0 g_2188[7] = {{2371},{2371},{2371},{2371},{2371},{2371},{2371}};
static int8_t ** const g_2227 = &g_184[0];
static int8_t ** const *g_2226[2][6][7] = {{{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,(void*)0},{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,(void*)0},{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,(void*)0},{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,(void*)0},{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,(void*)0},{&g_2227,&g_2227,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227}},{{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227},{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227},{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227},{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227},{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227},{(void*)0,&g_2227,(void*)0,&g_2227,&g_2227,&g_2227,&g_2227}}};
static uint64_t *g_2279[7][7][5] = {{{(void*)0,&g_283[1][1],&g_1897[0][0][1],&g_283[0][0],&g_1897[0][0][2]},{&g_915[3],&g_915[3],&g_1897[0][0][1],&g_158[1],&g_158[1]},{(void*)0,&g_158[2],(void*)0,(void*)0,&g_158[0]},{&g_283[0][1],&g_915[3],&g_283[1][0],&g_915[3],(void*)0},{&g_915[3],&g_283[0][0],(void*)0,&g_283[0][1],(void*)0},{&g_915[3],(void*)0,&g_283[1][0],(void*)0,&g_915[3]},{&g_283[1][1],&g_283[1][1],(void*)0,&g_283[1][1],&g_1897[0][0][1]}},{{&g_158[0],&g_283[1][1],&g_1897[0][0][1],&g_915[3],&g_283[1][0]},{&g_915[0],&g_1897[0][0][1],&g_1897[0][0][1],&g_283[1][1],&g_1897[0][0][1]},{&g_915[3],&g_915[3],&g_915[3],&g_1897[0][0][1],&g_915[3]},{&g_1897[0][0][1],(void*)0,(void*)0,&g_283[1][1],(void*)0},{&g_283[1][0],(void*)0,&g_283[1][0],&g_915[3],(void*)0},{&g_915[3],(void*)0,&g_1897[0][0][2],&g_283[1][1],&g_158[0]},{&g_283[1][1],&g_915[3],(void*)0,&g_915[3],&g_158[1]}},{{(void*)0,&g_1897[0][0][1],(void*)0,&g_915[0],&g_1897[0][0][2]},{(void*)0,&g_283[1][1],&g_915[3],&g_915[3],&g_283[1][1]},{(void*)0,&g_283[1][1],&g_283[1][1],&g_283[1][1],&g_283[1][1]},{&g_915[3],(void*)0,&g_915[3],&g_915[3],(void*)0},{(void*)0,&g_283[0][0],(void*)0,&g_283[1][1],(void*)0},{&g_915[3],&g_915[3],&g_915[3],&g_1897[0][0][1],&g_283[1][1]},{(void*)0,&g_158[2],&g_915[0],&g_283[1][1],&g_283[1][1]}},{{(void*)0,&g_915[3],&g_158[1],&g_915[3],&g_283[0][1]},{(void*)0,&g_283[1][1],&g_915[0],&g_283[1][1],(void*)0},{&g_283[1][1],&g_915[3],&g_915[3],(void*)0,&g_915[3]},{&g_915[3],(void*)0,(void*)0,&g_283[0][1],(void*)0},{&g_283[1][0],&g_915[3],&g_915[3],&g_915[3],&g_915[3]},{&g_1897[0][0][1],&g_283[0][1],&g_283[1][1],(void*)0,(void*)0},{&g_915[3],(void*)0,&g_915[3],&g_158[1],&g_283[0][1]}},{{&g_915[0],&g_283[1][1],(void*)0,&g_283[0][0],&g_283[1][1]},{&g_158[0],&g_283[1][0],&g_283[1][0],&g_283[0][1],&g_915[3]},{&g_1897[0][0][2],&g_915[0],(void*)0,&g_1897[0][0][1],(void*)0},{&g_915[3],&g_283[1][1],&g_158[1],&g_915[3],&g_283[1][0]},{&g_283[1][1],(void*)0,(void*)0,&g_1897[0][0][1],&g_1897[0][0][2]},{&g_1897[0][0][1],&g_158[0],&g_915[3],&g_283[0][1],(void*)0},{&g_158[0],&g_283[0][1],&g_915[0],&g_283[1][1],(void*)0}},{{&g_158[0],(void*)0,&g_283[1][1],&g_915[3],&g_915[3]},{&g_158[0],&g_283[0][0],&g_158[0],(void*)0,&g_283[1][1]},{&g_1897[0][0][1],&g_915[3],&g_915[3],&g_158[0],&g_915[3]},{&g_283[1][1],&g_283[1][1],(void*)0,&g_915[0],(void*)0},{&g_915[3],&g_915[3],&g_915[3],&g_915[3],&g_915[3]},{&g_1897[0][0][2],&g_283[1][1],&g_158[0],&g_283[0][1],&g_915[0]},{&g_283[0][1],(void*)0,&g_283[1][1],&g_283[1][0],&g_158[1]}},{{(void*)0,(void*)0,&g_915[0],&g_283[1][1],&g_915[0]},{&g_283[1][0],&g_283[1][0],&g_915[3],&g_283[1][1],&g_915[3]},{&g_915[0],&g_158[0],(void*)0,&g_1897[0][0][3],(void*)0},{&g_915[3],(void*)0,&g_158[1],(void*)0,&g_915[3]},{(void*)0,&g_158[0],(void*)0,&g_283[1][0],&g_283[1][1]},{(void*)0,&g_283[1][0],&g_283[1][0],&g_915[3],&g_915[3]},{(void*)0,(void*)0,(void*)0,&g_283[1][1],(void*)0}}};
static uint64_t **g_2278 = &g_2279[6][4][4];
static const int32_t g_2300 = 0L;
static uint32_t g_2329[3] = {0x8D5E67B2L,0x8D5E67B2L,0x8D5E67B2L};
static uint32_t g_2330 = 0xE2631EB6L;
static uint32_t g_2331[7][5] = {{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL},{0x328BE9F7L,0x328BE9F7L,0xADC6A7CFL,0xCDB755E3L,0xADC6A7CFL}};
static uint32_t * const g_2328[4][5] = {{&g_2329[1],&g_2329[1],&g_2329[1],&g_2329[1],&g_2329[1]},{(void*)0,&g_2330,(void*)0,&g_2330,(void*)0},{&g_2329[1],&g_2329[1],&g_2329[1],&g_2329[1],&g_2329[1]},{(void*)0,&g_2330,(void*)0,&g_2330,(void*)0}};
static uint32_t * const *g_2327 = &g_2328[0][2];
static uint32_t g_2339[4] = {0xD9470DC0L,0xD9470DC0L,0xD9470DC0L,0xD9470DC0L};
static uint16_t ****g_2403 = &g_532;
static uint8_t g_2440 = 0xC4L;
static int64_t * const *g_2455[2][7][6] = {{{&g_1964,(void*)0,&g_1964,&g_1964,(void*)0,&g_1964},{&g_1964,(void*)0,&g_1964,&g_1964,(void*)0,&g_1964},{&g_1964,&g_1964,&g_1964,&g_1964,&g_1964,&g_1964},{&g_1964,(void*)0,&g_1964,&g_1964,(void*)0,&g_1964},{&g_1964,(void*)0,&g_1964,&g_1964,(void*)0,&g_1964},{&g_1964,&g_1964,(void*)0,(void*)0,&g_1964,&g_1964},{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,(void*)0}},{{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,&g_1964},{&g_1964,&g_1964,(void*)0,(void*)0,&g_1964,&g_1964},{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,(void*)0},{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,&g_1964},{&g_1964,&g_1964,(void*)0,(void*)0,&g_1964,&g_1964},{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,(void*)0},{&g_1964,&g_1964,&g_1964,(void*)0,&g_1964,&g_1964}}};
static int64_t * const **g_2454 = &g_2455[1][2][3];
static uint16_t g_2544 = 9UL;
static int32_t g_2548 = 7L;
static uint32_t **g_2604 = (void*)0;
static int32_t g_2607 = 0L;
static const union U1 *g_2624 = &g_550;
static const union U1 **g_2623 = &g_2624;
static const union U1 ***g_2622[7] = {&g_2623,&g_2623,&g_2623,&g_2623,&g_2623,&g_2623,&g_2623};
static struct S0 *****g_2656[3] = {&g_400,&g_400,&g_400};
static union U2 g_2708 = {1UL};
static int32_t *g_2712 = (void*)0;



static uint32_t  func_1(void);
static int32_t * func_5(const uint8_t  p_6, const int32_t * p_7, uint16_t  p_8, int32_t * p_9, int32_t * p_10);
static int32_t * func_11(uint8_t  p_12);
static int64_t  func_13(struct S0  p_14, int32_t * p_15);
static struct S0  func_16(uint32_t  p_17, struct S0  p_18, int32_t * p_19, union U2  p_20, const uint32_t  p_21);
static uint32_t  func_22(const int64_t  p_23, uint32_t  p_24, int64_t  p_25, int32_t * p_26);
static const int8_t  func_33(uint16_t  p_34, uint32_t  p_35);
static int32_t  func_36(int32_t * p_37, int32_t * p_38);




static uint32_t  func_1(void)
{ 
    uint32_t l_1895 = 0x132EF348L;
    struct S0 **l_1915 = &g_359;
    const uint64_t l_1916[5][5] = {{0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL}};
    int32_t l_1917[3][1][4] = {{{0x8E8B9957L,5L,0x8E8B9957L,5L}},{{0x8E8B9957L,5L,0x8E8B9957L,5L}},{{0x8E8B9957L,5L,0x8E8B9957L,5L}}};
    union U1 l_2301[4][3][7] = {{{{0x635FL},{-5L},{0x635FL},{0x7BA4L},{0x901EL},{9L},{-1L}},{{0x0FE3L},{0xAF65L},{1L},{-1L},{1L},{0xAF65L},{0x0FE3L}},{{-1L},{-3L},{-1L},{0x901EL},{0xDD5CL},{9L},{0xDD5CL}}},{{{0xAF65L},{0L},{0L},{0xAF65L},{0xBCE9L},{0L},{-1L}},{{-1L},{0L},{-1L},{0x635FL},{0x635FL},{-1L},{0L}},{{0xBCE9L},{0x0FE3L},{1L},{0x8C55L},{0L},{-1L},{-1L}}},{{{9L},{-1L},{0x635FL},{-1L},{9L},{-3L},{0xDD5CL}},{{0xC14EL},{0L},{0x0FE3L},{0x8C55L},{0x2573L},{0x8C55L},{0x0FE3L}},{{0xDD5CL},{0xDD5CL},{-1L},{0x635FL},{0L},{0x7BA4L},{-1L}}},{{{0xC14EL},{0x8C55L},{0xAF65L},{0xAF65L},{0x8C55L},{0xC14EL},{0x2573L}},{{9L},{-1L},{-1L},{0x901EL},{0L},{0L},{0x901EL}},{{0xBCE9L},{-1L},{0xBCE9L},{-1L},{0x2573L},{1L},{0xC14EL}}}};
    int32_t l_2314 = 0L;
    int32_t l_2375 = 8L;
    uint64_t l_2416 = 0x1C2FE1B02E67E09ALL;
    int64_t l_2420 = 8L;
    int32_t l_2421 = 0L;
    int32_t ***l_2439[3][3];
    uint8_t l_2441 = 0xC8L;
    uint32_t l_2442 = 0x4F1D85A6L;
    int16_t l_2481 = (-1L);
    struct S0 *l_2483[4][4][7] = {{{&g_49,&g_49,(void*)0,&g_49,&g_2188[1],&g_2188[1],&g_2188[1]},{&g_49,&g_49,&g_49,(void*)0,&g_49,&g_2188[1],&g_2188[1]},{&g_49,&g_2188[1],&g_2188[1],&g_2188[1],&g_49,&g_2188[1],(void*)0},{(void*)0,&g_2188[1],(void*)0,(void*)0,(void*)0,&g_2188[1],(void*)0}},{{&g_49,(void*)0,&g_2188[1],(void*)0,(void*)0,(void*)0,&g_2188[1]},{(void*)0,(void*)0,&g_2188[1],&g_49,&g_2188[1],&g_2188[1],&g_2188[1]},{&g_49,&g_2188[1],&g_2188[1],&g_49,(void*)0,&g_49,&g_49},{&g_49,&g_2188[1],(void*)0,(void*)0,&g_2188[1],&g_49,&g_2188[1]}},{{&g_2188[1],&g_49,&g_2188[1],(void*)0,(void*)0,&g_2188[1],&g_49},{&g_2188[1],&g_2188[1],&g_49,&g_2188[1],(void*)0,(void*)0,&g_2188[1]},{&g_49,&g_49,&g_49,(void*)0,&g_49,&g_2188[1],&g_2188[1]},{&g_49,&g_2188[1],&g_2188[1],&g_2188[1],&g_49,&g_2188[1],(void*)0}},{{(void*)0,&g_2188[1],(void*)0,(void*)0,(void*)0,&g_2188[1],(void*)0},{&g_49,(void*)0,&g_2188[1],(void*)0,(void*)0,(void*)0,&g_2188[1]},{(void*)0,(void*)0,&g_2188[1],&g_49,&g_2188[1],&g_2188[1],&g_2188[1]},{&g_49,&g_2188[1],&g_2188[1],&g_49,(void*)0,&g_49,&g_49}}};
    int16_t l_2611 = 0L;
    const int32_t *l_2613 = &g_42[4];
    uint64_t l_2633 = 1UL;
    int8_t l_2634 = 0x49L;
    uint32_t l_2645[5];
    int64_t l_2702[6] = {0xB29EF2D235297A13LL,6L,0xB29EF2D235297A13LL,0xB29EF2D235297A13LL,6L,0xB29EF2D235297A13LL};
    struct S0 l_2707[1][5] = {{{-2010},{-2010},{-2010},{-2010},{-2010}}};
    int8_t l_2724 = (-2L);
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_2439[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_2645[i] = 0UL;
    for (g_2 = 0; (g_2 == (-15)); g_2 = safe_sub_func_int8_t_s_s(g_2, 5))
    { 
        uint64_t *l_1896 = &g_1897[0][0][1];
        int64_t l_1900 = 1L;
        uint16_t *l_1901 = &g_1902;
        struct S0 **l_1914 = &g_359;
        struct S0 ***l_1913 = &l_1914;
        int64_t *l_1918 = &g_1919;
        int32_t *l_1920[3];
        uint32_t l_2305 = 0x4A4C1BB2L;
        int32_t l_2315 = 9L;
        union U2 ** const l_2333 = &g_2142[0][1];
        int64_t l_2377 = 0x28225985E8B3B8D8LL;
        int16_t l_2396 = (-1L);
        int16_t l_2411 = 6L;
        uint32_t l_2422[2];
        int i;
        for (i = 0; i < 3; i++)
            l_1920[i] = &l_1917[2][0][1];
        for (i = 0; i < 2; i++)
            l_2422[i] = 1UL;
    }
    return (*l_2613);
}



static int32_t * func_5(const uint8_t  p_6, const int32_t * p_7, uint16_t  p_8, int32_t * p_9, int32_t * p_10)
{ 
    int16_t l_1930[6] = {0x804CL,0x6FBFL,0x6FBFL,0x804CL,0x6FBFL,0x6FBFL};
    const struct S0 l_1934 = {-1177};
    uint16_t *l_1935 = &g_1902;
    int16_t *l_1936 = &g_702;
    int32_t l_1937 = 0x1F58E322L;
    int32_t l_1938 = 1L;
    union U1 l_1939 = {0x17DDL};
    uint16_t *****l_1950[1][2][1];
    uint32_t l_1951 = 8UL;
    struct S0 l_1952 = {5800};
    uint16_t ***l_1953[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t ***l_1954 = &g_533[0][0];
    int64_t *l_1961 = (void*)0;
    int64_t **l_1960 = &l_1961;
    int64_t ***l_1959 = &l_1960;
    int8_t *l_1965 = &g_185;
    int8_t *l_1966[5][6][2] = {{{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562}},{{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562}},{{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562}},{{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562}},{{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562},{(void*)0,&g_562}}};
    int8_t **l_1971 = &g_184[0];
    int64_t ****l_1975 = &l_1959;
    struct S0 ***l_1981 = &g_358[0][2];
    int64_t l_2042[7][1];
    uint64_t l_2052 = 0x373A4C924B541145LL;
    uint16_t *** const *l_2069[3];
    uint16_t *** const **l_2068 = &l_2069[1];
    int32_t l_2092 = 9L;
    union U1 *l_2101 = &l_1939;
    union U1 ** const l_2100 = &l_2101;
    uint32_t l_2112 = 0xFBD2CEF0L;
    int32_t l_2151[4][1][7] = {{{0xDA47F40BL,1L,1L,0xDA47F40BL,0x4CC4E5DEL,0xDA47F40BL,1L}},{{0x520A11C6L,0x520A11C6L,0xDA47F40BL,0x26BA33B8L,(-9L),0L,6L}},{{0x26BA33B8L,0x520A11C6L,1L,0L,0L,1L,0x520A11C6L}},{{1L,1L,0x520A11C6L,1L,(-9L),0x487940BFL,0x26BA33B8L}}};
    int32_t l_2152 = 0xECD07D77L;
    uint32_t l_2153 = 0x2DB29B32L;
    struct S0 l_2164 = {3923};
    uint64_t l_2167 = 18446744073709551615UL;
    int64_t l_2197 = 0x7ABD0C9975902A8FLL;
    int64_t l_2199 = 0L;
    union U2 l_2274 = {0x625D81B11DBAA1B3LL};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1950[i][j][k] = &g_955[0];
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2042[i][j] = 0xE8CFF0EA75C96DD1LL;
    }
    for (i = 0; i < 3; i++)
        l_2069[i] = &l_1953[5];
    l_1938 ^= (0xABA3D196L == (~((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(251UL, (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((((*l_1936) |= (((p_6 == (l_1930[4] && (safe_div_func_uint64_t_u_u((0xA4EAL > (+((l_1934 , ((*l_1935) = ((*g_534) = p_6))) >= 0xA55DL))), p_8)))) != 0xA3D1L) ^ l_1930[4])) ^ 0x5E8FL), l_1937)), l_1937)))), l_1937)) , (-10L))));
    l_1952 = l_1934;
    l_1954 = l_1953[5];
    if ((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((l_1938 |= (*p_9)) , (l_1939.f1 = (p_6 == ((((2L & p_8) < ((((*l_1965) = (l_1959 != g_1962)) < (g_915[3] , 1UL)) , l_1930[1])) == g_886[0][0]) | 0x74L)))), 0x5CL)), l_1952.f0)))
    { 
        int8_t **l_1973[3][7] = {{&g_184[0],&g_184[0],(void*)0,&g_184[0],&g_184[0],(void*)0,&g_184[0]},{&g_184[0],&l_1966[1][1][1],&l_1966[1][1][1],&g_184[0],&l_1966[1][1][1],&l_1966[1][1][1],&g_184[0]},{&l_1966[1][1][1],&g_184[0],&l_1966[1][1][1],&l_1966[1][1][1],&g_184[0],&l_1966[1][1][1],&l_1966[1][1][1]}};
        int8_t ***l_1972 = &l_1973[2][2];
        int64_t ****l_1974[6][1];
        int32_t l_1978[4][6][7] = {{{0x7F5CF670L,0xA9196A7BL,0xC2A251B1L,9L,(-1L),(-3L),0xCA905A2DL},{0xFE7EFECEL,6L,0L,(-1L),0x6C6B10DAL,(-3L),4L},{(-1L),0x9C2BD9EDL,0x8AA3B311L,0xB3CD79E8L,0x8AA3B311L,0x9C2BD9EDL,(-1L)},{1L,1L,0xBA1A67C6L,(-3L),6L,0L,9L},{0xCA4B8A1EL,(-1L),0xCA905A2DL,0x6C6B10DAL,0xF014C4E2L,0x1EEB916DL,8L},{0x8AA3B311L,0xF014C4E2L,0xBA1A67C6L,0xCA4B8A1EL,0x1EEB916DL,1L,(-3L)}},{{4L,0x94A0BB18L,0x8AA3B311L,9L,0xA67AD349L,0x6C6B10DAL,0xBA1A67C6L},{(-1L),(-1L),0L,0L,0xB3CD79E8L,0xFE7EFECEL,0xBA1A67C6L},{0x9C2BD9EDL,(-3L),0xC2A251B1L,0xBA1A67C6L,0xBA1A67C6L,0xC2A251B1L,(-3L)},{0xF014C4E2L,1L,(-1L),6L,(-8L),0x873F204DL,8L},{0x0BEA1FE7L,0x8AA3B311L,0xA9196A7BL,0x108F3A96L,0xC2A251B1L,8L,9L},{1L,(-8L),0L,6L,0x9C2BD9EDL,(-1L),(-1L)}},{{6L,9L,(-1L),0xBA1A67C6L,0xEE6005C7L,0L,4L},{0xB3CD79E8L,1L,0xF014C4E2L,0L,0x873F204DL,0x0BEA1FE7L,0xCA905A2DL},{0xB3CD79E8L,0x0BEA1FE7L,1L,9L,(-1L),9L,1L},{6L,6L,(-1L),0xCA4B8A1EL,1L,6L,0x0BEA1FE7L},{1L,0xCFFAA830L,0x1EEB916DL,0x6C6B10DAL,1L,0x7F5CF670L,0x9C2BD9EDL},{0x0BEA1FE7L,0L,0x108F3A96L,(-3L),1L,(-1L),(-1L)}},{{0xF014C4E2L,0xFE7EFECEL,1L,0xB3CD79E8L,(-1L),0x40B7711AL,0x8AA3B311L},{0x9C2BD9EDL,0xCA905A2DL,0x94A0BB18L,(-1L),0x873F204DL,0xBA1A67C6L,0x7F5CF670L},{(-1L),0xCA905A2DL,1L,0xA67AD349L,0xCA4B8A1EL,0xCA4B8A1EL,0xA67AD349L},{1L,0x7F5CF670L,1L,0x1EEB916DL,4L,0xCBC2509EL,0xCA4B8A1EL},{0x0BEA1FE7L,0x873F204DL,0L,0xF014C4E2L,1L,0xB3CD79E8L,0L},{0x9C2BD9EDL,0xF014C4E2L,0xCA905A2DL,6L,0xCFFAA830L,0xCBC2509EL,6L}}};
        struct S0 *****l_1985 = &g_400;
        uint32_t l_2008 = 4294967292UL;
        uint64_t l_2089 = 0x2784030276420880LL;
        uint16_t l_2093 = 0xC377L;
        union U1 * const l_2104[2][3] = {{&g_2105,&g_2105,&g_2105},{&g_2105,&g_2105,&g_2105}};
        union U1 * const *l_2103[3];
        uint64_t l_2143 = 0x2B33B09B231F37C5LL;
        int32_t **l_2144 = &g_254;
        union U2 **l_2145 = (void*)0;
        union U2 **l_2146 = &g_2142[0][2];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1974[i][j] = &g_1473;
        }
        for (i = 0; i < 3; i++)
            l_2103[i] = &l_2104[1][0];
        if (((l_1937 ^= (((l_1939 , (safe_lshift_func_int8_t_s_u(((*l_1965) = ((!((*g_1964) &= (+p_8))) <= ((l_1971 = &l_1966[1][1][1]) == ((*l_1972) = &l_1966[1][1][1])))), ((&l_1959 != (l_1975 = l_1974[4][0])) != ((((g_1976 != (void*)0) || l_1978[3][3][6]) , l_1938) && g_1326[0]))))) , 1L) < p_6)) != p_8))
        { 
            union U2 l_1984 = {18446744073709551615UL};
            uint16_t **** const l_2000 = &l_1953[5];
            int32_t l_2033[4] = {0x896C309FL,0x896C309FL,0x896C309FL,0x896C309FL};
            uint32_t l_2041 = 0xE1E8E5FEL;
            union U1 *l_2057 = &l_1939;
            union U1 **l_2056 = &l_2057;
            int i;
            for (p_8 = 0; (p_8 <= 30); p_8++)
            { 
                (*p_9) &= (l_1981 == (void*)0);
                if ((((&g_400 == (l_1984 , l_1985)) , l_1978[2][4][4]) > (1UL >= 18446744073709551615UL)))
                { 
                    if ((*p_10))
                        break;
                }
                else
                { 
                    int32_t **l_1986 = &g_254;
                    (*l_1986) = p_9;
                }
            }
            for (g_332.f3 = (-11); (g_332.f3 <= 49); ++g_332.f3)
            { 
                int16_t *l_2003 = (void*)0;
                int16_t *l_2004[2][3];
                int32_t l_2005 = 0x5BA6329DL;
                uint64_t l_2024 = 0x3239C6C1E5E9FA33LL;
                uint8_t *l_2032 = &l_1984.f1;
                struct S0 l_2053 = {-7707};
                int32_t **l_2055 = &g_254;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2004[i][j] = (void*)0;
                }
            }
            (*l_2056) = &g_550;
            for (g_141 = 24; (g_141 <= 21); g_141 = safe_sub_func_uint64_t_u_u(g_141, 3))
            { 
                union U1 l_2065[3] = {{9L},{9L},{9L}};
                int32_t l_2086 = 0x36DE1F29L;
                int32_t *l_2087 = &l_2033[3];
                int32_t *l_2088[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2088[i] = &l_1937;
                for (l_1937 = 5; (l_1937 >= 0); l_1937 -= 1)
                { 
                    int8_t l_2075 = (-1L);
                    int32_t l_2076[4][4] = {{0xCC114FF6L,0x8093AF8EL,0xCC114FF6L,0x8093AF8EL},{0xCC114FF6L,0x8093AF8EL,0xCC114FF6L,0x8093AF8EL},{0xCC114FF6L,0x8093AF8EL,0xCC114FF6L,0x8093AF8EL},{0xCC114FF6L,0x8093AF8EL,0xCC114FF6L,0x8093AF8EL}};
                    int32_t *l_2077 = &l_1978[3][3][6];
                    int i, j;
                    (*l_2077) ^= (((safe_unary_minus_func_uint64_t_u(g_915[l_1937])) , (-1L)) == ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((!(g_332 , ((l_2065[2] , (safe_div_func_uint16_t_u_u(((g_2070[2] = l_2068) != &l_2069[1]), (+((((((*p_9) = ((l_2075 , 0L) && 0xD982L)) & (-7L)) || l_2076[2][0]) <= l_2076[2][2]) > l_2076[2][0]))))) == l_1984.f2))) && 0x603F559CDE89C674LL))), p_8)) < 0x67519BA600AC80EALL));
                    (*p_9) ^= (l_2065[2].f1 = ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0x302D78BEL, ((~(l_1939 , ((*g_359) , (g_621[1] <= (l_1952.f0 = 0x92L))))) , (safe_mul_func_uint8_t_u_u((!9L), (((((*l_2057) , 0x57C1F20CF68020C2LL) & l_1978[3][3][6]) && p_8) >= 0x6AF5L)))))), 5)) & l_2065[2].f0));
                }
                (*p_9) |= l_1978[3][3][6];
                ++l_2089;
                l_2093++;
            }
        }
        else
        { 
            union U1 * const *l_2102[1][3];
            int32_t l_2109 = 3L;
            int32_t l_2110 = 8L;
            int32_t l_2111[6][4] = {{0xA1EF9796L,0xF3EDF114L,0xA1EF9796L,0xD8A0C824L},{9L,0xF3EDF114L,4L,0xF3EDF114L},{9L,0xD8A0C824L,0xA1EF9796L,0xF3EDF114L},{0xA1EF9796L,0xF3EDF114L,0xA1EF9796L,0xD8A0C824L},{9L,0xF3EDF114L,4L,0xF3EDF114L},{9L,0xD8A0C824L,0xA1EF9796L,0xF3EDF114L}};
            union U2 l_2129 = {0UL};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2102[i][j] = &l_2101;
            }
            if ((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_1939 , (l_2100 != (l_2103[2] = l_2102[0][0]))), 0x667C2D95L)), ((-1L) && (l_2092 != (-1L))))))
            { 
                int32_t *l_2108[7][6] = {{&l_1978[1][4][5],&g_42[4],&g_42[0],&g_42[1],&g_42[0],&g_42[4]},{&g_42[0],&g_2,&g_43,&g_42[1],&g_62,&g_62},{&l_1978[1][4][5],&g_62,&g_43,&g_62,&l_1978[1][4][5],&g_42[4]},{&g_43,&g_62,&g_42[0],(void*)0,&g_62,(void*)0},{&g_43,&g_2,&g_43,&g_62,&g_42[0],(void*)0},{&l_1978[1][4][5],&g_42[4],&g_42[0],&g_42[1],&g_42[0],&g_42[4]},{&g_42[0],&g_2,&g_43,&g_42[1],&g_62,&g_62}};
                struct S0 **l_2115 = &g_359;
                int i, j;
                l_2112--;
                (*l_2115) = (void*)0;
                for (g_61 = 0; (g_61 <= 4); g_61 += 1)
                { 
                    struct S0 * const l_2116 = &g_49;
                    struct S0 **l_2117 = &g_359;
                    int32_t **l_2118 = &g_254;
                    (*l_2117) = l_2116;
                    if (l_1978[1][1][6])
                        continue;
                    (*l_2118) = &l_2111[4][3];
                    (*l_2100) = &g_2105;
                }
            }
            else
            { 
                union U2 *l_2130 = &l_2129;
                int32_t l_2131 = (-6L);
                int32_t *l_2132 = &l_1978[3][3][6];
                (*l_2132) &= ((**g_786) && (safe_mul_func_int16_t_s_s((6L == (0L ^ (l_2092 &= (l_2131 &= ((p_8 < (*p_10)) || ((safe_mul_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_s(0xB99AL, 8))), (safe_sub_func_int64_t_s_s((~(((*l_2130) = l_2129) , p_6)), p_6)))) || 0x2F5BDECAL)))))), 0UL)));
            }
            (*p_9) = (safe_lshift_func_uint8_t_u_s(g_562, (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(p_6, (l_2111[0][3] &= ((void*)0 == g_2141[2][1])))), (l_2143 &= (p_6 , p_6)))), 7)) | (1L ^ l_2093)) | p_8)));
        }
        (*l_2144) = &l_1978[3][3][6];
        (*l_2146) = (void*)0;
        (**l_2144) ^= (0x71D432E6L | 4294967286UL);
    }
    else
    { 
        int32_t *l_2147 = &l_1939.f1;
        int32_t *l_2148 = (void*)0;
        int32_t *l_2149 = &g_550.f1;
        int32_t *l_2150[7] = {&l_1939.f1,&l_1939.f1,&l_1939.f1,&l_1939.f1,&l_1939.f1,&l_1939.f1,&l_1939.f1};
        union U1 ** const l_2163 = &g_2162;
        union U2 l_2165 = {0x95B1CF1519C01719LL};
        int32_t ***l_2176 = &g_299;
        struct S0 l_2240[4] = {{-3531},{-3531},{-3531},{-3531}};
        uint64_t l_2243[5] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
        int8_t ** const l_2251 = &l_1965;
        int64_t **l_2282 = &l_1961;
        uint16_t l_2288[5][4][6] = {{{1UL,0xE426L,1UL,0x0DF5L,0UL,1UL},{0x3970L,65534UL,0x0C5BL,0xB8D7L,1UL,1UL},{0xAF88L,0xDBA9L,2UL,65535UL,0xB65AL,1UL},{65535UL,1UL,0xACC0L,1UL,0UL,0x0DF5L}},{{0x4F1DL,0UL,65535UL,0UL,0x4F1DL,0xCD57L},{4UL,65535UL,0x3970L,1UL,0x4D00L,0UL},{1UL,0xA51EL,0x30AEL,65535UL,65526UL,0UL},{0UL,65535UL,0x3970L,0x0C5BL,1UL,0xCD57L}},{{65526UL,0xC790L,65535UL,65532UL,0xDBA9L,0x0DF5L},{1UL,0x82E8L,0xA51EL,0xB8D7L,0x7B8AL,65535UL},{0x363CL,0xAF88L,65534UL,0x4D00L,0UL,0xAA4AL},{0xB8D7L,0x30AEL,65535UL,1UL,0xD4DDL,1UL}},{{65535UL,65535UL,0xC078L,2UL,0xACC0L,65532UL},{65535UL,1UL,65535UL,65534UL,1UL,1UL},{0x0C5BL,0x0DF5L,0x0DF5L,0x0C5BL,65535UL,0x363CL},{0UL,0xC0D5L,0xC5D7L,1UL,1UL,0x4F1DL}},{{0UL,0xCD57L,0x4D00L,0xA51EL,1UL,0x1217L},{0xE426L,0xC0D5L,1UL,0x82E8L,65535UL,0xDBA9L},{65535UL,0x0DF5L,0x30AEL,65535UL,1UL,1UL},{65532UL,1UL,0x0C5BL,4UL,0xACC0L,0xAF88L}}};
        uint64_t *l_2289 = &l_2274.f0;
        uint8_t *l_2299[7] = {&g_332.f1,&g_332.f1,&g_940,&g_332.f1,&g_332.f1,&g_940,&g_332.f1};
        int i, j, k;
        l_2153--;
lbl_2168:
        for (g_1919 = 4; (g_1919 >= 0); g_1919 -= 1)
        { 
            int32_t l_2160 = 0x4FF01ADFL;
            struct S0 l_2166[2] = {{8019},{8019}};
            int i;
            l_2148 = p_9;
            if (l_2112)
                goto lbl_2168;
            (*l_2147) ^= (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((l_2160 &= ((*p_10) = l_1930[g_1919])) == (0x03EE57E1535540F0LL && ((***g_1962) = (((*g_359) = l_2166[0]) , p_8)))), 2)), l_2167));
        }
        for (g_62 = (-7); (g_62 > 0); g_62 = safe_add_func_int64_t_s_s(g_62, 2))
        { 
            int8_t l_2171 = 0x35L;
            int32_t *****l_2177 = (void*)0;
            const int32_t l_2196 = (-1L);
            int8_t ***l_2228 = &l_1971;
            int32_t l_2255 = (-1L);
            int64_t **l_2275 = &l_1961;
        }
        for (p_8 = 0; (p_8 == 38); p_8++)
        { 
            return l_2149;
        }
        (*l_2149) = ((safe_mul_func_uint8_t_u_u((~((((***g_2072) = (((((*l_2289) = l_2288[2][1][3]) , ((*p_9) ^= ((*l_2147) = (safe_rshift_func_uint8_t_u_s(p_6, 2))))) >= (safe_mul_func_uint8_t_u_u((g_332.f1 ^= (safe_add_func_int16_t_s_s(l_2151[0][0][6], ((p_8 , ((~0xB0L) | (safe_sub_func_int32_t_s_s((-8L), ((l_2164.f0 |= (((*l_2282) == (*l_2282)) & 0xD637567BL)) | 0xA301228EL))))) , 7L)))), p_8))) || 249UL)) || (***g_2072)) , (*p_10))), 0x54L)) | g_2300);
    }
    return p_9;
}



static int32_t * func_11(uint8_t  p_12)
{ 
    int32_t *l_39[2];
    uint32_t *l_58 = &g_59;
    uint32_t *l_60[7] = {&g_61,&g_61,(void*)0,&g_61,&g_61,(void*)0,&g_61};
    struct S0 l_734[4] = {{5039},{5039},{5039},{5039}};
    union U2 l_735 = {0xB906E4F6BB58354ALL};
    uint64_t l_1802[1][6];
    uint64_t l_1824[2][4];
    uint64_t l_1865 = 0xB13B820DE16F0359LL;
    int16_t l_1871 = 0L;
    uint16_t **l_1880 = &g_534;
    uint32_t l_1887 = 0UL;
    int32_t l_1890 = 0x22A37617L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_39[i] = &g_2;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1802[i][j] = 0x65FDA9410DC5666FLL;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1824[i][j] = 0x0613B3E4D630DFF2LL;
    }
    if (((0xA37BB00868BB4AADLL && (((func_13(func_16(func_22((safe_mod_func_uint16_t_u_u(g_2, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((func_33(((g_62 &= (g_61 = ((*l_58) = ((((1UL <= (&g_2 != (void*)0)) , 0x8BL) , func_36(l_39[1], l_39[0])) , p_12)))) > g_2), p_12) != p_12), 7)), g_283[0][1])))), g_283[0][1], g_158[0], l_39[0]), l_734[3], l_60[2], l_735, p_12), l_39[1]) , l_734[0]) , l_58) != l_39[1])) || 9L))
    { 
        int16_t l_1753 = (-2L);
        int32_t l_1754 = 0xB61FA93BL;
        int32_t l_1756 = 0x53C25EEFL;
        int32_t l_1757 = (-1L);
        const struct S0 *l_1806 = &l_734[3];
        for (g_1175 = (-16); (g_1175 <= 25); ++g_1175)
        { 
            int32_t l_1755[4];
            int32_t *l_1770 = &g_42[4];
            union U1 l_1785 = {0L};
            int i;
            for (i = 0; i < 4; i++)
                l_1755[i] = 0xED7369C9L;
            if (l_1753)
            { 
                uint64_t l_1758 = 0x1545071933E358AELL;
                --l_1758;
                l_1755[0] = (l_1754 = p_12);
            }
            else
            { 
                int32_t l_1763 = (-10L);
                struct S0 l_1768 = {8074};
                union U1 l_1786 = {-10L};
                int32_t **l_1805 = &l_39[1];
                const struct S0 **l_1807 = &l_1806;
                l_1755[3] ^= (safe_lshift_func_uint16_t_u_s(l_1763, 4));
                for (p_12 = 0; (p_12 == 46); p_12++)
                { 
                    union U1 *l_1766[1][4][5] = {{{&g_550,&g_550,&g_550,&g_550,&g_550},{(void*)0,&g_550,&g_550,(void*)0,&g_550},{&g_550,&g_550,(void*)0,&g_550,&g_550},{&g_550,(void*)0,&g_550,&g_550,(void*)0}}};
                    union U1 **l_1767 = &l_1766[0][1][3];
                    int32_t *l_1769 = &l_1755[0];
                    int64_t *l_1773 = &g_886[0][1];
                    int8_t *l_1781 = &g_185;
                    int64_t **l_1801 = &l_1773;
                    int64_t ***l_1800 = &l_1801;
                    int16_t *l_1803[4];
                    int16_t l_1804 = 3L;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1803[i] = &l_1786.f0;
                    (*l_1767) = l_1766[0][0][0];
                    (*g_359) = l_1768;
                    l_1770 = l_1769;
                    l_1763 |= ((((safe_div_func_int64_t_s_s(((*l_1773) ^= 2L), (safe_div_func_int32_t_s_s(l_1753, (l_1768.f0 | (safe_unary_minus_func_int16_t_s((p_12 || ((((safe_mul_func_int8_t_s_s((((p_12 != (0x1AL ^ ((*l_1781) |= (0x9FL && l_1768.f0)))) > 1L) >= 1L), g_1194[1])) && 0x06DC8BBE594924F3LL) , l_1768.f0) == p_12))))))))) | p_12) < (-9L)) & p_12);
                    l_1768.f0 &= ((safe_rshift_func_int8_t_s_u((p_12 | ((((g_1784[0] = g_1784[0]) == ((l_1786 = l_1785) , g_1787[0])) , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((*l_1770) ^= (((safe_add_func_int16_t_s_s(0x1EDAL, ((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((p_12 & ((((l_1800 != (void*)0) && 0x8C88C47A70155FBELL) && p_12) || 1L)), p_12)), 0xC4L)) ^ g_59))) | 0x10L) ^ l_1802[0][1])), g_168)) < (-1L)), 12)), (***g_532)))) || l_1804)), 5)) >= 0x30EB72F2C625DE19LL);
                }
                (*l_1805) = &l_1763;
                (*l_1807) = l_1806;
            }
            return l_60[2];
        }
    }
    else
    { 
        uint32_t *l_1814 = &l_735.f3;
        uint32_t **l_1815 = &l_1814;
        int32_t l_1818 = (-7L);
        int64_t *l_1830[1];
        int64_t ** const l_1829 = &l_1830[0];
        int64_t ** const *l_1828 = &l_1829;
        uint16_t ** const * const l_1843 = &g_533[3][0];
        uint16_t ** const * const *l_1842 = &l_1843;
        uint16_t ** const * const **l_1841 = &l_1842;
        struct S0 l_1850[3] = {{2784},{2784},{2784}};
        int32_t l_1873 = (-1L);
        uint16_t **l_1881 = &g_534;
        int i;
        for (i = 0; i < 1; i++)
            l_1830[i] = &g_886[0][1];
        if ((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x2DL, ((safe_sub_func_uint16_t_u_u(((((*l_1815) = l_1814) != (void*)0) < (g_1326[0] , 1L)), ((l_1818 = (safe_add_func_int32_t_s_s(l_1818, (safe_mul_func_int16_t_s_s(0L, (***g_532)))))) <= 0xC3L))) | 0x0EL))), g_621[1])))
        { 
            int32_t *l_1821 = &l_1818;
            l_1821 = l_1821;
        }
        else
        { 
            int64_t *l_1827[3][7];
            int64_t **l_1826 = &l_1827[0][1];
            int64_t ***l_1825 = &l_1826;
            const struct S0 l_1831[6][3][4] = {{{{5780},{7511},{-3188},{7511}},{{-6164},{6580},{-1312},{-3188}},{{7511},{6580},{6580},{7511}}},{{{6580},{7511},{-6164},{5780}},{{6580},{-6164},{6580},{-1312}},{{7511},{5780},{-1312},{-1312}}},{{{-6164},{-6164},{-3188},{5780}},{{5780},{7511},{-3188},{7511}},{{-6164},{6580},{-1312},{-3188}}},{{{7511},{6580},{6580},{7511}},{{6580},{7511},{-6164},{5780}},{{6580},{-6164},{6580},{-1312}}},{{{7511},{5780},{-1312},{-1312}},{{-6164},{-6164},{-3188},{5780}},{{5780},{7511},{-3188},{7511}}},{{{-6164},{6580},{-1312},{-3188}},{{7511},{6580},{6580},{7511}},{{6580},{7511},{-6164},{5780}}}};
            uint16_t ** const * const **l_1844 = (void*)0;
            union U2 l_1845 = {0x392A44A245670842LL};
            int32_t l_1846[5];
            uint64_t *l_1861 = &l_735.f0;
            int32_t **l_1870 = &l_39[1];
            uint16_t **l_1882 = &g_534;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1827[i][j] = (void*)0;
            }
            for (i = 0; i < 5; i++)
                l_1846[i] = 0xA272556CL;
            for (g_141 = 0; (g_141 <= (-12)); g_141--)
            { 
                struct S0 l_1856 = {-1192};
                const uint16_t *l_1862[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int64_t l_1872 = (-1L);
                int i;
                if (l_1824[0][0])
                    break;
                if (((l_1825 != (l_1828 = &l_1826)) , ((l_1831[3][0][3] , (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_div_func_int8_t_s_s((l_1846[4] = (((safe_lshift_func_uint8_t_u_u(((l_1844 = l_1841) != (void*)0), 4)) | p_12) , ((((l_1845 , p_12) > g_940) , 0x6F29196D5CE4860FLL) < 0x3F2B17C68FBBE596LL))), 0xE6L)))), p_12)), g_1361))) < 0x50FDL)))
                { 
                    int16_t *l_1857 = &g_1175;
                    const int32_t *l_1858 = (void*)0;
                    const int32_t **l_1859 = &l_1858;
                    (*l_1859) = ((18446744073709551613UL || ((~p_12) , (safe_lshift_func_int16_t_s_s((l_1850[2] , ((*l_1857) |= (((~(p_12 & ((-1L) | ((0x71AE4DE0L > ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((l_1856 , (void*)0) == (void*)0), p_12)) , 1UL), 2)) >= p_12)) || 0UL)))) || 0xD81C42E929D4849CLL) , g_915[0]))), 13)))) , l_1858);
                }
                else
                { 
                    uint64_t **l_1860 = (void*)0;
                    l_1846[3] &= (&g_158[2] == (l_1861 = &g_158[1]));
                    l_1846[4] |= ((****l_1844) == l_1862[2]);
                    if (l_1845.f1)
                        continue;
                }
                if (p_12)
                    continue;
                l_1873 &= (g_43 = (safe_div_func_uint32_t_u_u((l_1865 ^ ((safe_add_func_int8_t_s_s(((l_1845.f1 > (**g_786)) == (((safe_add_func_int32_t_s_s(((*g_1165) != l_1870), ((g_562 , (p_12 > p_12)) || p_12))) ^ 0xCC58L) , l_1871)), 0L)) ^ l_1872)), (**g_786))));
            }
        }
    }
    g_41 = (l_1887 , ((safe_lshift_func_uint16_t_u_s(p_12, p_12)) , (g_43 = ((0UL | l_1890) <= (safe_lshift_func_uint16_t_u_u((((void*)0 == &l_1890) || (**g_786)), 12))))));
    return l_39[1];
}



static int64_t  func_13(struct S0  p_14, int32_t * p_15)
{ 
    uint64_t l_973[1];
    int32_t l_987[7][1][6] = {{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}},{{0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L,0x19456E19L}}};
    int64_t *****l_997 = (void*)0;
    const struct S0 l_1077 = {-6972};
    int8_t *l_1079 = (void*)0;
    int64_t *l_1081 = &g_886[0][1];
    int64_t * const *l_1080 = &l_1081;
    union U2 l_1093 = {18446744073709551615UL};
    int32_t *l_1098[4][7][7] = {{{&g_43,&g_550.f1,&g_43,&g_42[4],&g_62,&g_41,&g_62},{&g_2,(void*)0,(void*)0,&g_2,&g_62,&g_42[4],&g_43},{&g_43,&g_42[4],&g_62,&g_2,(void*)0,(void*)0,&g_2},{&g_62,&g_41,&g_62,&g_42[4],&g_43,&g_550.f1,&g_43},{&g_41,&g_41,&g_62,&g_62,&g_43,&g_62,&g_62},{&g_43,&g_43,&g_62,(void*)0,&g_42[3],&g_550.f1,&g_41},{(void*)0,&g_43,(void*)0,&g_550.f1,&g_550.f1,(void*)0,&g_43}},{{(void*)0,&g_41,&g_43,&g_62,&g_42[3],&g_42[4],(void*)0},{(void*)0,&g_41,&g_43,&g_43,&g_43,&g_41,(void*)0},{(void*)0,&g_42[4],&g_42[3],&g_62,&g_43,&g_41,(void*)0},{&g_43,(void*)0,&g_550.f1,&g_550.f1,(void*)0,&g_43,(void*)0},{&g_41,&g_550.f1,&g_42[3],(void*)0,&g_62,&g_43,&g_43},{&g_62,&g_62,&g_43,&g_62,&g_62,&g_41,&g_41},{&g_43,&g_550.f1,&g_43,&g_42[4],&g_62,&g_41,&g_62}},{{&g_2,(void*)0,(void*)0,&g_2,&g_62,&g_42[4],&g_43},{&g_43,&g_42[4],&g_62,&g_2,(void*)0,(void*)0,&g_2},{&g_62,&g_41,&g_62,&g_42[4],&g_43,&g_550.f1,&g_43},{&g_41,&g_41,&g_62,&g_62,&g_43,&g_62,&g_62},{&g_43,&g_43,&g_62,(void*)0,&g_42[3],&g_550.f1,&g_41},{(void*)0,&g_43,(void*)0,&g_550.f1,&g_550.f1,(void*)0,&g_43},{(void*)0,&g_41,&g_43,&g_62,&g_42[3],&g_42[4],(void*)0}},{{(void*)0,&g_41,&g_43,&g_43,&g_43,&g_41,(void*)0},{&g_42[4],&g_41,&g_43,&g_550.f1,&g_62,&g_42[3],&g_2},{&g_62,&g_2,(void*)0,(void*)0,&g_2,&g_62,&g_42[4]},{(void*)0,(void*)0,&g_43,&g_42[4],&g_41,&g_62,&g_62},{&g_550.f1,&g_41,&g_43,&g_41,&g_550.f1,&g_42[3],(void*)0},{&g_62,(void*)0,&g_62,&g_41,&g_550.f1,(void*)0,&g_550.f1},{&g_43,&g_2,&g_2,&g_43,&g_41,&g_41,&g_62}}};
    int32_t l_1131 = 0x977293F0L;
    uint16_t l_1150 = 65531UL;
    int32_t ****l_1166 = &g_1165;
    uint32_t l_1285 = 0x6E6FEE9DL;
    union U1 *l_1338 = (void*)0;
    union U1 **l_1337[5];
    uint16_t ****l_1373 = &g_532;
    uint16_t ****l_1376 = &g_532;
    int8_t l_1378 = 0xCFL;
    uint64_t l_1420 = 0xAC49C24C2EB6804FLL;
    const int16_t l_1435 = 0L;
    uint8_t l_1531 = 0xBEL;
    int8_t l_1584 = 3L;
    uint32_t l_1656 = 8UL;
    uint8_t l_1709 = 0x25L;
    int32_t **l_1749[6][5] = {{&g_254,&g_254,(void*)0,&g_254,(void*)0},{&l_1098[2][1][2],&l_1098[2][1][2],&l_1098[2][1][2],&g_254,&l_1098[2][1][2]},{&g_254,&g_254,(void*)0,&g_254,(void*)0},{&l_1098[2][1][2],&l_1098[2][1][2],&l_1098[2][1][2],&g_254,&l_1098[2][1][2]},{&g_254,&g_254,(void*)0,&g_254,(void*)0},{&l_1098[2][1][2],&l_1098[2][1][2],&l_1098[2][1][2],&g_254,&l_1098[2][1][2]}};
    int32_t l_1750 = 0x9AA8BF98L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_973[i] = 0x80F1858BF14479F5LL;
    for (i = 0; i < 5; i++)
        l_1337[i] = &l_1338;
    for (g_166 = (-14); (g_166 < (-10)); ++g_166)
    { 
        int64_t *l_990[6][6] = {{&g_886[0][1],&g_886[0][1],&g_886[0][1],&g_886[0][1],(void*)0,&g_141},{&g_141,&g_886[0][1],&g_141,&g_886[0][1],&g_141,&g_779},{&g_886[0][1],&g_141,&g_779,&g_779,&g_141,&g_886[0][1]},{&g_886[0][1],&g_886[0][1],(void*)0,&g_141,(void*)0,&g_886[0][1]},{(void*)0,&g_886[0][1],&g_779,&g_141,&g_141,&g_779},{(void*)0,(void*)0,&g_141,&g_141,&g_886[2][2],&g_141}};
        int64_t **l_989 = &l_990[0][2];
        int32_t l_992 = 3L;
        uint16_t *****l_1004 = &g_955[0];
        struct S0 l_1068[6][2][7] = {{{{-6242},{319},{-4256},{7467},{7467},{-4256},{319}},{{-4549},{7041},{-4450},{-6242},{7467},{4282},{-5666}}},{{{2545},{3935},{7041},{957},{1140},{-1092},{-4450}},{{394},{-5983},{-6242},{-6242},{-5983},{394},{2545}}},{{{7041},{-4450},{-6242},{7467},{4282},{-5666},{-5983}},{{-5666},{1140},{7041},{394},{-3218},{-5983},{-3218}}},{{{4282},{-4450},{-4450},{4282},{3935},{7467},{-1092}},{{4282},{-5983},{-4256},{1140},{-4549},{957},{-6242}}},{{{-5666},{3935},{-1092},{2545},{7041},{2545},{-1092}},{{7041},{7041},{319},{-6005},{957},{2545},{-3218}}},{{{394},{319},{-3218},{-4450},{-5666},{957},{-5983}},{{2545},{7467},{957},{-3218},{957},{7467},{-4256}}}};
        uint64_t l_1072 = 5UL;
        int32_t *l_1076 = &l_987[3][0][5];
        int i, j, k;
    }
    return l_1750;
}



static struct S0  func_16(uint32_t  p_17, struct S0  p_18, int32_t * p_19, union U2  p_20, const uint32_t  p_21)
{ 
    int16_t l_740 = (-1L);
    int64_t *l_747 = &g_141;
    int64_t **l_746 = &l_747;
    int64_t ***l_745 = &l_746;
    union U1 l_761 = {8L};
    int16_t l_769 = (-1L);
    int8_t l_770 = 1L;
    int32_t ** const **l_789 = (void*)0;
    uint16_t ****l_798 = (void*)0;
    int8_t l_813 = 8L;
    int16_t *l_818 = &g_702;
    int32_t l_849[5];
    uint32_t l_865 = 0UL;
    int32_t *l_922 = (void*)0;
    uint32_t l_939[4][3] = {{0x470C2CB5L,0x470C2CB5L,4294967295UL},{0x470C2CB5L,0x470C2CB5L,4294967295UL},{0x470C2CB5L,0x470C2CB5L,4294967295UL},{0x470C2CB5L,0x470C2CB5L,4294967295UL}};
    struct S0 l_959 = {984};
    const int16_t l_963 = 0x166CL;
    uint16_t l_970[2];
    int i, j;
    for (i = 0; i < 5; i++)
        l_849[i] = (-9L);
    for (i = 0; i < 2; i++)
        l_970[i] = 0x2CDBL;
    for (g_59 = 18; (g_59 == 13); g_59--)
    { 
        int32_t l_741[6] = {1L,1L,0x9717B614L,1L,1L,0x9717B614L};
        int32_t *l_800 = &l_741[0];
        int i;
        p_18.f0 ^= (safe_mod_func_uint32_t_u_u(0x4BF49EC4L, l_740));
        if (l_741[2])
        { 
            uint32_t *l_742 = &g_332.f2;
            int32_t *l_752 = &g_41;
            union U1 *l_768 = &g_550;
            (*l_752) |= (((--(*l_742)) , l_745) != ((~2UL) , g_749[4][4]));
            if (((p_17 & g_42[4]) ^ (safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(((((safe_mod_func_uint32_t_u_u(((p_21 , (safe_mod_func_uint16_t_u_u((~(l_761 , ((&g_43 != (void*)0) != (safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s(((((*g_534) ^= (safe_div_func_uint32_t_u_u(((*l_742) = (&g_550 == l_768)), 0x62F77178L))) , p_20.f2) ^ l_769), l_770)), g_2))))), p_21))) <= p_20.f2), l_770)) && p_20.f3) < 0xA70269ACCBD1195ALL) && 0x98B5308CBA89D249LL))) ^ 0x307AE962CBDDF831LL) , p_20.f2), l_741[5]))))
            { 
                int32_t *l_790 = &g_2;
                uint8_t l_794[5][5] = {{254UL,254UL,2UL,254UL,254UL},{1UL,254UL,1UL,1UL,254UL},{254UL,1UL,1UL,254UL,1UL},{254UL,254UL,2UL,254UL,254UL},{1UL,254UL,1UL,1UL,254UL}};
                union U1 l_797[4][5][2] = {{{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}}},{{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}}},{{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}}},{{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}},{{0xE2E6L},{0xE2E6L}}}};
                uint16_t *****l_799 = &l_798;
                int i, j, k;
                for (p_20.f3 = 0; (p_20.f3 <= 11); p_20.f3 = safe_add_func_int16_t_s_s(p_20.f3, 7))
                { 
                    int64_t *l_778 = &g_779;
                    uint32_t ***l_788 = &g_786;
                    int32_t **l_791 = &l_790;
                    (*l_752) ^= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((~(((*l_778) ^= (((*l_747) |= ((*g_254) > (*g_254))) , 0x315E358C15FE3B15LL)) , 0x6AADL)), 9)), (0x8431L > (((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(65534UL, (safe_lshift_func_uint8_t_u_u((((*l_788) = g_786) == (void*)0), 5)))), p_21)) , (void*)0) != l_789))));
                    (*l_791) = l_790;
                    (*l_752) ^= (5UL | (safe_sub_func_int8_t_s_s(l_794[2][0], (g_89[1][2]--))));
                }
                (*l_799) = (((l_797[2][2][0] , 0UL) & ((p_19 == (void*)0) , 0xF24665EAL)) , l_798);
                (*l_752) = (&g_533[0][0] == &g_533[0][0]);
                return p_18;
            }
            else
            { 
                l_800 = &l_741[1];
            }
        }
        else
        { 
            return p_18;
        }
    }
    if (((l_761.f1 = (g_550.f0 = ((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((((((safe_add_func_uint8_t_u_u((((*g_254) >= 0L) < (safe_rshift_func_uint16_t_u_u((++(***g_532)), l_813))), 0xB8L)) & (((**l_746) = ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((*l_818) &= (g_332 , g_283[0][0])) <= (safe_mul_func_uint16_t_u_u(p_20.f1, p_17))), 4L)), p_18.f0)) <= 0xC4E8L)) & p_20.f1)) , 0x98DB8C00L) , (void*)0) == (void*)0) >= (*g_254)), 0xF46BL)) , p_20.f1), (**g_786))) , 7L), 0x9A4A79EEL)) || 0x27C173A6L))) , 7L))
    { 
        uint32_t l_827 = 0xD364E7AAL;
        p_18.f0 = (((safe_rshift_func_uint16_t_u_u((&g_786 != (g_550 , &g_786)), (safe_add_func_int32_t_s_s((p_17 , (safe_mod_func_int8_t_s_s(((g_550 , l_827) != p_20.f0), g_89[1][2]))), l_769)))) && p_20.f1) , (*g_254));
        return p_18;
    }
    else
    { 
        uint64_t l_834 = 18446744073709551615UL;
        uint16_t l_835 = 0xBD79L;
        struct S0 ** const **l_841 = (void*)0;
        struct S0 ** const ** const * const l_840 = &l_841;
        int32_t l_850 = 0x1BFAD1D1L;
        int32_t l_851 = 1L;
        int32_t l_852 = 1L;
        int32_t l_854 = 0x48A4CD4BL;
        int32_t l_858 = (-2L);
        int32_t l_859 = 0x982D7FC6L;
        int32_t l_860 = (-4L);
        int32_t l_861 = 0x73D3CF4DL;
        int32_t l_862 = 1L;
        int32_t l_913 = 0xE42F5049L;
        int32_t l_914 = 0xD2951BE5L;
        int32_t *l_918[1][6] = {{&g_621[5],&g_621[5],&g_621[5],&g_621[5],&g_621[5],&g_621[5]}};
        const union U1 l_943 = {-1L};
        int32_t **l_958 = &g_254;
        int32_t *l_962 = &l_854;
        int i, j;
        if (((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((*g_254), (safe_add_func_uint32_t_u_u((p_17 ^ (((p_20.f2 <= ((*g_254) | 4294967289UL)) >= (3UL == l_834)) , 0x389321FE37217873LL)), l_834)))) != g_166) , p_21), l_835)) | g_621[5]))
        { 
            int32_t *l_845 = &g_43;
            int32_t l_853 = 0x065AA1D0L;
            int32_t l_855 = 0x1ECA556BL;
            int32_t l_856 = 0x78641E24L;
            int32_t l_857[5][1] = {{(-3L)},{1L},{(-3L)},{1L},{(-3L)}};
            int32_t l_863[7];
            uint16_t l_877 = 0xED32L;
            struct S0 ***l_881 = &g_358[2][0];
            struct S0 *** const *l_880 = &l_881;
            int i, j;
            for (i = 0; i < 7; i++)
                l_863[i] = 0xA53D4A45L;
            for (g_332.f0 = (-14); (g_332.f0 != 32); ++g_332.f0)
            { 
                struct S0 ** const ** const *l_842 = (void*)0;
                int32_t l_864 = (-4L);
                const int64_t ** const *l_889 = (void*)0;
                const int64_t ** const **l_888 = &l_889;
                for (g_562 = 0; (g_562 < (-23)); --g_562)
                { 
                    l_842 = l_840;
                }
                for (g_43 = 0; (g_43 >= 23); g_43++)
                { 
                    int32_t **l_846[6][5][2] = {{{&l_845,(void*)0},{&l_845,(void*)0},{&l_845,&l_845},{(void*)0,(void*)0},{(void*)0,&l_845}},{{&l_845,(void*)0},{&l_845,(void*)0},{&l_845,&l_845},{&l_845,&l_845},{&l_845,(void*)0}},{{&l_845,(void*)0},{&l_845,&l_845},{(void*)0,(void*)0},{(void*)0,&l_845},{&l_845,(void*)0}},{{&l_845,(void*)0},{&l_845,&l_845},{&l_845,&l_845},{&l_845,(void*)0},{&l_845,(void*)0}},{{&l_845,&l_845},{(void*)0,(void*)0},{(void*)0,&l_845},{&l_845,(void*)0},{&l_845,(void*)0}},{{&l_845,&l_845},{&l_845,&l_845},{&l_845,(void*)0},{&l_845,(void*)0},{&l_845,&l_845}}};
                    int i, j, k;
                    g_254 = l_845;
                }
                for (l_813 = 3; (l_813 >= 0); l_813 -= 1)
                { 
                    int32_t *l_847 = &g_62;
                    int32_t *l_848[1][3];
                    union U1 *l_885 = &g_550;
                    union U1 **l_884 = &l_885;
                    int32_t l_887 = 0x43F50807L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_848[i][j] = &l_761.f1;
                    }
                    --l_865;
                    p_18 = p_18;
                    l_864 = (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((~((safe_mod_func_int32_t_s_s(((*l_847) = (l_877 | ((*l_845) = (safe_mul_func_uint8_t_u_u((1L >= (g_400 != l_880)), (safe_div_func_uint16_t_u_u(((l_864 , &g_550) == ((*l_884) = (void*)0)), l_859))))))), g_886[0][1])) , 0x1FC9525FL)), g_158[0])) , p_18.f0), (**g_786))), l_887));
                }
                (*l_845) |= ((&g_750 == ((*l_888) = &g_750)) & p_21);
                p_19 = &l_855;
            }
        }
        else
        { 
            int32_t l_902[6][3][1] = {{{0x7910B4BBL},{1L},{0x7910B4BBL}},{{1L},{0x7910B4BBL},{1L}},{{0x7910B4BBL},{1L},{0x7910B4BBL}},{{1L},{0x7910B4BBL},{1L}},{{0x7910B4BBL},{1L},{0x7910B4BBL}},{{1L},{0x7910B4BBL},{1L}}};
            int32_t l_907 = 0xFA3DEC40L;
            int32_t *l_908 = &l_852;
            int32_t *l_909 = &g_62;
            int32_t *l_910 = (void*)0;
            int32_t *l_911 = &g_62;
            int32_t *l_912[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_912[i] = &g_43;
            l_907 = ((safe_rshift_func_uint8_t_u_s((p_20.f1 & p_17), 1)) , ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(9UL, (((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((l_902[5][0][0] >= (l_902[2][1][0] != (safe_div_func_int64_t_s_s((0x36D8L == ((safe_div_func_uint8_t_u_u((7UL | p_17), 0x6EL)) != p_20.f2)), l_835)))), g_185)) , 1L), g_886[0][1])) ^ p_21) > p_20.f0))) || 0x1045D6BE5C05ABA7LL), p_18.f0)), p_21)) , 0x16DFBE06L));
            g_915[3]--;
            (*l_908) = (*g_254);
            if ((((void*)0 == l_918[0][5]) != 0UL))
            { 
                struct S0 ***l_924 = &g_358[0][2];
                struct S0 ****l_923 = &l_924;
                for (g_550.f1 = 0; (g_550.f1 < 0); g_550.f1 = safe_add_func_int16_t_s_s(g_550.f1, 2))
                { 
                    int32_t **l_921 = &l_909;
                    struct S0 ****l_925[5][5][2] = {{{&l_924,&l_924},{&l_924,(void*)0},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924}},{{&l_924,(void*)0},{&l_924,&l_924},{&l_924,(void*)0},{&l_924,&l_924},{&l_924,&l_924}},{{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924}},{{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924}},{{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924},{&l_924,&l_924}}};
                    struct S0 *****l_926 = &l_925[3][2][1];
                    int16_t *l_938 = &l_769;
                    int i, j, k;
                    l_922 = ((*l_921) = &l_860);
                    (*l_922) = (l_923 == ((*l_926) = l_925[3][2][1]));
                    if (p_20.f1)
                        break;
                    (*l_908) = (safe_unary_minus_func_uint32_t_u((p_18.f0 != (((0L ^ p_20.f0) < ((safe_mod_func_uint32_t_u_u(((g_332.f1 < ((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((-1L) && (&g_166 != l_938)), l_939[0][2])), p_20.f1)) | (*l_922)), l_835)) | g_550.f1), 7)) <= 0x1EL) , 0xF5B7L) ^ p_18.f0)) != 0x46L), (*l_922))) , 1UL)) == 0x78F46559L))));
                }
                g_940++;
            }
            else
            { 
                uint16_t *****l_953 = &l_798;
                if ((l_943 , (0xF43A23A997385572LL == (safe_lshift_func_int8_t_s_s(((-4L) | ((**g_750) , (((((p_20.f2 != 0L) > (safe_div_func_int32_t_s_s((p_20.f1 != 0x1029L), (*l_908)))) != p_21) , 7UL) < (**g_786)))), p_20.f0)))))
                { 
                    return p_18;
                }
                else
                { 
                    uint16_t *** const * const l_950 = &g_532;
                    int32_t l_956 = 0x9A09DC05L;
                    int32_t l_957 = 0L;
                    l_957 |= (safe_rshift_func_int8_t_s_u((l_859 < ((l_950 == l_950) > ((***g_532) |= p_20.f1))), (((((-1L) & ((-10L) >= (l_953 == g_954[0][6]))) , (-10L)) <= l_956) | p_20.f2)));
                    return p_18;
                }
            }
        }
        l_761.f1 |= (*g_254);
        (*l_958) = (void*)0;
        for (l_862 = 0; (l_862 <= 0); l_862 += 1)
        { 
            return l_959;
        }
        (*l_962) = ((safe_add_func_uint16_t_u_u(p_20.f1, ((*l_958) == (*l_958)))) < g_702);
    }
    if (((((*l_818) = g_886[1][1]) >= (l_963 >= (((void*)0 != &p_18) > (safe_sub_func_int64_t_s_s((((((p_20 = ((safe_sub_func_int64_t_s_s((~(((!(248UL ^ (p_18.f0 == ((void*)0 != &l_761)))) , g_89[1][2]) | p_20.f3)), 0x74653C058DABE49FLL)) , p_20)) , l_740) >= p_21) < l_970[0]) || 0x6B02L), g_62))))) > p_17))
    { 
        (*g_359) = p_18;
    }
    else
    { 
        return l_959;
    }
    return l_959;
}



static uint32_t  func_22(const int64_t  p_23, uint32_t  p_24, int64_t  p_25, int32_t * p_26)
{ 
    struct S0 ***l_418 = (void*)0;
    struct S0 ***l_420 = (void*)0;
    struct S0 ****l_419 = &l_420;
    uint8_t *l_428 = &g_89[1][2];
    int64_t l_431 = 0x4068643F58E4F5F4LL;
    uint32_t *l_432 = &g_59;
    int32_t *l_433 = &g_42[4];
    int32_t l_434 = 0xA14BD106L;
    int8_t *l_443 = &g_185;
    int32_t l_495 = 0x434E0ADDL;
    int32_t l_498 = (-1L);
    int32_t l_502 = (-6L);
    int32_t l_503 = 0x3D3106C5L;
    int32_t l_505 = 0L;
    int32_t l_507 = 0x9CEF47A3L;
    int32_t l_508 = 1L;
    int32_t l_509 = (-3L);
    int32_t l_512 = 1L;
    int32_t l_513 = 0x2772F5DBL;
    int32_t l_514 = 0L;
    int32_t l_515 = 0x0B12A7A5L;
    int32_t l_516[5][6] = {{0x7973B608L,0xCEB0AF39L,3L,0xCEB0AF39L,0x7973B608L,0x7973B608L},{0L,0xCEB0AF39L,0xCEB0AF39L,0L,0x79F88768L,0L},{0L,0x79F88768L,0L,0xCEB0AF39L,0xCEB0AF39L,0L},{0x7973B608L,0x7973B608L,0xCEB0AF39L,3L,0xCEB0AF39L,0x7973B608L},{0xCEB0AF39L,0x79F88768L,3L,3L,0x79F88768L,0xCEB0AF39L}};
    uint16_t ***l_531 = (void*)0;
    int64_t l_559 = 7L;
    int64_t l_560[7];
    int64_t l_563 = 0xBF6F475C936784AALL;
    uint16_t l_564[3][6] = {{0x6F3DL,0x6F3DL,65532UL,65532UL,0x6F3DL,0x6F3DL},{0x6F3DL,65532UL,65532UL,0x6F3DL,0x6F3DL,65532UL},{0x6F3DL,0x6F3DL,65532UL,65532UL,0x6F3DL,0x6F3DL}};
    int16_t *l_581 = &g_166;
    union U1 l_616 = {0xC709L};
    int32_t l_618[6][3] = {{0x1007DE2FL,(-1L),(-1L)},{4L,0x35FBADEBL,4L},{0x1007DE2FL,0x1007DE2FL,(-1L)},{(-1L),0x35FBADEBL,(-1L)},{0x1007DE2FL,(-1L),(-1L)},{4L,0x35FBADEBL,4L}};
    uint64_t *l_642 = (void*)0;
    uint32_t l_709 = 18446744073709551615UL;
    int16_t l_718 = 0L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_560[i] = 1L;
    for (g_166 = 0; (g_166 <= 3); g_166++)
    { 
        return g_89[1][2];
    }
    l_434 &= ((*l_433) = ((l_418 != ((*l_419) = &g_358[0][2])) || ((safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(0x604F40DD74B43AA4LL, ((((*l_432) = (((*l_428) |= 0xBEL) > (safe_add_func_uint32_t_u_u(l_431, ((((((-7L) > g_158[0]) , 0xFA10L) && 0xE050L) , p_24) , 0x26A87FDBL))))) > l_431) , l_431))), p_23)), 4)) , (-4L)) || 4294967292UL))) <= p_25)));
    return g_332.f1;
}



static const int8_t  func_33(uint16_t  p_34, uint32_t  p_35)
{ 
    struct S0 *l_75 = &g_49;
    struct S0 **l_74 = &l_75;
    struct S0 ***l_73[4][5] = {{&l_74,(void*)0,(void*)0,&l_74,&l_74},{&l_74,(void*)0,(void*)0,&l_74,&l_74},{&l_74,(void*)0,(void*)0,&l_74,&l_74},{&l_74,(void*)0,(void*)0,&l_74,&l_74}};
    int32_t l_85 = 1L;
    uint16_t l_86 = 0x3AB5L;
    uint32_t *l_87 = &g_59;
    uint8_t *l_88[1];
    int32_t l_90 = 0x8387B67AL;
    int32_t *l_91 = &g_62;
    uint32_t l_101[5][3] = {{4294967295UL,4294967287UL,4294967295UL},{4294967295UL,0UL,4294967287UL},{0UL,4294967295UL,4294967295UL},{4294967287UL,4294967295UL,0x27841B20L},{0x06C0CD1CL,0UL,0x41B8E2A6L}};
    int32_t l_222[3][2][1] = {{{0xD6759D5BL},{3L}},{{3L},{0xD6759D5BL}},{{3L},{3L}}};
    uint32_t *l_234 = &l_101[1][1];
    uint32_t l_393 = 0xC2C94C3DL;
    int32_t l_412 = 0x6B8699B6L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_88[i] = &g_89[1][2];
    (*l_91) ^= (safe_rshift_func_int16_t_s_s((!(p_35 > (l_85 = (((((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((p_35 | ((((((+p_34) ^ ((void*)0 == l_73[0][2])) , (l_90 &= (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(0xF0L, 1)), (((((*l_87) = ((safe_lshift_func_int16_t_s_u(((((+(p_34 ^ l_85)) <= 0x9947D9BAL) != l_86) == g_41), p_34)) != g_43)) ^ l_85) , (void*)0) == (*l_74)))), g_42[2])))) <= l_85) , g_2) <= 4UL)), g_49.f0)), p_35)) != l_86) | l_85) , 0x62155B98L) , g_61)))), 15));
    (*l_75) = g_49;
    (*l_91) = (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(p_34, 1)), 6))));
    if (((*l_91) = 3L))
    { 
        return g_89[1][4];
    }
    else
    { 
        struct S0 l_102[7] = {{-3039},{-6215},{-3039},{-3039},{-6215},{-3039},{-3039}};
        uint16_t l_107[4][7][1] = {{{0x4BF1L},{65527UL},{1UL},{65527UL},{0x4BF1L},{0xF990L},{0x4BF1L}},{{65527UL},{1UL},{65527UL},{0x4BF1L},{0xF990L},{0x4BF1L},{65527UL}},{{1UL},{65527UL},{0x4BF1L},{0xF990L},{0x4BF1L},{65527UL},{1UL}},{{65527UL},{0x4BF1L},{0xF990L},{0x4BF1L},{65527UL},{1UL},{65527UL}}};
        int32_t *l_162 = &g_42[4];
        int16_t l_210 = 0x49CEL;
        int32_t l_217[3][5] = {{0x6AD02176L,0x6AD02176L,0x6AD02176L,0x6AD02176L,0x6AD02176L},{3L,0x0FB132EDL,3L,0x0FB132EDL,3L},{0x6AD02176L,0x6AD02176L,0x6AD02176L,0x6AD02176L,0x6AD02176L}};
        int64_t l_223 = 0x83043B709F690D16LL;
        uint16_t l_244 = 0x4344L;
        uint8_t *l_267 = &g_89[1][4];
        const union U2 l_295 = {0xDC0C9EC6936C785ELL};
        uint32_t *l_368 = &g_332.f2;
        struct S0 ****l_399[1];
        struct S0 ***l_408 = &l_74;
        int32_t *l_410 = (void*)0;
        int32_t *l_411[6][2][5] = {{{(void*)0,&l_85,&l_217[1][3],(void*)0,&l_222[0][1][0]},{&l_90,&g_2,(void*)0,&l_217[0][0],&l_217[0][0]}},{{&l_217[1][3],&g_41,&l_217[1][3],&l_222[0][1][0],(void*)0},{&l_90,&g_2,&l_85,&l_217[0][0],&l_217[1][4]}},{{(void*)0,&g_41,&g_42[2],(void*)0,(void*)0},{&l_85,&g_2,&l_85,&l_217[1][4],&l_217[0][0]}},{{(void*)0,&l_85,&l_217[1][3],(void*)0,&l_222[0][1][0]},{&l_90,&g_2,(void*)0,&l_217[0][0],&l_217[0][0]}},{{&l_217[1][3],&g_41,&l_217[1][3],&l_222[0][1][0],(void*)0},{&l_90,&g_2,&l_85,&l_217[0][0],&l_217[1][4]}},{{(void*)0,&g_41,&g_42[2],(void*)0,(void*)0},{&l_85,&g_2,&l_85,&l_217[1][4],&l_217[0][0]}}};
        uint8_t l_413 = 0x9BL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_399[i] = (void*)0;
        for (p_35 = (-30); (p_35 <= 47); p_35 = safe_add_func_int16_t_s_s(p_35, 4))
        { 
            int32_t **l_108 = &l_91;
            int32_t *l_110 = &g_62;
            int32_t **l_109 = &l_110;
            int32_t *l_112 = (void*)0;
            int32_t **l_111 = &l_112;
            (*l_91) |= ((l_101[1][1] > (((*l_87) = (l_102[4] , (18446744073709551612UL != 1UL))) & (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((((((void*)0 != &g_61) <= p_35) != g_41) > g_43), l_107[3][2][0])) >= 0x6B6C30C2L), 0UL)))) < g_89[1][2]);
            (*l_111) = ((*l_109) = ((*l_108) = &g_42[4]));
        }
        for (g_41 = 0; (g_41 >= 11); g_41 = safe_add_func_uint64_t_u_u(g_41, 9))
        { 
            int64_t l_119 = (-1L);
            int8_t l_128 = 0x03L;
            int32_t *l_142[7][4] = {{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0},{&g_41,(void*)0,&g_41,(void*)0}};
            int32_t **l_143 = &l_91;
            int32_t l_191 = 0x6EA0D350L;
            struct S0 ***l_193 = &l_74;
            uint32_t l_228 = 0UL;
            int i, j;
        }
        if (((void*)0 == l_234))
        { 
            int32_t *l_237 = &l_217[0][0];
            int32_t *l_238 = &l_217[1][4];
            int32_t *l_239 = (void*)0;
            int32_t *l_240 = &g_41;
            int32_t *l_241 = &g_41;
            int32_t *l_242[6][2];
            int32_t l_243 = (-3L);
            const uint8_t l_258 = 255UL;
            uint8_t l_284 = 6UL;
            uint64_t l_289 = 1UL;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_242[i][j] = &g_41;
            }
            for (g_185 = 26; (g_185 > 1); g_185--)
            { 
                return p_35;
            }
            ++l_244;
            (*l_91) = (safe_rshift_func_int8_t_s_s((l_102[4] , (*l_162)), 5));
            for (g_41 = 20; (g_41 != (-22)); g_41 = safe_sub_func_int8_t_s_s(g_41, 2))
            { 
                union U2 l_251 = {0xC279BA28D29272B4LL};
                int32_t *l_252 = &g_43;
                if ((l_251 , ((void*)0 == &g_89[4][1])))
                { 
                    int32_t **l_253[4] = {&l_242[1][1],&l_242[1][1],&l_242[1][1],&l_242[1][1]};
                    int i;
                    l_91 = l_252;
                    if (g_41)
                        break;
                    g_254 = l_252;
                    g_254 = &g_2;
                }
                else
                { 
                    int32_t **l_255 = &l_91;
                    const int32_t *l_256[3];
                    const int32_t **l_257 = &l_256[1];
                    uint16_t *l_276 = &l_244;
                    uint16_t *l_279 = &l_107[3][2][0];
                    uint16_t *l_282[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_256[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_282[i] = &l_86;
                    (*l_255) = &g_2;
                    (*l_257) = l_256[2];
                    (*l_162) &= l_258;
                    (*l_257) = ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((&g_89[1][2] != l_267), (*l_91))), 12)) >= g_2) | ((safe_lshift_func_uint16_t_u_s(0x9968L, ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s(((*l_279) = (--(*l_276))), 7)) | (((*l_234) = ((safe_rshift_func_uint16_t_u_s((g_168 = (p_35 >= 0L)), g_2)) , g_59)) , 0x39FF2AD46AB405F7LL)) || 0x8B8579ABDAC233E8LL), g_185)), g_158[0])) ^ g_283[1][1]))) & (-1L))) == p_34), 0x9AF9L)), 6)) , (void*)0);
                    if ((*g_254))
                        continue;
                }
            }
            for (g_61 = 0; (g_61 <= 0); g_61 += 1)
            { 
                int32_t l_287 = 0x6F70D774L;
                int32_t l_288 = 0xB5751DC0L;
                l_284--;
                l_289++;
                for (g_59 = 0; (g_59 <= 2); g_59 += 1)
                { 
                    return p_35;
                }
            }
        }
        else
        { 
            const uint32_t * const l_314 = &l_101[1][1];
            int64_t *l_320[7][6] = {{&g_141,&l_223,&l_223,&g_141,&g_141,&l_223},{&g_141,&g_141,&g_141,&l_223,&g_141,&l_223},{&l_223,&g_141,&l_223,&l_223,&g_141,&g_141},{(void*)0,&l_223,&l_223,(void*)0,&g_141,&l_223},{&l_223,(void*)0,&g_141,(void*)0,&l_223,&l_223},{(void*)0,&l_223,&l_223,&l_223,&l_223,(void*)0},{&l_223,(void*)0,&g_141,&l_223,&g_141,(void*)0}};
            int64_t **l_319 = &l_320[1][0];
            int32_t l_338[2][7] = {{3L,(-1L),5L,7L,7L,5L,(-1L)},{3L,(-1L),5L,7L,7L,5L,(-1L)}};
            int16_t *l_365 = &l_210;
            uint32_t *l_367 = &g_59;
            int32_t ***l_405 = &g_299;
            int i, j;
            (*l_162) = (p_34 && 0x4DL);
            (*l_162) &= (safe_mod_func_int64_t_s_s(0x3332FBC19604CEFALL, (~(l_295 , ((void*)0 == &g_59)))));
            (*l_162) = (safe_add_func_int32_t_s_s(((g_298 == (void*)0) , ((void*)0 != &l_217[0][0])), p_35));
            if ((safe_div_func_uint8_t_u_u(g_61, (safe_add_func_int8_t_s_s(5L, p_34)))))
            { 
                uint16_t *l_318[4][1][4] = {{{&l_107[1][4][0],&l_244,&g_168,&l_244}},{{&l_244,&g_168,&g_168,&g_168}},{{&l_107[1][4][0],&l_107[1][4][0],&l_244,&g_168}},{{&l_244,&g_168,&l_244,&l_244}}};
                uint16_t **l_317 = &l_318[2][0][0];
                int32_t l_335 = 0x7BD52007L;
                uint16_t l_337[6] = {8UL,8UL,0x4B04L,8UL,8UL,0x4B04L};
                int32_t *l_340 = &g_43;
                int i, j, k;
                if (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_89[1][2] ^ ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(0x7EL, ((safe_sub_func_int32_t_s_s(((void*)0 != l_314), (safe_add_func_int32_t_s_s((((*l_317) = &p_34) != &l_107[3][2][0]), ((*l_91) &= 0x8014B892L))))) == g_283[0][0]))), p_34)) <= p_34)) || p_35), p_35)), g_168)) >= 65529UL))
                { 
                    int64_t ***l_321 = &l_319;
                    int8_t *l_336 = &g_185;
                    int32_t *l_339 = &g_41;
lbl_341:
                    (*l_321) = l_319;
                    (*l_339) |= (safe_add_func_int32_t_s_s(((*g_254) = (safe_sub_func_uint16_t_u_u(g_283[1][0], g_141))), ((p_35 , (safe_lshift_func_int8_t_s_u(((l_338[0][5] = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_61, ((g_332 , ((*l_336) ^= (safe_add_func_int32_t_s_s(p_35, (l_335 < (-1L)))))) > (*l_162)))), l_337[5]))) != (-1L)), 5))) < p_34)));
                    l_340 = &l_335;
                    if (g_332.f2)
                        goto lbl_341;
                    (*l_340) &= (((*l_339) > ((*l_336) = (safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((((safe_mod_func_int16_t_s_s(0x9036L, (safe_sub_func_int32_t_s_s(((((((safe_rshift_func_uint16_t_u_s(6UL, ((safe_sub_func_uint16_t_u_u(((l_338[1][4] = ((*l_267) |= (((((*l_162) = (safe_add_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(((void*)0 == g_358[0][2]), (safe_mul_func_uint16_t_u_u((+(g_332.f0 != ((&g_166 == l_365) > p_35))), (-1L))))) ^ p_34), g_2))) , p_34) > 0xCDL) ^ l_338[1][2]))) != g_332.f3), 0x986EL)) >= g_41))) == g_2) , 18446744073709551615UL) , (*g_254)) | (*l_339)) & p_35), p_34)))) != 8UL) , (*l_162)) != g_59), 0x512561FEL)), g_158[1])))) , p_34);
                }
                else
                { 
                    uint32_t l_366[6];
                    struct S0 ** const l_382[2][2][3] = {{{(void*)0,&g_359,(void*)0},{&l_75,&l_75,&l_75}},{{(void*)0,&g_359,(void*)0},{&l_75,&l_75,&l_75}}};
                    int16_t *l_383[3];
                    int8_t *l_384 = &g_185;
                    int32_t *l_385 = &l_338[0][5];
                    int32_t *l_386 = &l_217[0][0];
                    int32_t *l_387 = &l_217[1][3];
                    int32_t *l_388 = &l_222[0][1][0];
                    int32_t *l_389 = &l_217[0][2];
                    int32_t *l_390 = &l_217[0][0];
                    int32_t *l_391 = &l_222[0][1][0];
                    int32_t *l_392[5][1];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_366[i] = 1UL;
                    for (i = 0; i < 3; i++)
                        l_383[i] = &g_166;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_392[i][j] = &l_217[0][0];
                    }
                    (*l_340) |= l_366[3];
                    (*g_254) &= (((l_368 = l_367) == &g_59) && ((safe_rshift_func_int8_t_s_u(((*l_384) = ((safe_add_func_int32_t_s_s(8L, (((++(**l_317)) || (safe_sub_func_int8_t_s_s(((*l_162) = ((safe_sub_func_uint64_t_u_u(((((((*l_365) ^= (*l_162)) != ((*l_340) = ((safe_rshift_func_uint8_t_u_s((+g_283[0][0]), ((l_382[1][0][2] != (void*)0) > l_338[0][5]))) , g_61))) > 0xD06EDF1CL) <= (*l_162)) | p_35), p_35)) , 0x78L)), p_35))) ^ 7UL))) , p_35)), 6)) > 4UL));
                    ++l_393;
                    return p_35;
                }
                for (g_332.f0 = 14; (g_332.f0 <= 21); ++g_332.f0)
                { 
                    int32_t **l_398 = &l_340;
                    (*l_398) = &l_222[0][1][0];
                    g_400 = l_399[0];
                    (*l_91) = (*l_162);
                    return p_35;
                }
                l_102[4].f0 |= ((*l_340) <= (*l_91));
            }
            else
            { 
                int32_t l_409 = 0xDB7DDD75L;
                l_409 &= (safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((l_405 == (void*)0) ^ (safe_mul_func_int16_t_s_s(((*g_254) < (p_34 , p_35)), ((void*)0 == l_408)))), 18446744073709551609UL)), p_35));
            }
        }
        ++l_413;
    }
    return p_35;
}



static int32_t  func_36(int32_t * p_37, int32_t * p_38)
{ 
    uint64_t l_40[2];
    struct S0 l_44 = {312};
    struct S0 *l_51[4][2] = {{&g_49,&l_44},{&g_49,&l_44},{&g_49,&l_44},{&g_49,&l_44}};
    struct S0 **l_50 = &l_51[3][0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_40[i] = 0x6CA0CEC51938D10FLL;
    for (g_41 = 0; (g_41 <= 1); g_41 += 1)
    { 
        struct S0 l_47 = {137};
        const struct S0 l_48[6][1] = {{{8098}},{{-6938}},{{8098}},{{-3284}},{{8098}},{{8098}}};
        const int32_t *l_57[7][3] = {{&g_42[4],&g_42[4],&g_42[4]},{(void*)0,(void*)0,(void*)0},{&g_42[4],&g_42[3],&g_42[2]},{(void*)0,&g_2,(void*)0},{&g_42[4],&g_42[4],&g_42[2]},{(void*)0,(void*)0,(void*)0},{&g_2,&g_42[4],&g_42[4]}};
        const int32_t **l_56 = &l_57[1][0];
        int i, j;
        for (g_42[4] = 0; (g_42[4] <= 1); g_42[4] += 1)
        { 
            const int32_t *l_54 = (void*)0;
            const int32_t **l_53 = &l_54;
            int i;
            for (g_43 = 0; (g_43 <= 1); g_43 += 1)
            { 
                struct S0 *l_45 = (void*)0;
                struct S0 *l_46[4][3] = {{&l_44,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&l_44,&l_44,(void*)0},{&l_44,&l_44,&l_44}};
                struct S0 ***l_52 = &l_50;
                const int32_t ***l_55 = &l_53;
                int i, j;
                l_47 = l_44;
                g_49 = l_48[2][0];
                (*l_52) = l_50;
                l_56 = ((*l_55) = l_53);
            }
            return l_40[g_41];
        }
    }
    return l_44.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_89[i][j], "g_89[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);

    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_283[i][j], "g_283[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f2, "g_332.f2", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_550.f0, "g_550.f0", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_621[i], "g_621[i]", print_hash_value);

    }
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_886[i][j], "g_886[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_915[i], "g_915[i]", print_hash_value);

    }
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1194[i], "g_1194[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1326[i], "g_1326[i]", print_hash_value);

    }
    transparent_crc(g_1344, "g_1344", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1897[i][j][k], "g_1897[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1902, "g_1902", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_2105.f0, "g_2105.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2188[i].f0, "g_2188[i].f0", print_hash_value);

    }
    transparent_crc(g_2300, "g_2300", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2329[i], "g_2329[i]", print_hash_value);

    }
    transparent_crc(g_2330, "g_2330", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2331[i][j], "g_2331[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2339[i], "g_2339[i]", print_hash_value);

    }
    transparent_crc(g_2440, "g_2440", print_hash_value);
    transparent_crc(g_2544, "g_2544", print_hash_value);
    transparent_crc(g_2548, "g_2548", print_hash_value);
    transparent_crc(g_2607, "g_2607", print_hash_value);
    transparent_crc(g_2708.f0, "g_2708.f0", print_hash_value);
    transparent_crc(g_2708.f1, "g_2708.f1", print_hash_value);
    transparent_crc(g_2708.f2, "g_2708.f2", print_hash_value);
    transparent_crc(g_2708.f3, "g_2708.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
