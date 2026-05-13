// SPDX-License-Identifier: MIT
// cctest_csmith_7a9c3c73.c --- cctest case csmith_7a9c3c73 (csmith seed 2057059443)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9018626b */

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

// Options:   -s 2057059443 -o /tmp/csmith_gen_0w2q352z/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_14 = 0x292C5EB2L;
static int16_t g_57 = (-3L);
static uint64_t g_61[2][1] = {{0x9233419813DA773CLL},{0x9233419813DA773CLL}};
static int32_t g_62 = (-6L);
static int16_t g_69[3][1] = {{0x6F70L},{0x6F70L},{0x6F70L}};
static int16_t g_77 = (-4L);
static int32_t g_78 = 0x501CA497L;
static int32_t g_85 = 0x12EB5757L;
static int32_t g_87 = 0x0957FE1BL;
static uint64_t g_89[3][2] = {{0xFB111D03F4AE4FB5LL,0xFB111D03F4AE4FB5LL},{0xFB111D03F4AE4FB5LL,0xFB111D03F4AE4FB5LL},{0xFB111D03F4AE4FB5LL,0xFB111D03F4AE4FB5LL}};
static int32_t g_108 = 0x9A4BB29DL;
static uint64_t g_109 = 0x1864D21BD337155FLL;
static uint32_t g_143[2][3] = {{4294967293UL,0x98744AF5L,0x98744AF5L},{4294967293UL,0x98744AF5L,0x98744AF5L}};



static int64_t  func_1(void);
static int32_t  func_2(uint8_t  p_3, uint32_t  p_4, int16_t  p_5);
static const int64_t  func_7(int16_t  p_8, int64_t  p_9, int32_t  p_10, int32_t  p_11, int32_t  p_12);




static int64_t  func_1(void)
{ 
    uint32_t l_13 = 0x7161AB6EL;
    int64_t l_17 = 0x80BFB3A4DF6F9781LL;
    uint32_t l_18[4][3] = {{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0xA21E1D82L,0xA21E1D82L,0xA21E1D82L},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0xA21E1D82L,0xA21E1D82L,0xA21E1D82L}};
    int32_t l_76 = 0xAF164004L;
    uint8_t l_93 = 0x93L;
    int16_t l_98 = (-8L);
    int32_t l_141 = (-1L);
    int i, j;
    if (func_2(((g_61[0][0] = (~(func_7(l_13, (((g_14 != (safe_add_func_uint32_t_u_u(1UL, l_13))) ^ l_13) || g_14), l_17, l_18[2][2], g_14) , 0x80B7F2DBL))) , 0x40L), g_14, l_18[2][2]))
    { 
        uint32_t l_75 = 0xE8DF01DDL;
        g_69[0][0] = (+(g_62 > g_62));
        for (l_17 = 0; (l_17 >= 11); l_17++)
        { 
            const uint8_t l_72 = 7UL;
            l_76 ^= (l_13 == (l_72 || (safe_lshift_func_int16_t_s_u(l_75, g_69[0][0]))));
        }
    }
    else
    { 
        uint32_t l_83[1][1];
        int32_t l_84 = 0xB667A95FL;
        int16_t l_105 = 0x8264L;
        int32_t l_106[1];
        int8_t l_127 = (-6L);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_83[i][j] = 1UL;
        }
        for (i = 0; i < 1; i++)
            l_106[i] = 0x7919BB5CL;
        for (g_14 = 0; (g_14 <= 0); g_14 += 1)
        { 
            int32_t l_88 = 0x4216A80DL;
            for (l_17 = 0; (l_17 <= 2); l_17 += 1)
            { 
                int i, j;
                return l_18[(l_17 + 1)][l_17];
            }
            g_77 = (-8L);
            for (l_13 = 0; (l_13 <= 2); l_13 += 1)
            { 
                int32_t l_86 = 7L;
                int i, j;
                g_78 = (-3L);
                l_84 |= (l_83[0][0] = (safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(l_18[(g_14 + 2)][(g_14 + 1)], 1L)), 12)));
                --g_89[1][1];
            }
            for (l_88 = 0; (l_88 >= 0); l_88 -= 1)
            { 
                int32_t l_92 = 0x94886057L;
                if (l_92)
                    break;
            }
        }
        l_93--;
        if ((l_13 || ((g_87 = (l_93 & ((safe_lshift_func_int16_t_s_s((l_76 = (l_98 < l_13)), 15)) , g_62))) >= g_77)))
        { 
            uint32_t l_121 = 0x185E692DL;
            uint16_t l_122[3];
            int i;
            for (i = 0; i < 3; i++)
                l_122[i] = 6UL;
            for (l_93 = 0; (l_93 != 18); l_93 = safe_add_func_int32_t_s_s(l_93, 9))
            { 
                g_78 |= (l_106[0] = (safe_mul_func_int8_t_s_s((((safe_mod_func_int64_t_s_s(g_14, l_105)) == (l_84 = l_76)) , l_93), g_61[0][0])));
            }
            for (g_85 = 0; (g_85 <= 0); g_85 += 1)
            { 
                int32_t l_107[2];
                int32_t l_123 = 0x82F6EF7CL;
                int i;
                for (i = 0; i < 2; i++)
                    l_107[i] = 0x31492E8FL;
                g_109--;
                l_123 ^= (((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((g_109 |= (+l_106[g_85])) < (((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((0x5A1B73F452B54726LL == ((0x6B20L != l_83[0][0]) != 0L)) > 5UL), g_62)) | l_121), (-1L))) >= g_14) >= g_62)) , l_13) & l_106[0]), l_107[1])), g_78)) < l_106[g_85]) , l_122[2]) > l_106[0]) <= 1L);
            }
        }
        else
        { 
            int32_t l_139 = 0x88E96A69L;
            uint32_t l_140[2];
            uint64_t l_148 = 2UL;
            uint32_t l_149 = 4UL;
            uint16_t l_158 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_140[i] = 0xA617A08BL;
            if ((((g_108 == (safe_unary_minus_func_uint16_t_u(g_69[0][0]))) , (safe_mul_func_uint8_t_u_u(l_127, 0x86L))) & g_87))
            { 
                uint8_t l_128[4][2] = {{0UL,0x8AL},{0UL,0x8AL},{0UL,0x8AL},{0UL,0x8AL}};
                int i, j;
                g_78 &= (((l_128[3][1] ^ (g_109 = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((-5L), 4)), ((l_76 = l_139) & 0x77L))) >= g_69[1][0]) && l_105), 0x8FBBB315L)) && g_109), l_140[1])), l_141)))) ^ l_84) || g_61[0][0]);
            }
            else
            { 
                int16_t l_142[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_142[i] = 0x5731L;
                l_139 |= (((((--g_143[1][0]) , ((3L ^ 0UL) , (safe_add_func_int8_t_s_s((l_148 == g_62), 0L)))) , l_149) , g_85) < l_105);
            }
            l_141 = (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((((l_83[0][0] , (safe_mul_func_int16_t_s_s(g_143[1][0], ((((l_158 , (-10L)) > 0UL) && g_85) < 4294967295UL)))) <= g_62) > 0x6BL), g_62)), l_140[0])) , g_69[0][0]), g_109));
            if ((+0xADL))
            { 
                g_87 &= (((g_109 && g_143[1][0]) == (l_139 |= ((l_106[0] | 0xA507D193L) > g_77))) && 1L);
                l_106[0] = 0x7893A053L;
            }
            else
            { 
                uint8_t l_160[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_160[i] = 0xF4L;
                g_78 = (g_87 = (l_160[0] = g_14));
                g_87 = (safe_mul_func_int16_t_s_s(g_78, g_89[1][1]));
            }
        }
    }
    return g_85;
}



static int32_t  func_2(uint8_t  p_3, uint32_t  p_4, int16_t  p_5)
{ 
    uint8_t l_65 = 0xC5L;
    int32_t l_66[1][1];
    int32_t l_67 = (-5L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_66[i][j] = (-1L);
    }
    g_62 = p_5;
    l_67 = (l_66[0][0] = ((((p_5 < ((((l_65 = (safe_add_func_int8_t_s_s(g_61[1][0], p_5))) <= 0xCC685A4BL) | g_62) >= l_66[0][0])) && g_57) == l_66[0][0]) ^ g_61[0][0]));
    return l_66[0][0];
}



static const int64_t  func_7(int16_t  p_8, int64_t  p_9, int32_t  p_10, int32_t  p_11, int32_t  p_12)
{ 
    const uint32_t l_33 = 0x888AD88CL;
    uint16_t l_34 = 65533UL;
    int8_t l_35[2][3];
    int32_t l_50[2];
    uint64_t l_60 = 0x48F3BEA0A54AE8BCLL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_35[i][j] = 0x17L;
    }
    for (i = 0; i < 2; i++)
        l_50[i] = 6L;
    for (p_9 = 0; (p_9 != 6); p_9 = safe_add_func_uint32_t_u_u(p_9, 2))
    { 
        int16_t l_30 = 1L;
        int16_t l_31 = 0x622BL;
        int32_t l_32 = 0x9390DFC1L;
        l_34 |= (((-1L) && p_8) ^ (safe_mod_func_int64_t_s_s((((safe_add_func_int8_t_s_s((((((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((+(p_10 , l_30)), g_14)), g_14)) <= l_31) != p_9) == l_32) & l_32), p_10)) , g_14) ^ p_9), l_33)));
        for (l_34 = 0; (l_34 <= 1); l_34 += 1)
        { 
            int32_t l_49 = (-1L);
            int i, j;
            if (l_35[l_34][(l_34 + 1)])
                break;
            if (((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_14 > l_35[l_34][(l_34 + 1)]) == (((safe_mod_func_uint8_t_u_u((l_33 <= g_14), p_11)) >= p_11) , l_32)), 65531UL)), 4)) | g_14))
            { 
                const int64_t l_46 = 0xE1FE01AF02C19944LL;
                p_12 |= (((((safe_lshift_func_uint8_t_u_u((((((l_50[0] = ((safe_div_func_uint16_t_u_u(l_46, ((((l_49 &= (((safe_sub_func_int64_t_s_s((g_14 ^ (65535UL & l_35[1][1])), g_14)) != p_11) ^ g_14)) ^ 0xAB2DD2C990B51ECDLL) , g_14) & l_31))) < (-2L))) , l_46) | 0x0D287709C18003DBLL) & 0xA91AL) , g_14), l_35[l_34][(l_34 + 1)])) & g_14) <= 2UL) | p_9) | 0x1464E941L);
                p_12 = 0x088C4B50L;
            }
            else
            { 
                return g_14;
            }
        }
        for (p_11 = 0; (p_11 <= 1); p_11 += 1)
        { 
            uint8_t l_53[2][3] = {{2UL,2UL,1UL},{2UL,2UL,1UL}};
            int i, j;
            for (l_34 = 0; (l_34 <= 1); l_34 += 1)
            { 
                int32_t l_56 = (-1L);
                int i, j;
                l_60 ^= (((l_35[l_34][l_34] = (safe_mod_func_int16_t_s_s(((g_57 |= (l_35[l_34][(l_34 + 1)] , ((l_56 |= (--l_53[0][0])) != l_50[l_34]))) >= ((safe_mul_func_int8_t_s_s((p_12 , p_10), p_11)) < l_50[1])), l_50[0]))) == g_14) > g_14);
                l_50[0] ^= (l_35[0][2] ^ p_10);
            }
        }
    }
    return p_10;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_89[i][j], "g_89[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
