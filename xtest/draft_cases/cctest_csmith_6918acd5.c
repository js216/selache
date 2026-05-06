// SPDX-License-Identifier: MIT
// cctest_csmith_6918acd5.c --- cctest case csmith_6918acd5 (csmith seed 1763224789)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3a350a6b */

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

// Options:   -s 1763224789 -o /tmp/csmith_gen_k8fpc_kp/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 8L;
static int32_t g_5 = 0x730F94F3L;
static uint8_t g_59 = 255UL;
static int8_t g_67 = 0xADL;
static uint32_t g_97[3] = {0x9DA2B617L,0x9DA2B617L,0x9DA2B617L};
static uint64_t g_109[2] = {0x13AB5F77C4363893LL,0x13AB5F77C4363893LL};
static int8_t g_118 = 0x64L;
static int32_t g_126[3] = {0x229A812DL,0x229A812DL,0x229A812DL};
static int32_t g_128 = 0x9A1771DCL;
static int32_t g_131 = 2L;
static uint32_t g_132 = 0x14A34948L;
static uint64_t g_135 = 7UL;
static uint32_t g_141 = 4294967287UL;



static uint16_t  func_1(void);
static uint64_t  func_8(const int64_t  p_9, uint32_t  p_10, uint8_t  p_11, int32_t  p_12);
static int64_t  func_13(int32_t  p_14, uint32_t  p_15, int32_t  p_16, int16_t  p_17);




static uint16_t  func_1(void)
{ 
    int16_t l_20[3];
    int32_t l_21 = 0xDA2AE7B7L;
    int i;
    for (i = 0; i < 3; i++)
        l_20[i] = 0L;
    for (g_2 = 0; (g_2 < 0); g_2 = safe_add_func_int8_t_s_s(g_2, 1))
    { 
        uint64_t l_23[2];
        int32_t l_35 = (-2L);
        int i;
        for (i = 0; i < 2; i++)
            l_23[i] = 0xC9EBF495E3B372BALL;
        for (g_5 = 14; (g_5 != (-18)); g_5 = safe_sub_func_int16_t_s_s(g_5, 4))
        { 
            int16_t l_22 = 0xCC48L;
            int32_t l_119 = (-6L);
            int32_t l_129 = 1L;
            l_119 = ((func_8(func_13((safe_div_func_int16_t_s_s(l_20[0], g_5)), (++l_23[1]), (((safe_mod_func_int32_t_s_s(((!(safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((l_22 > g_2) , g_5), 0x7223L)), 1)) & 3UL), g_5))) && 0L), 0x5DA2A0C0L)) == l_35) ^ g_5), l_22), g_5, l_22, g_5) | 0xCD606170AF284102LL) == g_5);
            g_126[1] ^= ((safe_sub_func_int64_t_s_s(l_119, (safe_add_func_int16_t_s_s(0L, (safe_lshift_func_uint8_t_u_s((g_5 , 0x0DL), l_23[1])))))) == g_118);
            if (((l_35 = l_22) != l_20[2]))
            { 
                uint64_t l_127 = 8UL;
                g_128 |= l_127;
                l_129 = 0x9FB1DD72L;
                return l_23[1];
            }
            else
            { 
                int32_t l_130[4] = {0x57A524CFL,0x57A524CFL,0x57A524CFL,0x57A524CFL};
                int i;
                ++g_132;
                l_21 = g_128;
                l_129 = (((((l_119 |= 0L) && l_21) != (((g_135++) > (((safe_div_func_uint64_t_u_u(((((!((g_126[1] & l_129) && (-1L))) >= g_128) < 0x452B061077F729EELL) <= g_132), l_22)) , 1UL) & 0x563FL)) , 4294967295UL)) < l_129) | l_130[0]);
            }
        }
        g_141 &= g_5;
        g_5 = (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((0xD6F9L != ((safe_rshift_func_uint8_t_u_u((g_109[1] < l_20[2]), g_128)) == l_20[2])) < 0xCDL), l_20[0])), 0xC4L)), g_97[2]));
    }
    return g_141;
}



static uint64_t  func_8(const int64_t  p_9, uint32_t  p_10, uint8_t  p_11, int32_t  p_12)
{ 
    const uint32_t l_57[1] = {0x46C20B13L};
    int16_t l_58 = 0x45D4L;
    int32_t l_68 = 0xBFFAEF17L;
    int32_t l_96 = (-1L);
    uint32_t l_105 = 4294967291UL;
    int8_t l_117[2];
    int i;
    for (i = 0; i < 2; i++)
        l_117[i] = 0xEFL;
    g_59 = ((safe_add_func_uint16_t_u_u(0xBD3DL, (((0L < (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0L, p_11)), g_5))) && l_57[0]) != l_58))) , l_57[0]);
    for (g_59 = 9; (g_59 < 52); g_59 = safe_add_func_int64_t_s_s(g_59, 8))
    { 
        int32_t l_82 = 0x25F3D189L;
        int32_t l_101 = 0x98E72CC6L;
        int64_t l_110 = (-1L);
        if (((p_11 | (l_68 |= (l_58 & (g_67 = (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((!p_12), l_58)), 8)) > g_59) < p_10))))) | 0x5726B06574F207E8LL))
        { 
            int64_t l_92 = 0L;
            if (g_67)
            { 
                uint64_t l_81[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_81[i] = 18446744073709551607UL;
                if (p_12)
                    break;
                p_12 &= ((safe_lshift_func_uint8_t_u_u((l_57[0] & (safe_lshift_func_uint16_t_u_s((l_82 = (safe_lshift_func_uint8_t_u_s((l_81[1] ^= (safe_sub_func_int16_t_s_s(g_2, ((((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_5, p_9)), g_67)) <= 1UL) || 0x7EL) != (-9L))))), 0))), 14))), p_10)) > p_9);
            }
            else
            { 
                uint16_t l_95 = 0x3489L;
                l_96 ^= (safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0x8BL, ((((safe_sub_func_uint32_t_u_u((((((((safe_div_func_int32_t_s_s(l_92, (safe_lshift_func_uint8_t_u_s(l_92, 4)))) < p_11) || l_92) & p_9) || 2L) < g_67) , l_68), g_5)) && l_82) , l_95) || 0x2EL))) == g_5), g_5)) , l_82)));
                return g_59;
            }
        }
        else
        { 
            uint64_t l_100 = 0x3D98491658D46EB9LL;
            for (l_68 = 0; (l_68 <= 2); l_68 += 1)
            { 
                int32_t l_102[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_102[i] = 0xE439E4EAL;
                l_101 |= (((safe_rshift_func_int16_t_s_s(((((0xA4001551L > (g_97[l_68] > (l_100 |= ((-2L) ^ g_59)))) ^ p_9) && p_9) | p_10), g_97[l_68])) == p_12) && l_82);
                l_102[0] ^= 0x87DEF5A7L;
            }
        }
        if ((safe_div_func_uint8_t_u_u(l_105, g_5)))
        { 
            uint8_t l_106 = 255UL;
            l_106--;
            g_109[1] = g_2;
        }
        else
        { 
            uint32_t l_116[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_116[i][j] = 0xB4A8206DL;
            }
            for (l_96 = 0; (l_96 <= 1); l_96 += 1)
            { 
                int i;
                p_12 = ((g_109[l_96] , (65535UL <= (g_109[l_96] && l_110))) || g_109[1]);
            }
            g_118 = (l_82 = (safe_mul_func_uint16_t_u_u(0x4CD5L, ((((!(safe_add_func_uint32_t_u_u(((l_116[0][1] ^ (((l_116[0][0] ^ p_10) >= 0xF8B30EBBL) || l_117[1])) | 0x8A62A9801335C4AELL), g_67))) , g_5) , g_5) , 0x1CF7L))));
        }
    }
    return l_57[0];
}



static int64_t  func_13(int32_t  p_14, uint32_t  p_15, int32_t  p_16, int16_t  p_17)
{ 
    const int32_t l_48 = 7L;
    int32_t l_49 = 4L;
    int32_t l_50[3][2] = {{0x11C25C53L,0x11C25C53L},{0x11C25C53L,0x11C25C53L},{0x11C25C53L,0x11C25C53L}};
    int i, j;
    l_50[2][1] = (safe_rshift_func_int16_t_s_s(0x1AC7L, ((safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((g_2 && (l_49 |= (safe_mod_func_int32_t_s_s(((((l_48 < 4294967295UL) == g_5) ^ p_15) , 1L), g_2)))), 0x1432L)) >= p_14), p_17)), g_2)), 3)) <= l_48)));
    return p_14;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_126[i], "g_126[i]", print_hash_value);

    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
