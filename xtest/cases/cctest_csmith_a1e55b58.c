// SPDX-License-Identifier: MIT
// cctest_csmith_a1e55b58.c --- cctest case csmith_a1e55b58 (csmith seed 2716162904)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x96b816ae */
/* @exp_ticks 0x3d09 */

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

// Options:   -s 2716162904 -o /tmp/csmith_gen_mxmarm59/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   const int32_t  f1;
   const uint64_t  f2;
   uint8_t  f3;
   const int16_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

struct S3 {
   int8_t  f0;
   const int8_t  f1;
   struct S1  f2;
};

struct S4 {
   int32_t  f0;
   struct S2  f1;
   const int64_t  f2;
   int64_t  f3;
};

struct S5 {
   uint32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int32_t  f3;
};

union U6 {
   int32_t  f0;
   uint32_t  f1;
};

union U7 {
   int8_t  f0;
   struct S5  f1;
};


static int32_t g_2 = 0x5C2DD78FL;
static int32_t g_6 = 1L;
static uint8_t g_8 = 255UL;
static int64_t g_12 = (-7L);
static struct S5 g_53 = {0xED797CFCL,18446744073709551615UL,3UL,0xCA7AF0C8L};
static int8_t g_76 = 0x1EL;
static uint64_t g_77 = 0xEF1402E7910ABA4BLL;
static int64_t g_84 = 1L;
static int64_t g_85 = (-1L);
static int8_t g_87 = 0x21L;
static uint64_t g_88 = 0xF2FD2206DCC1A10FLL;
static uint64_t g_116 = 1UL;
static struct S2 g_127 = {6L,0x3688B2ADL};
static uint32_t g_128[5] = {0x1638C063L,0x1638C063L,0x1638C063L,0x1638C063L,0x1638C063L};
static int32_t g_139 = 1L;
static int32_t g_156 = 0xD125292EL;
static int32_t g_251 = 0x5D61E199L;
static int32_t g_252 = 0x23A199CEL;
static int32_t g_254 = 1L;
static uint8_t g_290 = 0x0DL;
static int16_t g_297[5] = {0x53B7L,0x53B7L,0x53B7L,0x53B7L,0x53B7L};
static int32_t g_298[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
static uint8_t g_299 = 0UL;
static struct S1 g_313 = {-1L,1L,0x99A6343D952B0980LL,0x35L,0x2444L};
static int64_t g_314 = (-5L);
static int8_t g_315 = 0xDFL;
static int16_t g_319[3] = {0xA341L,0xA341L,0xA341L};



static struct S3  func_1(void);
static struct S2  func_17(const uint64_t  p_18);
static union U7  func_19(uint16_t  p_20, const int64_t  p_21, int8_t  p_22, int16_t  p_23);
static struct S1  func_24(const int16_t  p_25, const uint8_t  p_26);




static struct S3  func_1(void)
{ 
    uint16_t l_13[2];
    int32_t l_320 = 0x2A15CC06L;
    struct S3 l_321 = {0xB3L,0xFEL,{8L,5L,18446744073709551606UL,0xCBL,0x5E0FL}};
    int i;
    for (i = 0; i < 2; i++)
        l_13[i] = 0xC75DL;
    for (g_2 = 9; (g_2 < 2); g_2 = safe_sub_func_int32_t_s_s(g_2, 4))
    { 
        int32_t l_5[4] = {0x41AC3DC9L,0x41AC3DC9L,0x41AC3DC9L,0x41AC3DC9L};
        int16_t l_11 = 0x466AL;
        int i;
        for (g_6 = 0; (g_6 <= 3); g_6 += 1)
        { 
            int32_t l_7 = 1L;
            int i;
            g_8--;
        }
        l_13[0]--;
    }
    l_320 = (safe_unary_minus_func_uint16_t_u((g_319[2] |= (func_17((l_13[0] <= (0x9FL <= (func_19((func_24(g_6, (((((safe_sub_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s(l_13[1], 0)) == g_2) | g_8) && g_12), l_13[1])) >= l_13[0]) == l_13[1]) <= 0xA3BB1D4416DA84B5LL) & 1UL)) , g_128[0]), l_13[1], g_53.f0, l_13[1]) , l_13[1])))) , g_313.f1))));
    return l_321;
}



static struct S2  func_17(const uint64_t  p_18)
{ 
    uint32_t l_208 = 0xEC739D5CL;
    int64_t l_218 = (-8L);
    int32_t l_219 = 1L;
    int32_t l_231 = (-1L);
    int64_t l_247[2][2][4] = {{{3L,3L,2L,3L},{3L,0x5484D784363F8675LL,0x5484D784363F8675LL,3L}},{{0x5484D784363F8675LL,3L,0x5484D784363F8675LL,0x5484D784363F8675LL},{3L,3L,2L,3L}}};
    uint32_t l_250 = 0x75412C39L;
    struct S3 l_259 = {0x0DL,1L,{0x1CF0L,0x8DEA1316L,18446744073709551610UL,255UL,0L}};
    union U6 l_270 = {2L};
    int8_t l_288 = (-5L);
    struct S5 l_317[3][5] = {{{4294967289UL,0xE618443DA255B75ELL,0x5BEFB076L,0xC9240290L},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL},{4294967289UL,0xE618443DA255B75ELL,0x5BEFB076L,0xC9240290L},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL}},{{4294967289UL,0xE618443DA255B75ELL,0x5BEFB076L,0xC9240290L},{4294967289UL,0xE618443DA255B75ELL,0x5BEFB076L,0xC9240290L},{0xAE5F79DBL,0x3E37CBACDE27D56CLL,0xA4D006B9L,0xCC347884L},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL}},{{0xAE5F79DBL,0x3E37CBACDE27D56CLL,0xA4D006B9L,0xCC347884L},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL},{0xAE5F79DBL,0x3E37CBACDE27D56CLL,0xA4D006B9L,0xCC347884L},{0xAE5F79DBL,0x3E37CBACDE27D56CLL,0xA4D006B9L,0xCC347884L},{4294967289UL,0UL,4294967295UL,0x64BF8E8EL}}};
    struct S2 l_318 = {0x288D38B6L,0x4DA49FBCL};
    int i, j, k;
    ++l_208;
    if ((safe_mul_func_uint8_t_u_u(((g_88 |= (l_208 , (g_116 = (safe_add_func_int8_t_s_s((p_18 <= (-1L)), g_127.f0))))) || 0x683ED5A70149C121LL), (-10L))))
    { 
        struct S4 l_217 = {0L,{0x82D74585L,0x3A436BD0L},-1L,0xEAE226BEB426B7B2LL};
        l_219 |= (safe_rshift_func_int8_t_s_s((l_217 , (l_218 > l_217.f0)), 6));
        for (g_116 = 18; (g_116 < 12); g_116 = safe_sub_func_uint16_t_u_u(g_116, 9))
        { 
            struct S2 l_227 = {0xE9C42605L,0x821B95DFL};
            if (l_219)
                break;
            for (g_76 = 0; (g_76 >= 22); g_76 = safe_add_func_uint32_t_u_u(g_76, 1))
            { 
                uint64_t l_226 = 0x709E64E212550B3BLL;
                l_219 = (safe_lshift_func_uint16_t_u_u(65535UL, 13));
                if (l_226)
                    break;
            }
            return l_227;
        }
        g_127.f0 = g_127.f0;
    }
    else
    { 
        struct S0 l_228 = {0x4136D5DCL};
        int32_t l_242 = (-7L);
        int16_t l_253 = 0L;
        int16_t l_263[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_263[i][j] = 1L;
        }
        l_231 ^= (l_228 , (safe_div_func_uint8_t_u_u((((l_219 != ((l_228.f0 == l_228.f0) || 1UL)) > 7L) != l_228.f0), 0xB1L)));
        if ((l_219 = ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_252 = (safe_sub_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_u(((l_242 |= g_2) | (safe_mod_func_uint8_t_u_u((g_8 = (safe_rshift_func_uint16_t_u_u(p_18, 6))), l_247[0][0][0]))), (g_251 = (safe_mod_func_uint64_t_u_u(((p_18 > l_250) == 9UL), 0xE5451DF1B9022DA0LL))))) > 0x4A84L) > l_228.f0) > (-1L)), p_18))), p_18)), l_253)), p_18)) & p_18)))
        { 
            uint32_t l_262 = 0xBD6D18A2L;
            union U6 l_271 = {-5L};
            if (((g_254 | (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_242 &= ((l_259 , (((safe_mul_func_int16_t_s_s((p_18 , l_259.f2.f4), 65535UL)) >= l_262) & p_18)) ^ l_262)), l_262)), g_77)) < 0x252AE98F465C1140LL) == p_18)) == l_253))
            { 
                uint64_t l_264 = 18446744073709551615UL;
                --l_264;
            }
            else
            { 
                l_242 = (safe_sub_func_uint32_t_u_u((+(g_8 ^= ((l_271 = l_270) , g_127.f1))), g_139));
                return g_127;
            }
        }
        else
        { 
            int32_t l_276[2][2][3] = {{{(-6L),(-6L),(-6L)},{(-1L),(-1L),(-1L)}},{{(-6L),(-6L),(-6L)},{(-1L),(-1L),(-1L)}}};
            int32_t l_277 = (-10L);
            int i, j, k;
            if ((l_228 , (~(((p_18 && (!(l_276[0][1][1] = (func_24(((safe_sub_func_uint64_t_u_u((l_277 |= (g_53.f1 = (l_276[0][1][1] ^= 0x8B66DF69DBDDC878LL))), (safe_lshift_func_uint8_t_u_u(0x45L, 6)))) != 0x5BL), g_87) , 255UL)))) || l_259.f2.f2) & g_85))))
            { 
                int32_t l_289[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_289[i] = 0x62747BD2L;
                g_6 |= (+(~(-1L)));
                l_231 ^= (safe_div_func_int64_t_s_s((((((((((g_87 > (p_18 ^ ((safe_lshift_func_uint16_t_u_u((l_219 = (safe_sub_func_uint64_t_u_u(((0xB96F827CL & p_18) && 1L), g_128[0]))), 5)) != g_128[0]))) && g_85) | p_18) && 0x84FE09BBL) , g_127.f0) , g_77) & (-7L)) & 0xEFL) | 18446744073709551611UL), p_18));
                ++g_290;
            }
            else
            { 
                l_231 ^= p_18;
            }
            for (g_139 = 15; (g_139 >= 6); --g_139)
            { 
                int8_t l_295 = 0x21L;
                int32_t l_296 = 1L;
                uint64_t l_316 = 1UL;
                --g_299;
                l_219 = (1L || (((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((((((l_247[0][1][1] , ((~(safe_mul_func_uint16_t_u_u((g_314 ^= ((g_313 , ((l_231 = (l_296 = (0xD0L >= l_259.f2.f3))) || 0x382C8051A5AF9E53LL)) < 0xB62CF235L)), p_18))) , 4294967295UL)) && 0xAFB5A1B6L) , p_18) != p_18) && 65529UL) != l_276[1][1][2]), 9)) | g_313.f2), g_290)) > g_315), 0UL)) && l_316), p_18)) != 0xF4A2D3D38F9BDD79LL) , 0x980F06EDL));
            }
        }
        l_242 = p_18;
    }
    l_317[0][1] = l_317[0][1];
    return l_318;
}



static union U7  func_19(uint16_t  p_20, const int64_t  p_21, int8_t  p_22, int16_t  p_23)
{ 
    int32_t l_157 = 1L;
    int32_t l_158 = 0x3F8C49FDL;
    struct S1 l_175 = {0x3813L,1L,0xBF4D477D6962B2EDLL,9UL,0x6FAFL};
    union U7 l_207 = {-10L};
    if ((~g_127.f1))
    { 
        int32_t l_151 = 0x7C7DC251L;
        l_158 = ((0xE557L && ((safe_sub_func_int64_t_s_s((((l_157 &= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(((l_151 > (safe_add_func_int16_t_s_s((g_156 = (safe_mod_func_int64_t_s_s(l_151, 18446744073709551615UL))), (-1L)))) | p_23), p_20)), 10)), 1))) | l_158) < g_128[0]), 0xCF262FDF43112E05LL)) , g_77)) , p_21);
    }
    else
    { 
        uint64_t l_165 = 18446744073709551615UL;
        int32_t l_166 = 0x7154B7D5L;
        int32_t l_206 = 0xDA692362L;
        for (g_12 = (-9); (g_12 > (-9)); g_12 = safe_add_func_int16_t_s_s(g_12, 8))
        { 
            int32_t l_167 = (-10L);
            uint32_t l_174 = 0UL;
            g_6 ^= (l_167 |= ((safe_lshift_func_uint16_t_u_u((g_53.f3 , g_53.f1), 15)) & (l_166 = ((l_165 > p_20) != g_139))));
            if ((safe_mod_func_uint8_t_u_u(g_12, (safe_mul_func_int16_t_s_s(p_23, (l_174 = (safe_mul_func_int8_t_s_s((l_167 = (p_20 ^ ((((((l_166 && l_157) != l_165) & p_22) & g_88) , l_165) ^ p_23))), 0x42L))))))))
            { 
                if (p_20)
                    break;
            }
            else
            { 
                int64_t l_184 = 3L;
                int32_t l_185 = 1L;
                l_185 ^= (l_184 = (l_175 , (p_23 >= (safe_unary_minus_func_int32_t_s((g_2 &= (safe_lshift_func_uint16_t_u_s(((l_167 &= (safe_sub_func_int8_t_s_s(((!0UL) >= (safe_sub_func_int8_t_s_s((l_175.f3 >= 1UL), g_87))), 3L))) | p_23), l_158))))))));
                g_139 &= (+(l_167 | p_23));
                g_127.f0 ^= 0x57983243L;
            }
            for (l_167 = (-11); (l_167 > (-8)); ++l_167)
            { 
                g_6 = ((g_127.f0 ^= (p_22 == 0x1DL)) ^ g_77);
                l_158 = (safe_mul_func_int16_t_s_s(2L, (safe_lshift_func_int16_t_s_s((-9L), 7))));
                if (l_165)
                    break;
            }
        }
        l_206 = ((!(safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(g_128[0], (g_6 = p_22))) != p_23), (l_166 = 0x32L))), 6)), p_22)), g_85)), l_165))) && g_128[0]);
    }
    return l_207;
}



static struct S1  func_24(const int16_t  p_25, const uint8_t  p_26)
{ 
    struct S4 l_31 = {1L,{0x5BFEB1ECL,0xC04840C2L},0x6F7398071081B270LL,0x7D5B4499C77E2192LL};
    union U7 l_51 = {0xBDL};
    uint32_t l_74 = 0UL;
    int32_t l_82 = 4L;
    int32_t l_83 = (-5L);
    struct S5 l_120 = {4294967295UL,18446744073709551611UL,0xB30E8A79L,-1L};
    uint16_t l_138 = 6UL;
    struct S1 l_141[3][1] = {{{0x995AL,0x63A6EC57L,7UL,4UL,0x63AAL}},{{0x995AL,0x63A6EC57L,7UL,4UL,0x63AAL}},{{0x995AL,0x63A6EC57L,7UL,4UL,0x63AAL}}};
    int i, j;
    l_31.f1.f0 = (l_31 , ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((0x8824086237DDC4EALL >= (safe_sub_func_int32_t_s_s(((g_8 <= (-9L)) ^ l_31.f2), l_31.f2))) ^ 0x7B8A5F036206CBC8LL), 10)), (-3L))) != l_31.f2));
    for (l_31.f0 = 0; (l_31.f0 < (-1)); l_31.f0 = safe_sub_func_uint16_t_u_u(l_31.f0, 3))
    { 
        int64_t l_40[3][4] = {{1L,(-9L),1L,0x66C79A83ADAB8F5BLL},{1L,0x66C79A83ADAB8F5BLL,0x66C79A83ADAB8F5BLL,1L},{(-1L),0x66C79A83ADAB8F5BLL,0xBB579AB67338D581LL,0x66C79A83ADAB8F5BLL}};
        struct S2 l_41[5] = {{4L,0x50E6E27DL},{4L,0x50E6E27DL},{4L,0x50E6E27DL},{4L,0x50E6E27DL},{4L,0x50E6E27DL}};
        const int32_t l_52 = 0xEDF5A291L;
        struct S5 l_121 = {0x21F159A5L,2UL,4294967289UL,7L};
        struct S0 l_122 = {-1L};
        int i, j;
        for (g_6 = 0; (g_6 <= 2); g_6 += 1)
        { 
            struct S5 l_54[2] = {{4294967290UL,18446744073709551615UL,1UL,7L},{4294967290UL,18446744073709551615UL,1UL,7L}};
            int32_t l_78 = 0x97C0B8F9L;
            int i, j;
            l_41[4] = l_31.f1;
            if ((safe_sub_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(8L, (l_31.f1.f0 ^= l_40[g_6][g_6]))) ^ ((~l_40[g_6][(g_6 + 1)]) || (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((l_41[4].f0 = ((((((l_51 , l_40[g_6][(g_6 + 1)]) <= 0x2DL) , l_40[g_6][(g_6 + 1)]) > 4L) && 0xF8L) <= 0L)) == l_52) >= g_12), g_2)), l_52)))) <= 0UL), 0x6A45L)))
            { 
                uint32_t l_75 = 0UL;
                uint32_t l_79[5][1][4];
                uint32_t l_80[5][3][1] = {{{9UL},{9UL},{1UL}},{{0UL},{1UL},{9UL}},{{9UL},{1UL},{0UL}},{{1UL},{9UL},{9UL}},{{1UL},{0UL},{1UL}}};
                int32_t l_81 = 0x6AF1C485L;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_79[i][j][k] = 0x3A7054D2L;
                    }
                }
                l_54[0] = g_53;
                l_81 = ((l_40[1][3] != ((((safe_add_func_uint16_t_u_u((((+(l_80[0][2][0] = ((safe_lshift_func_uint8_t_u_s((((((((g_76 |= (safe_sub_func_uint64_t_u_u(g_8, (safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_div_func_uint64_t_u_u((((p_26 | (((0xFBL & l_40[g_6][(g_6 + 1)]) < 0x04CEL) | 4294967295UL)) , g_53.f2) && 0x757325A1L), l_31.f1.f1)) && l_74) | l_75), 0x8113439BL)), p_25)), 0xA1E6DEAED54F57EBLL)) && g_53.f2) == p_26), p_25))))) || (-3L)) <= g_12) < g_77) < l_78) > g_12) & 0L), g_53.f2)) != l_79[0][0][0]))) , 0xDBEEL) & l_78), g_12)) != p_25) > p_25) != 0xE202L)) != (-7L));
            }
            else
            { 
                int16_t l_86 = (-1L);
                --g_88;
            }
        }
        for (g_53.f2 = 0; (g_53.f2 <= 48); g_53.f2++)
        { 
            uint8_t l_99[4][3][3] = {{{255UL,252UL,0UL},{255UL,0x6DL,0x6DL},{0UL,255UL,0xEEL}},{{252UL,255UL,1UL},{0UL,0UL,253UL},{255UL,252UL,9UL}},{{255UL,0UL,255UL},{0x6DL,255UL,1UL},{252UL,255UL,255UL}},{{1UL,0x6DL,9UL},{0UL,252UL,253UL},{1UL,1UL,1UL}}};
            int32_t l_113 = 0x2840ACBBL;
            int32_t l_114 = 1L;
            int32_t l_115[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_115[i] = 0xF9AD1E1EL;
            if ((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((p_26 | l_99[0][1][0]) >= l_99[0][1][0]), ((((g_84 = (safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(0x878E731BL, l_99[1][2][2])) & 0x4D72C3A22099EBF9LL), p_25))) || 5L) ^ 0UL) != 0x93L))), 0x81L)), 0x0D8CL)))
            { 
                uint8_t l_112 = 3UL;
                g_6 = ((safe_div_func_int32_t_s_s((g_76 >= (0x10L <= (l_113 = (p_26 != (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((l_41[4].f0 = ((((safe_add_func_uint64_t_u_u(3UL, p_25)) == 0x41L) < (-1L)) , l_112)) >= p_25), l_40[2][2])), (-10L))))))), p_26)) < p_25);
                l_113 = (0xC725F5692BD29671LL && ((1L > l_31.f1.f0) , (l_31.f0 | 1L)));
            }
            else
            { 
                const struct S5 l_119 = {1UL,18446744073709551615UL,0x6E0B1FDEL,0x4AB730D5L};
                g_116++;
                l_51.f1 = l_119;
                if (p_25)
                    continue;
            }
            l_121 = l_120;
            g_2 = ((((l_41[4].f0 ^= (((l_122 , 0UL) & ((g_128[0] = ((safe_lshift_func_uint16_t_u_s(g_77, (safe_mod_func_int32_t_s_s((g_127 , l_31.f2), p_25)))) ^ p_25)) | p_26)) > l_52)) | g_53.f2) && l_121.f1) & l_114);
        }
    }
    if (g_128[0])
    { 
        int16_t l_140 = 0L;
        g_6 = (safe_sub_func_uint64_t_u_u((g_139 = ((safe_sub_func_int64_t_s_s(((((~g_53.f0) >= (safe_sub_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(0xA8BF02E390C49C4BLL, 0x92A46F7BBE786ADALL)) > (g_128[0] | 0x1554L)), 0x2619L))) , g_53.f1) , (-1L)), l_138)) != p_25)), l_140));
    }
    else
    { 
        l_31.f0 = 1L;
    }
    return l_141[2][0];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_297[i], "g_297[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);

    }
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_313.f0, "g_313.f0", print_hash_value);
    transparent_crc(g_313.f1, "g_313.f1", print_hash_value);
    transparent_crc(g_313.f2, "g_313.f2", print_hash_value);
    transparent_crc(g_313.f3, "g_313.f3", print_hash_value);
    transparent_crc(g_313.f4, "g_313.f4", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_319[i], "g_319[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
